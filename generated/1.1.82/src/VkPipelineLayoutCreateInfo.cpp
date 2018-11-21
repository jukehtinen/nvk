/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.8
 */
#include "utils.h"
#include "index.h"
#include "VkPipelineLayoutCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkPipelineLayoutCreateInfo::constructor;

_VkPipelineLayoutCreateInfo::_VkPipelineLayoutCreateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO;
  vpSetLayouts = new std::vector<VkDescriptorSetLayout>;
  vpPushConstantRanges = new std::vector<VkPushConstantRange>;
  
}

_VkPipelineLayoutCreateInfo::~_VkPipelineLayoutCreateInfo() {
  //printf("VkPipelineLayoutCreateInfo deconstructed!!\n");
}

void _VkPipelineLayoutCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPipelineLayoutCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPipelineLayoutCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("setLayoutCount").ToLocalChecked(), GetsetLayoutCount, SetsetLayoutCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pSetLayouts").ToLocalChecked(), GetpSetLayouts, SetpSetLayouts, ctor);
  SetPrototypeAccessor(proto, Nan::New("pushConstantRangeCount").ToLocalChecked(), GetpushConstantRangeCount, SetpushConstantRangeCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pPushConstantRanges").ToLocalChecked(), GetpPushConstantRanges, SetpPushConstantRanges, ctor);
  Nan::Set(target, Nan::New("VkPipelineLayoutCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPipelineLayoutCreateInfo::flush() {
  _VkPipelineLayoutCreateInfo *self = this;
  if (!(self->pSetLayouts.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pSetLayouts);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.setLayoutCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'setLayoutCount' for 'VkPipelineLayoutCreateInfo.pSetLayouts'");
      return false;
    }
    std::vector<VkDescriptorSetLayout>* data = self->vpSetLayouts;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkDescriptorSetLayout::constructor)->HasInstance(obj))) {
        Nan::ThrowTypeError("Expected 'Object [VkDescriptorSetLayout]' for 'VkPipelineLayoutCreateInfo.pSetLayouts'");
        return false;
      }
      _VkDescriptorSetLayout* result = Nan::ObjectWrap::Unwrap<_VkDescriptorSetLayout>(obj);
      
      data->push_back(result->instance);
    };
    self->instance.pSetLayouts = data->data();
  }if (!(self->pPushConstantRanges.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pPushConstantRanges);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.pushConstantRangeCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'pushConstantRangeCount' for 'VkPipelineLayoutCreateInfo.pPushConstantRanges'");
      return false;
    }
    std::vector<VkPushConstantRange>* data = self->vpPushConstantRanges;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkPushConstantRange::constructor)->HasInstance(obj))) {
        Nan::ThrowTypeError("Expected 'Object [VkPushConstantRange]' for 'VkPipelineLayoutCreateInfo.pPushConstantRanges'");
        return false;
      }
      _VkPushConstantRange* result = Nan::ObjectWrap::Unwrap<_VkPushConstantRange>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pPushConstantRanges = data->data();
  }
  return true;
}

NAN_METHOD(_VkPipelineLayoutCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkPipelineLayoutCreateInfo* self = new _VkPipelineLayoutCreateInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("setLayoutCount").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("pSetLayouts").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("pushConstantRangeCount").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("pPushConstantRanges").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPipelineLayoutCreateInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPipelineLayoutCreateInfo::GetsType) {
  _VkPipelineLayoutCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineLayoutCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPipelineLayoutCreateInfo::SetsType) {
  _VkPipelineLayoutCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineLayoutCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkPipelineLayoutCreateInfo.sType'");
  }
}// pNext
NAN_GETTER(_VkPipelineLayoutCreateInfo::GetpNext) {
  _VkPipelineLayoutCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineLayoutCreateInfo>(info.This());
}NAN_SETTER(_VkPipelineLayoutCreateInfo::SetpNext) {
  _VkPipelineLayoutCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineLayoutCreateInfo>(info.This());
}// flags
NAN_GETTER(_VkPipelineLayoutCreateInfo::Getflags) {
  _VkPipelineLayoutCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineLayoutCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkPipelineLayoutCreateInfo::Setflags) {
  _VkPipelineLayoutCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineLayoutCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkPipelineLayoutCreateFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkPipelineLayoutCreateInfo.flags'");
  }
}// setLayoutCount
NAN_GETTER(_VkPipelineLayoutCreateInfo::GetsetLayoutCount) {
  _VkPipelineLayoutCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineLayoutCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.setLayoutCount));
}NAN_SETTER(_VkPipelineLayoutCreateInfo::SetsetLayoutCount) {
  _VkPipelineLayoutCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineLayoutCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.setLayoutCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkPipelineLayoutCreateInfo.setLayoutCount'");
  }
}// pSetLayouts
NAN_GETTER(_VkPipelineLayoutCreateInfo::GetpSetLayouts) {
  _VkPipelineLayoutCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineLayoutCreateInfo>(info.This());
  if (self->pSetLayouts.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pSetLayouts);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPipelineLayoutCreateInfo::SetpSetLayouts) {
  _VkPipelineLayoutCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineLayoutCreateInfo>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pSetLayouts.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pSetLayouts.Reset();
      self->instance.pSetLayouts = nullptr;
    } else {
      return Nan::ThrowTypeError("Expected 'Object [VkDescriptorSetLayout]' for 'VkPipelineLayoutCreateInfo.pSetLayouts'");
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pSetLayouts = VK_NULL_HANDLE;
  } else {
    return Nan::ThrowTypeError("Expected 'Object [VkDescriptorSetLayout]' for 'VkPipelineLayoutCreateInfo.pSetLayouts'");
  }
}// pushConstantRangeCount
NAN_GETTER(_VkPipelineLayoutCreateInfo::GetpushConstantRangeCount) {
  _VkPipelineLayoutCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineLayoutCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.pushConstantRangeCount));
}NAN_SETTER(_VkPipelineLayoutCreateInfo::SetpushConstantRangeCount) {
  _VkPipelineLayoutCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineLayoutCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.pushConstantRangeCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkPipelineLayoutCreateInfo.pushConstantRangeCount'");
  }
}// pPushConstantRanges
NAN_GETTER(_VkPipelineLayoutCreateInfo::GetpPushConstantRanges) {
  _VkPipelineLayoutCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineLayoutCreateInfo>(info.This());
  if (self->pPushConstantRanges.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pPushConstantRanges);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPipelineLayoutCreateInfo::SetpPushConstantRanges) {
  _VkPipelineLayoutCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkPipelineLayoutCreateInfo>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pPushConstantRanges.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pPushConstantRanges.Reset();
      self->instance.pPushConstantRanges = nullptr;
    } else {
      return Nan::ThrowTypeError("Expected 'Object [VkPushConstantRange]' for 'VkPipelineLayoutCreateInfo.pPushConstantRanges'");
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pPushConstantRanges = nullptr;
  } else {
    return Nan::ThrowTypeError("Expected 'Object [VkPushConstantRange]' for 'VkPipelineLayoutCreateInfo.pPushConstantRanges'");
  }
}