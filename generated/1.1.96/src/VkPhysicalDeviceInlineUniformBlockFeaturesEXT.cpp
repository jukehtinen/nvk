/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceInlineUniformBlockFeaturesEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceInlineUniformBlockFeaturesEXT::constructor;

_VkPhysicalDeviceInlineUniformBlockFeaturesEXT::_VkPhysicalDeviceInlineUniformBlockFeaturesEXT() {
  instance.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES_EXT;
  
}

_VkPhysicalDeviceInlineUniformBlockFeaturesEXT::~_VkPhysicalDeviceInlineUniformBlockFeaturesEXT() {
  //printf("VkPhysicalDeviceInlineUniformBlockFeaturesEXT deconstructed!!\n");
  
  
  
  
}

void _VkPhysicalDeviceInlineUniformBlockFeaturesEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceInlineUniformBlockFeaturesEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceInlineUniformBlockFeaturesEXT").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("inlineUniformBlock").ToLocalChecked(), GetinlineUniformBlock, SetinlineUniformBlock, ctor);
  SetPrototypeAccessor(proto, Nan::New("descriptorBindingInlineUniformBlockUpdateAfterBind").ToLocalChecked(), GetdescriptorBindingInlineUniformBlockUpdateAfterBind, SetdescriptorBindingInlineUniformBlockUpdateAfterBind, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceInlineUniformBlockFeaturesEXT").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceInlineUniformBlockFeaturesEXT::flush() {
  _VkPhysicalDeviceInlineUniformBlockFeaturesEXT *self = this;
  
  return true;
}

NAN_METHOD(_VkPhysicalDeviceInlineUniformBlockFeaturesEXT::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceInlineUniformBlockFeaturesEXT* self = new _VkPhysicalDeviceInlineUniformBlockFeaturesEXT();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("inlineUniformBlock").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("descriptorBindingInlineUniformBlockUpdateAfterBind").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceInlineUniformBlockFeaturesEXT constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPhysicalDeviceInlineUniformBlockFeaturesEXT::GetsType) {
  _VkPhysicalDeviceInlineUniformBlockFeaturesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceInlineUniformBlockFeaturesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPhysicalDeviceInlineUniformBlockFeaturesEXT::SetsType) {
  _VkPhysicalDeviceInlineUniformBlockFeaturesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceInlineUniformBlockFeaturesEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceInlineUniformBlockFeaturesEXT.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// inlineUniformBlock
NAN_GETTER(_VkPhysicalDeviceInlineUniformBlockFeaturesEXT::GetinlineUniformBlock) {
  _VkPhysicalDeviceInlineUniformBlockFeaturesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceInlineUniformBlockFeaturesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.inlineUniformBlock));
}NAN_SETTER(_VkPhysicalDeviceInlineUniformBlockFeaturesEXT::SetinlineUniformBlock) {
  _VkPhysicalDeviceInlineUniformBlockFeaturesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceInlineUniformBlockFeaturesEXT>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.inlineUniformBlock = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceInlineUniformBlockFeaturesEXT.inlineUniformBlock' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// descriptorBindingInlineUniformBlockUpdateAfterBind
NAN_GETTER(_VkPhysicalDeviceInlineUniformBlockFeaturesEXT::GetdescriptorBindingInlineUniformBlockUpdateAfterBind) {
  _VkPhysicalDeviceInlineUniformBlockFeaturesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceInlineUniformBlockFeaturesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.descriptorBindingInlineUniformBlockUpdateAfterBind));
}NAN_SETTER(_VkPhysicalDeviceInlineUniformBlockFeaturesEXT::SetdescriptorBindingInlineUniformBlockUpdateAfterBind) {
  _VkPhysicalDeviceInlineUniformBlockFeaturesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceInlineUniformBlockFeaturesEXT>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.descriptorBindingInlineUniformBlockUpdateAfterBind = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceInlineUniformBlockFeaturesEXT.descriptorBindingInlineUniformBlockUpdateAfterBind' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}