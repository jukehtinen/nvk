/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.8
 */
#include "utils.h"
#include "index.h"
#include "VkCopyDescriptorSet.h"

Nan::Persistent<v8::FunctionTemplate> _VkCopyDescriptorSet::constructor;

_VkCopyDescriptorSet::_VkCopyDescriptorSet() {
  instance.sType = VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET;
  
}

_VkCopyDescriptorSet::~_VkCopyDescriptorSet() {
  //printf("VkCopyDescriptorSet deconstructed!!\n");
}

void _VkCopyDescriptorSet::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkCopyDescriptorSet::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkCopyDescriptorSet").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("srcSet").ToLocalChecked(), GetsrcSet, SetsrcSet, ctor);
  SetPrototypeAccessor(proto, Nan::New("srcBinding").ToLocalChecked(), GetsrcBinding, SetsrcBinding, ctor);
  SetPrototypeAccessor(proto, Nan::New("srcArrayElement").ToLocalChecked(), GetsrcArrayElement, SetsrcArrayElement, ctor);
  SetPrototypeAccessor(proto, Nan::New("dstSet").ToLocalChecked(), GetdstSet, SetdstSet, ctor);
  SetPrototypeAccessor(proto, Nan::New("dstBinding").ToLocalChecked(), GetdstBinding, SetdstBinding, ctor);
  SetPrototypeAccessor(proto, Nan::New("dstArrayElement").ToLocalChecked(), GetdstArrayElement, SetdstArrayElement, ctor);
  SetPrototypeAccessor(proto, Nan::New("descriptorCount").ToLocalChecked(), GetdescriptorCount, SetdescriptorCount, ctor);
  Nan::Set(target, Nan::New("VkCopyDescriptorSet").ToLocalChecked(), ctor->GetFunction());
}

bool _VkCopyDescriptorSet::flush() {
  _VkCopyDescriptorSet *self = this;
  
  return true;
}

NAN_METHOD(_VkCopyDescriptorSet::New) {
  if (info.IsConstructCall()) {
    _VkCopyDescriptorSet* self = new _VkCopyDescriptorSet();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("srcSet").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("srcBinding").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("srcArrayElement").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("dstSet").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("dstBinding").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("dstArrayElement").ToLocalChecked();
      v8::Local<v8::String> sAccess8 = Nan::New("descriptorCount").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      if (obj->Has(sAccess7)) info.This()->Set(sAccess7, obj->Get(sAccess7));
      if (obj->Has(sAccess8)) info.This()->Set(sAccess8, obj->Get(sAccess8));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkCopyDescriptorSet constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkCopyDescriptorSet::GetsType) {
  _VkCopyDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkCopyDescriptorSet>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkCopyDescriptorSet::SetsType) {
  _VkCopyDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkCopyDescriptorSet>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkCopyDescriptorSet.sType'");
  }
}// pNext
NAN_GETTER(_VkCopyDescriptorSet::GetpNext) {
  _VkCopyDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkCopyDescriptorSet>(info.This());
}NAN_SETTER(_VkCopyDescriptorSet::SetpNext) {
  _VkCopyDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkCopyDescriptorSet>(info.This());
}// srcSet
NAN_GETTER(_VkCopyDescriptorSet::GetsrcSet) {
  _VkCopyDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkCopyDescriptorSet>(info.This());
  if (self->srcSet.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->srcSet);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkCopyDescriptorSet::SetsrcSet) {
  _VkCopyDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkCopyDescriptorSet>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkDescriptorSet::constructor)->HasInstance(obj)) {
      self->srcSet.Reset<v8::Object>(value.As<v8::Object>());
      _VkDescriptorSet* inst = Nan::ObjectWrap::Unwrap<_VkDescriptorSet>(obj);
      ;
      self->instance.srcSet = inst->instance;
    } else {
      return Nan::ThrowTypeError("Expected 'Object [VkDescriptorSet]' for 'VkCopyDescriptorSet.srcSet'");
    }
  } else if (value->IsNull()) {
    self->srcSet.Reset();
    self->instance.srcSet = VK_NULL_HANDLE;
  } else {
    return Nan::ThrowTypeError("Expected 'Object [VkDescriptorSet]' for 'VkCopyDescriptorSet.srcSet'");
  }
}// srcBinding
NAN_GETTER(_VkCopyDescriptorSet::GetsrcBinding) {
  _VkCopyDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkCopyDescriptorSet>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.srcBinding));
}NAN_SETTER(_VkCopyDescriptorSet::SetsrcBinding) {
  _VkCopyDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkCopyDescriptorSet>(info.This());
  if (value->IsNumber()) {
    self->instance.srcBinding = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkCopyDescriptorSet.srcBinding'");
  }
}// srcArrayElement
NAN_GETTER(_VkCopyDescriptorSet::GetsrcArrayElement) {
  _VkCopyDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkCopyDescriptorSet>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.srcArrayElement));
}NAN_SETTER(_VkCopyDescriptorSet::SetsrcArrayElement) {
  _VkCopyDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkCopyDescriptorSet>(info.This());
  if (value->IsNumber()) {
    self->instance.srcArrayElement = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkCopyDescriptorSet.srcArrayElement'");
  }
}// dstSet
NAN_GETTER(_VkCopyDescriptorSet::GetdstSet) {
  _VkCopyDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkCopyDescriptorSet>(info.This());
  if (self->dstSet.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->dstSet);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkCopyDescriptorSet::SetdstSet) {
  _VkCopyDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkCopyDescriptorSet>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkDescriptorSet::constructor)->HasInstance(obj)) {
      self->dstSet.Reset<v8::Object>(value.As<v8::Object>());
      _VkDescriptorSet* inst = Nan::ObjectWrap::Unwrap<_VkDescriptorSet>(obj);
      ;
      self->instance.dstSet = inst->instance;
    } else {
      return Nan::ThrowTypeError("Expected 'Object [VkDescriptorSet]' for 'VkCopyDescriptorSet.dstSet'");
    }
  } else if (value->IsNull()) {
    self->dstSet.Reset();
    self->instance.dstSet = VK_NULL_HANDLE;
  } else {
    return Nan::ThrowTypeError("Expected 'Object [VkDescriptorSet]' for 'VkCopyDescriptorSet.dstSet'");
  }
}// dstBinding
NAN_GETTER(_VkCopyDescriptorSet::GetdstBinding) {
  _VkCopyDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkCopyDescriptorSet>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.dstBinding));
}NAN_SETTER(_VkCopyDescriptorSet::SetdstBinding) {
  _VkCopyDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkCopyDescriptorSet>(info.This());
  if (value->IsNumber()) {
    self->instance.dstBinding = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkCopyDescriptorSet.dstBinding'");
  }
}// dstArrayElement
NAN_GETTER(_VkCopyDescriptorSet::GetdstArrayElement) {
  _VkCopyDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkCopyDescriptorSet>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.dstArrayElement));
}NAN_SETTER(_VkCopyDescriptorSet::SetdstArrayElement) {
  _VkCopyDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkCopyDescriptorSet>(info.This());
  if (value->IsNumber()) {
    self->instance.dstArrayElement = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkCopyDescriptorSet.dstArrayElement'");
  }
}// descriptorCount
NAN_GETTER(_VkCopyDescriptorSet::GetdescriptorCount) {
  _VkCopyDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkCopyDescriptorSet>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.descriptorCount));
}NAN_SETTER(_VkCopyDescriptorSet::SetdescriptorCount) {
  _VkCopyDescriptorSet *self = Nan::ObjectWrap::Unwrap<_VkCopyDescriptorSet>(info.This());
  if (value->IsNumber()) {
    self->instance.descriptorCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkCopyDescriptorSet.descriptorCount'");
  }
}