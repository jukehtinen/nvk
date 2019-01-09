/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#include "utils.h"
#include "index.h"
#include "VkPipelineCoverageToColorStateCreateInfoNV.h"

Nan::Persistent<v8::FunctionTemplate> _VkPipelineCoverageToColorStateCreateInfoNV::constructor;

_VkPipelineCoverageToColorStateCreateInfoNV::_VkPipelineCoverageToColorStateCreateInfoNV() {
  instance.sType = VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV;
  
}

_VkPipelineCoverageToColorStateCreateInfoNV::~_VkPipelineCoverageToColorStateCreateInfoNV() {
  //printf("VkPipelineCoverageToColorStateCreateInfoNV deconstructed!!\n");
  
  
  
  
  
}

void _VkPipelineCoverageToColorStateCreateInfoNV::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPipelineCoverageToColorStateCreateInfoNV::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPipelineCoverageToColorStateCreateInfoNV").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("coverageToColorEnable").ToLocalChecked(), GetcoverageToColorEnable, SetcoverageToColorEnable, ctor);
  SetPrototypeAccessor(proto, Nan::New("coverageToColorLocation").ToLocalChecked(), GetcoverageToColorLocation, SetcoverageToColorLocation, ctor);
  Nan::Set(target, Nan::New("VkPipelineCoverageToColorStateCreateInfoNV").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPipelineCoverageToColorStateCreateInfoNV::flush() {
  _VkPipelineCoverageToColorStateCreateInfoNV *self = this;
  
  return true;
}

NAN_METHOD(_VkPipelineCoverageToColorStateCreateInfoNV::New) {
  if (info.IsConstructCall()) {
    _VkPipelineCoverageToColorStateCreateInfoNV* self = new _VkPipelineCoverageToColorStateCreateInfoNV();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("coverageToColorEnable").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("coverageToColorLocation").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPipelineCoverageToColorStateCreateInfoNV constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPipelineCoverageToColorStateCreateInfoNV::GetsType) {
  _VkPipelineCoverageToColorStateCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkPipelineCoverageToColorStateCreateInfoNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPipelineCoverageToColorStateCreateInfoNV::SetsType) {
  _VkPipelineCoverageToColorStateCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkPipelineCoverageToColorStateCreateInfoNV>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineCoverageToColorStateCreateInfoNV.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// flags
NAN_GETTER(_VkPipelineCoverageToColorStateCreateInfoNV::Getflags) {
  _VkPipelineCoverageToColorStateCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkPipelineCoverageToColorStateCreateInfoNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkPipelineCoverageToColorStateCreateInfoNV::Setflags) {
  _VkPipelineCoverageToColorStateCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkPipelineCoverageToColorStateCreateInfoNV>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkPipelineCoverageToColorStateCreateFlagsNV>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineCoverageToColorStateCreateInfoNV.flags' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// coverageToColorEnable
NAN_GETTER(_VkPipelineCoverageToColorStateCreateInfoNV::GetcoverageToColorEnable) {
  _VkPipelineCoverageToColorStateCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkPipelineCoverageToColorStateCreateInfoNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.coverageToColorEnable));
}NAN_SETTER(_VkPipelineCoverageToColorStateCreateInfoNV::SetcoverageToColorEnable) {
  _VkPipelineCoverageToColorStateCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkPipelineCoverageToColorStateCreateInfoNV>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.coverageToColorEnable = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineCoverageToColorStateCreateInfoNV.coverageToColorEnable' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// coverageToColorLocation
NAN_GETTER(_VkPipelineCoverageToColorStateCreateInfoNV::GetcoverageToColorLocation) {
  _VkPipelineCoverageToColorStateCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkPipelineCoverageToColorStateCreateInfoNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.coverageToColorLocation));
}NAN_SETTER(_VkPipelineCoverageToColorStateCreateInfoNV::SetcoverageToColorLocation) {
  _VkPipelineCoverageToColorStateCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkPipelineCoverageToColorStateCreateInfoNV>(info.This());
  if (value->IsNumber()) {
    self->instance.coverageToColorLocation = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineCoverageToColorStateCreateInfoNV.coverageToColorLocation' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}