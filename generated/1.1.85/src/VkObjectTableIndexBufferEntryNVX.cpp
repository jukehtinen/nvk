/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkObjectTableIndexBufferEntryNVX.h"

Nan::Persistent<v8::FunctionTemplate> _VkObjectTableIndexBufferEntryNVX::constructor;

_VkObjectTableIndexBufferEntryNVX::_VkObjectTableIndexBufferEntryNVX() {
  
  
}

_VkObjectTableIndexBufferEntryNVX::~_VkObjectTableIndexBufferEntryNVX() {
  //printf("VkObjectTableIndexBufferEntryNVX deconstructed!!\n");
  
  
  
  
  
}

void _VkObjectTableIndexBufferEntryNVX::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkObjectTableIndexBufferEntryNVX::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkObjectTableIndexBufferEntryNVX").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("type").ToLocalChecked(), Gettype, Settype, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("buffer").ToLocalChecked(), Getbuffer, Setbuffer, ctor);
  SetPrototypeAccessor(proto, Nan::New("indexType").ToLocalChecked(), GetindexType, SetindexType, ctor);
  Nan::Set(target, Nan::New("VkObjectTableIndexBufferEntryNVX").ToLocalChecked(), ctor->GetFunction());
}

bool _VkObjectTableIndexBufferEntryNVX::flush() {
  _VkObjectTableIndexBufferEntryNVX *self = this;
  
  return true;
}

NAN_METHOD(_VkObjectTableIndexBufferEntryNVX::New) {
  if (info.IsConstructCall()) {
    _VkObjectTableIndexBufferEntryNVX* self = new _VkObjectTableIndexBufferEntryNVX();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("type").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("buffer").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("indexType").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkObjectTableIndexBufferEntryNVX constructor cannot be invoked without 'new'");
  }
};

// type
NAN_GETTER(_VkObjectTableIndexBufferEntryNVX::Gettype) {
  _VkObjectTableIndexBufferEntryNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableIndexBufferEntryNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.type));
}NAN_SETTER(_VkObjectTableIndexBufferEntryNVX::Settype) {
  _VkObjectTableIndexBufferEntryNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableIndexBufferEntryNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.type = static_cast<VkObjectEntryTypeNVX>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkObjectTableIndexBufferEntryNVX.type' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// flags
NAN_GETTER(_VkObjectTableIndexBufferEntryNVX::Getflags) {
  _VkObjectTableIndexBufferEntryNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableIndexBufferEntryNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkObjectTableIndexBufferEntryNVX::Setflags) {
  _VkObjectTableIndexBufferEntryNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableIndexBufferEntryNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkObjectEntryUsageFlagsNVX>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkObjectTableIndexBufferEntryNVX.flags' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// buffer
NAN_GETTER(_VkObjectTableIndexBufferEntryNVX::Getbuffer) {
  _VkObjectTableIndexBufferEntryNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableIndexBufferEntryNVX>(info.This());
  if (self->buffer.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->buffer);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkObjectTableIndexBufferEntryNVX::Setbuffer) {
  _VkObjectTableIndexBufferEntryNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableIndexBufferEntryNVX>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkBuffer::constructor)->HasInstance(obj)) {
      self->buffer.Reset<v8::Object>(value.As<v8::Object>());
      _VkBuffer* inst = Nan::ObjectWrap::Unwrap<_VkBuffer>(obj);
      ;
      self->instance.buffer = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkBuffer]' for 'VkObjectTableIndexBufferEntryNVX.buffer' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->buffer.Reset();
    self->instance.buffer = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkBuffer]' for 'VkObjectTableIndexBufferEntryNVX.buffer' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// indexType
NAN_GETTER(_VkObjectTableIndexBufferEntryNVX::GetindexType) {
  _VkObjectTableIndexBufferEntryNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableIndexBufferEntryNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.indexType));
}NAN_SETTER(_VkObjectTableIndexBufferEntryNVX::SetindexType) {
  _VkObjectTableIndexBufferEntryNVX *self = Nan::ObjectWrap::Unwrap<_VkObjectTableIndexBufferEntryNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.indexType = static_cast<VkIndexType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkObjectTableIndexBufferEntryNVX.indexType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}