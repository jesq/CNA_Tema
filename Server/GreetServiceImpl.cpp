#include "GreetServiceImpl.h"
#include <iostream>

::grpc::Status GreetServiceImpl::Greet(::grpc::ServerContext* context, const::NameRequest* request, ::NoResponse* response)
{
	std::cout << "Salut, " << request->name()<<std::endl;
	return ::grpc::Status::OK;
}
