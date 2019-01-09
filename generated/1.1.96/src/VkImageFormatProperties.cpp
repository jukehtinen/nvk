/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#include "utils.h"
#include "index.h"
#include "VkImageFormatProperties.h"

Nan::Persistent<v8::FunctionTemplate> _VkImageFormatProperties::constructor;

_VkImageFormatProperties::_VkImageFormatProperties() {
  
  
}

_VkImageFormatProperties::~_VkImageFormatProperties() {
  //printf("VkImageFormatProperties deconstructed!!\n");
  
  
  
  
  
  
}

void _VkImageFormatProperties::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkImageFormatProperties::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkImageFormatProperties").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("maxExtent").ToLocalChecked(), GetmaxExtent, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxMipLevels").ToLocalChecked(), GetmaxMipLevels, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxArrayLayers").ToLocalChecked(), GetmaxArrayLayers, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("sampleCounts").ToLocalChecked(), GetsampleCounts, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxResourceSize").ToLocalChecked(), GetmaxResourceSize, nullptr, ctor);
  Nan::Set(target, Nan::New("VkImageFormatProperties").ToLocalChecked(), ctor->GetFunction());
}

bool _VkImageFormatProperties::flush() {
  _VkImageFormatProperties *self = this;
  if (!(self->maxExtent.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->maxExtent);
    
  }
  return true;
}

NAN_METHOD(_VkImageFormatProperties::New) {
  if (info.IsConstructCall()) {
    _VkImageFormatProperties* self = new _VkImageFormatProperties();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkImageFormatProperties constructor cannot be invoked without 'new'");
  }
};

// maxExtent
NAN_GETTER(_VkImageFormatProperties::GetmaxExtent) {
  _VkImageFormatProperties *self = Nan::ObjectWrap::Unwrap<_VkImageFormatProperties>(info.This());
  if (self->maxExtent.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->maxExtent);
    info.GetReturnValue().Set(obj);
  }
}// maxMipLevels
NAN_GETTER(_VkImageFormatProperties::GetmaxMipLevels) {
  _VkImageFormatProperties *self = Nan::ObjectWrap::Unwrap<_VkImageFormatProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.maxMipLevels));
}// maxArrayLayers
NAN_GETTER(_VkImageFormatProperties::GetmaxArrayLayers) {
  _VkImageFormatProperties *self = Nan::ObjectWrap::Unwrap<_VkImageFormatProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.maxArrayLayers));
}// sampleCounts
NAN_GETTER(_VkImageFormatProperties::GetsampleCounts) {
  _VkImageFormatProperties *self = Nan::ObjectWrap::Unwrap<_VkImageFormatProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sampleCounts));
}// maxResourceSize
NAN_GETTER(_VkImageFormatProperties::GetmaxResourceSize) {
  _VkImageFormatProperties *self = Nan::ObjectWrap::Unwrap<_VkImageFormatProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.maxResourceSize));
}