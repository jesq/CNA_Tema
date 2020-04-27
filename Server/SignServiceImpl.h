#pragma once

#include <DateOperation.grpc.pb.h>

class SignServiceImpl final : public DateOperationService::Service
{
public:
	SignServiceImpl() {}
	::grpc::Status Sign(::grpc::ServerContext* context, const ::DateRequest* request, ::NoResponse* response) override;
};