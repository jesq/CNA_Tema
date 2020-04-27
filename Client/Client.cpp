#include <iostream>
#include <string>
#include "NameOperation.grpc.pb.h"
#include "DateOperation.grpc.pb.h"

#include <grpc/grpc.h>
#include <grpcpp/channel.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>


using grpc::Channel;
using grpc::ClientContext;
using grpc::ClientReader;
using grpc::ClientReaderWriter;
using grpc::ClientWriter;

bool isLeap(int year)
{
    return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}

bool Validate(int y, int m, int d)
{
    if (y > 9999 ||
        y < 1800)
        return false;
    if (m < 1 || m>12)
        return false;
    if (d < 1 || d>31)
        return false;

    if (m == 2)
    {
        if (isLeap(y))
            return (d <= 29);
        else
            return (d <= 28);
    }
    if (m == 4 || m == 6 ||
        m == 9 || m == 11)
        return (d <= 30);

    return true;
}

int main()
{
    grpc_init();
    ClientContext context;

   /* auto sum_stub = NameOperationService::NewStub(grpc::CreateChannel("localhost:8888",
        grpc::InsecureChannelCredentials()));
    */

    auto sum_stub = DateOperationService::NewStub(grpc::CreateChannel("localhost:8888",
        grpc::InsecureChannelCredentials()));

    /*NameRequest request;
    std::string nume;
    std::cin >> nume;
    request.set_name(nume);
    */

    DateRequest request;
    std::string data;
    std::cout << "Introduceti data: ";
    std::cin >> data;
    std::cout<<std::endl;
    std::string zi, luna, an;
    int d, m, y;
    zi = data.substr(3, 2);
    luna = data.substr(0, 2);
    an = data.substr(6, 4);
    d = std::stoi(zi);
    m = std::stoi(luna);
    y = std::stoi(an);
    while (Validate(y, m, d) == false)
    {
        std::cout << "Introduceti data: ";
        std::cin >> data;
        zi = data.substr(3, 2);
        luna = data.substr(0, 2);
        an = data.substr(6, 4);
        d = std::stoi(zi);
        m = std::stoi(luna);
        y = std::stoi(an);
        std::cout << std::endl;
    }

    request.set_date(data);

    NoResponse response;

    auto status = sum_stub->Sign(&context, request, &response);
    
    return 0;
}

