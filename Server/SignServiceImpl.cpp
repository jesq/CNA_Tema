#include "SignServiceImpl.h"

#include <iostream>
#include <vector>
#include <fstream>

::grpc::Status SignServiceImpl::Sign(::grpc::ServerContext* context, const::DateRequest* request, ::NoResponse* response)
{
	std::ifstream f("Zodii.txt");
	struct Interval
	{
		std::string luna1;
		std::string ziua1;
		std::string luna2;
		std::string ziua2;
		std::string zodie;
	};
	std::string dataClient = request->date();
	std::string dataClientLuna = dataClient.substr(0, 2);
	std::string dataClientZi = dataClient.substr(3, 2);
	std::vector<Interval> zodii;
	std::string line;
	Interval data;
	while (getline(f, line))
	{
		data.luna1 = line.substr(0, 2);
		data.ziua1 = line.substr(3, 2);
		getline(f, line);
		data.luna2 = line.substr(0, 2);
		data.ziua2 = line.substr(3, 2);
		getline(f, line);
		data.zodie = line;
		zodii.push_back(data);
	}

	for (int i = 0;i < zodii.size();i++)
	{
		if (dataClientLuna == zodii.at(i).luna1)
		{
			if (dataClientZi >= zodii.at(i).ziua1)
			{
				std::cout << zodii.at(i).zodie;
				return ::grpc::Status::OK;
			}
		}
		else if (dataClientLuna == zodii.at(i).luna2)
		{
			if (dataClientZi <= zodii.at(i).ziua2)
			{
				std::cout << zodii.at(i).zodie;
				return ::grpc::Status::OK;
			}
		}
	}

}
