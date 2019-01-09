/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#include "utils.h"
#include "index.h"
#include "VkMemoryRequirements2.h"

Nan::Persistent<v8::FunctionTemplate> _VkMemoryRequirements2::constructor;

_VkMemoryRequirements2::_VkMemoryRequirements2() {
  instance.sType = VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2;
  
}

_VkMemoryRequirements2::~_VkMemoryRequirements2() {
  //printf("VkMemoryRequirements2 deconstructed!!\n");
  
  
  
}

void _VkMemoryRequirements2::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkMemoryRequirements2::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkMemoryRequirements2").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("memoryRequirements").ToLocalChecked(), GetmemoryRequirements, nullptr, ctor);
  Nan::Set(target, Nan::New("VkMemoryRequirements2").ToLocalChecked(), ctor->GetFunction());
}

bool _VkMemoryRequirements2::flush() {
  _VkMemoryRequirements2 *self = this;
  if (!(self->memoryRequirements.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->memoryRequirements);
    
  }
  return true;
}

NAN_METHOD(_VkMemoryRequirements2::New) {
  if (info.IsConstructCall()) {
    _VkMemoryRequirements2* self = new _VkMemoryRequirements2();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkMemoryRequirements2 constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkMemoryRequirements2::GetsType) {
  _VkMemoryRequirements2 *self = Nan::ObjectWrap::Unwrap<_VkMemoryRequirements2>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}// memoryRequirements
NAN_GETTER(_VkMemoryRequirements2::GetmemoryRequirements) {
  _VkMemoryRequirements2 *self = Nan::ObjectWrap::Unwrap<_VkMemoryRequirements2>(info.This());
  if (self->memoryRequirements.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->memoryRequirements);
    info.GetReturnValue().Set(obj);
  }
}