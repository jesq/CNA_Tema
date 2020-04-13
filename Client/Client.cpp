#include <iostream>
#include "NameOperation.grpc.pb.h"

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

int main()
{
    grpc_init();
    ClientContext context;

    auto sum_stub = NameOperationService::NewStub(grpc::CreateChannel("localhost:8888",
        grpc::InsecureChannelCredentials()));

    NameRequest request;
    std::string nume;
    std::cin >> nume;
    request.set_name(nume);

    NoResponse response;

    auto status = sum_stub->Greet(&context, request, &response);
    
    return 0;
}

