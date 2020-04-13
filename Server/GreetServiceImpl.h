#pragma once

#include <NameOperation.grpc.pb.h>

class GreetServiceImpl final : public NameOperationService::Service
{
public:
	GreetServiceImpl() {}

	::grpc::Status Greet(::grpc::ServerContext* context, const ::NameRequest* request, ::NoResponse* response) override;
};