// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: NameOperation.proto
#ifndef GRPC_NameOperation_2eproto__INCLUDED
#define GRPC_NameOperation_2eproto__INCLUDED

#include "NameOperation.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

class NameOperationService final {
 public:
  static constexpr char const* service_full_name() {
    return "NameOperationService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status Greet(::grpc::ClientContext* context, const ::NameRequest& request, ::NoResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::NoResponse>> AsyncGreet(::grpc::ClientContext* context, const ::NameRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::NoResponse>>(AsyncGreetRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::NoResponse>> PrepareAsyncGreet(::grpc::ClientContext* context, const ::NameRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::NoResponse>>(PrepareAsyncGreetRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void Greet(::grpc::ClientContext* context, const ::NameRequest* request, ::NoResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Greet(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::NoResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void Greet(::grpc::ClientContext* context, const ::NameRequest* request, ::NoResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void Greet(::grpc::ClientContext* context, const ::NameRequest* request, ::NoResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void Greet(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::NoResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void Greet(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::NoResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::NoResponse>* AsyncGreetRaw(::grpc::ClientContext* context, const ::NameRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::NoResponse>* PrepareAsyncGreetRaw(::grpc::ClientContext* context, const ::NameRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status Greet(::grpc::ClientContext* context, const ::NameRequest& request, ::NoResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::NoResponse>> AsyncGreet(::grpc::ClientContext* context, const ::NameRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::NoResponse>>(AsyncGreetRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::NoResponse>> PrepareAsyncGreet(::grpc::ClientContext* context, const ::NameRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::NoResponse>>(PrepareAsyncGreetRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void Greet(::grpc::ClientContext* context, const ::NameRequest* request, ::NoResponse* response, std::function<void(::grpc::Status)>) override;
      void Greet(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::NoResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void Greet(::grpc::ClientContext* context, const ::NameRequest* request, ::NoResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void Greet(::grpc::ClientContext* context, const ::NameRequest* request, ::NoResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void Greet(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::NoResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void Greet(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::NoResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::NoResponse>* AsyncGreetRaw(::grpc::ClientContext* context, const ::NameRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::NoResponse>* PrepareAsyncGreetRaw(::grpc::ClientContext* context, const ::NameRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Greet_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Greet(::grpc::ServerContext* context, const ::NameRequest* request, ::NoResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Greet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Greet() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Greet() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Greet(::grpc::ServerContext* /*context*/, const ::NameRequest* /*request*/, ::NoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGreet(::grpc::ServerContext* context, ::NameRequest* request, ::grpc::ServerAsyncResponseWriter< ::NoResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Greet<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_Greet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_Greet() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::NameRequest, ::NoResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::NameRequest* request, ::NoResponse* response) { return this->Greet(context, request, response); }));}
    void SetMessageAllocatorFor_Greet(
        ::grpc::experimental::MessageAllocator< ::NameRequest, ::NoResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::NameRequest, ::NoResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_Greet() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Greet(::grpc::ServerContext* /*context*/, const ::NameRequest* /*request*/, ::NoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* Greet(
      ::grpc::CallbackServerContext* /*context*/, const ::NameRequest* /*request*/, ::NoResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* Greet(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::NameRequest* /*request*/, ::NoResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_Greet<Service > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_Greet<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Greet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Greet() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Greet() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Greet(::grpc::ServerContext* /*context*/, const ::NameRequest* /*request*/, ::NoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Greet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Greet() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Greet() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Greet(::grpc::ServerContext* /*context*/, const ::NameRequest* /*request*/, ::NoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGreet(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_Greet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_Greet() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Greet(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_Greet() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Greet(::grpc::ServerContext* /*context*/, const ::NameRequest* /*request*/, ::NoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* Greet(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* Greet(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Greet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Greet() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::NameRequest, ::NoResponse>(std::bind(&WithStreamedUnaryMethod_Greet<BaseClass>::StreamedGreet, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Greet() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Greet(::grpc::ServerContext* /*context*/, const ::NameRequest* /*request*/, ::NoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGreet(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::NameRequest,::NoResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Greet<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Greet<Service > StreamedService;
};


#endif  // GRPC_NameOperation_2eproto__INCLUDED
