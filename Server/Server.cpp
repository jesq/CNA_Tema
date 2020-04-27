#include <iostream>
#include "GreetServiceImpl.h"
#include "SignServiceImpl.h"

#include <grpc/grpc.h>
#include <grpcpp/server.h>
#include <grpcpp/server_builder.h>
#include <grpcpp/server_context.h>

int main()
{
    std::string server_address("localhost:8888");
    //GreetServiceImpl service;
    SignServiceImpl service;

    ::grpc_impl::ServerBuilder serverBuilder;
    serverBuilder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    serverBuilder.RegisterService(&service);
    std::unique_ptr<::grpc_impl::Server> server(serverBuilder.BuildAndStart());
    std::cout << "Server listening on " << server_address << std::endl;
    server->Wait();
}
