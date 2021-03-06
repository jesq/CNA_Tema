// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: NameOperation.proto

#include "NameOperation.pb.h"
#include "NameOperation.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>

static const char* NameOperationService_method_names[] = {
  "/NameOperationService/Greet",
};

std::unique_ptr< NameOperationService::Stub> NameOperationService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< NameOperationService::Stub> stub(new NameOperationService::Stub(channel));
  return stub;
}

NameOperationService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Greet_(NameOperationService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status NameOperationService::Stub::Greet(::grpc::ClientContext* context, const ::NameRequest& request, ::NoResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Greet_, context, request, response);
}

void NameOperationService::Stub::experimental_async::Greet(::grpc::ClientContext* context, const ::NameRequest* request, ::NoResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Greet_, context, request, response, std::move(f));
}

void NameOperationService::Stub::experimental_async::Greet(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::NoResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Greet_, context, request, response, std::move(f));
}

void NameOperationService::Stub::experimental_async::Greet(::grpc::ClientContext* context, const ::NameRequest* request, ::NoResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Greet_, context, request, response, reactor);
}

void NameOperationService::Stub::experimental_async::Greet(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::NoResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Greet_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::NoResponse>* NameOperationService::Stub::AsyncGreetRaw(::grpc::ClientContext* context, const ::NameRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::NoResponse>::Create(channel_.get(), cq, rpcmethod_Greet_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::NoResponse>* NameOperationService::Stub::PrepareAsyncGreetRaw(::grpc::ClientContext* context, const ::NameRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::NoResponse>::Create(channel_.get(), cq, rpcmethod_Greet_, context, request, false);
}

NameOperationService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      NameOperationService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< NameOperationService::Service, ::NameRequest, ::NoResponse>(
          std::mem_fn(&NameOperationService::Service::Greet), this)));
}

NameOperationService::Service::~Service() {
}

::grpc::Status NameOperationService::Service::Greet(::grpc::ServerContext* context, const ::NameRequest* request, ::NoResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


