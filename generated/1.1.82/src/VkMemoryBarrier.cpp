/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.8
 */
#include "utils.h"
#include "index.h"
#include "VkMemoryBarrier.h"

Nan::Persistent<v8::FunctionTemplate> _VkMemoryBarrier::constructor;

_VkMemoryBarrier::_VkMemoryBarrier() {
  instance.sType = VK_STRUCTURE_TYPE_MEMORY_BARRIER;
  
}

_VkMemoryBarrier::~_VkMemoryBarrier() {
  //printf("VkMemoryBarrier deconstructed!!\n");
}

void _VkMemoryBarrier::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkMemoryBarrier::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkMemoryBarrier").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("srcAccessMask").ToLocalChecked(), GetsrcAccessMask, SetsrcAccessMask, ctor);
  SetPrototypeAccessor(proto, Nan::New("dstAccessMask").ToLocalChecked(), GetdstAccessMask, SetdstAccessMask, ctor);
  Nan::Set(target, Nan::New("VkMemoryBarrier").ToLocalChecked(), ctor->GetFunction());
}

bool _VkMemoryBarrier::flush() {
  _VkMemoryBarrier *self = this;
  
  return true;
}

NAN_METHOD(_VkMemoryBarrier::New) {
  if (info.IsConstructCall()) {
    _VkMemoryBarrier* self = new _VkMemoryBarrier();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("srcAccessMask").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("dstAccessMask").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkMemoryBarrier constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkMemoryBarrier::GetsType) {
  _VkMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkMemoryBarrier>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkMemoryBarrier::SetsType) {
  _VkMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkMemoryBarrier>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkMemoryBarrier.sType'");
  }
}// pNext
NAN_GETTER(_VkMemoryBarrier::GetpNext) {
  _VkMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkMemoryBarrier>(info.This());
}NAN_SETTER(_VkMemoryBarrier::SetpNext) {
  _VkMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkMemoryBarrier>(info.This());
}// srcAccessMask
NAN_GETTER(_VkMemoryBarrier::GetsrcAccessMask) {
  _VkMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkMemoryBarrier>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.srcAccessMask));
}NAN_SETTER(_VkMemoryBarrier::SetsrcAccessMask) {
  _VkMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkMemoryBarrier>(info.This());
  if (value->IsNumber()) {
    self->instance.srcAccessMask = static_cast<VkAccessFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkMemoryBarrier.srcAccessMask'");
  }
}// dstAccessMask
NAN_GETTER(_VkMemoryBarrier::GetdstAccessMask) {
  _VkMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkMemoryBarrier>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.dstAccessMask));
}NAN_SETTER(_VkMemoryBarrier::SetdstAccessMask) {
  _VkMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkMemoryBarrier>(info.This());
  if (value->IsNumber()) {
    self->instance.dstAccessMask = static_cast<VkAccessFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkMemoryBarrier.dstAccessMask'");
  }
}