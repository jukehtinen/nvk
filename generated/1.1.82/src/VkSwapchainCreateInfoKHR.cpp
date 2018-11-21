/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.8
 */
#include "utils.h"
#include "index.h"
#include "VkSwapchainCreateInfoKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkSwapchainCreateInfoKHR::constructor;

_VkSwapchainCreateInfoKHR::_VkSwapchainCreateInfoKHR() {
  instance.sType = VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR;
  
}

_VkSwapchainCreateInfoKHR::~_VkSwapchainCreateInfoKHR() {
  //printf("VkSwapchainCreateInfoKHR deconstructed!!\n");
}

void _VkSwapchainCreateInfoKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkSwapchainCreateInfoKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkSwapchainCreateInfoKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("surface").ToLocalChecked(), Getsurface, Setsurface, ctor);
  SetPrototypeAccessor(proto, Nan::New("minImageCount").ToLocalChecked(), GetminImageCount, SetminImageCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("imageFormat").ToLocalChecked(), GetimageFormat, SetimageFormat, ctor);
  SetPrototypeAccessor(proto, Nan::New("imageColorSpace").ToLocalChecked(), GetimageColorSpace, SetimageColorSpace, ctor);
  SetPrototypeAccessor(proto, Nan::New("imageExtent").ToLocalChecked(), GetimageExtent, SetimageExtent, ctor);
  SetPrototypeAccessor(proto, Nan::New("imageArrayLayers").ToLocalChecked(), GetimageArrayLayers, SetimageArrayLayers, ctor);
  SetPrototypeAccessor(proto, Nan::New("imageUsage").ToLocalChecked(), GetimageUsage, SetimageUsage, ctor);
  SetPrototypeAccessor(proto, Nan::New("imageSharingMode").ToLocalChecked(), GetimageSharingMode, SetimageSharingMode, ctor);
  SetPrototypeAccessor(proto, Nan::New("queueFamilyIndexCount").ToLocalChecked(), GetqueueFamilyIndexCount, SetqueueFamilyIndexCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pQueueFamilyIndices").ToLocalChecked(), GetpQueueFamilyIndices, SetpQueueFamilyIndices, ctor);
  SetPrototypeAccessor(proto, Nan::New("preTransform").ToLocalChecked(), GetpreTransform, SetpreTransform, ctor);
  SetPrototypeAccessor(proto, Nan::New("compositeAlpha").ToLocalChecked(), GetcompositeAlpha, SetcompositeAlpha, ctor);
  SetPrototypeAccessor(proto, Nan::New("presentMode").ToLocalChecked(), GetpresentMode, SetpresentMode, ctor);
  SetPrototypeAccessor(proto, Nan::New("clipped").ToLocalChecked(), Getclipped, Setclipped, ctor);
  SetPrototypeAccessor(proto, Nan::New("oldSwapchain").ToLocalChecked(), GetoldSwapchain, SetoldSwapchain, ctor);
  Nan::Set(target, Nan::New("VkSwapchainCreateInfoKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkSwapchainCreateInfoKHR::flush() {
  _VkSwapchainCreateInfoKHR *self = this;
  if (!(self->imageExtent.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->imageExtent);
    
    _VkExtent2D* result = Nan::ObjectWrap::Unwrap<_VkExtent2D>(Nan::To<v8::Object>(value).ToLocalChecked());
    if (!result->flush()) return false;
    self->instance.imageExtent = result->instance;
  }
  return true;
}

NAN_METHOD(_VkSwapchainCreateInfoKHR::New) {
  if (info.IsConstructCall()) {
    _VkSwapchainCreateInfoKHR* self = new _VkSwapchainCreateInfoKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("surface").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("minImageCount").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("imageFormat").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("imageColorSpace").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("imageExtent").ToLocalChecked();
      v8::Local<v8::String> sAccess8 = Nan::New("imageArrayLayers").ToLocalChecked();
      v8::Local<v8::String> sAccess9 = Nan::New("imageUsage").ToLocalChecked();
      v8::Local<v8::String> sAccess10 = Nan::New("imageSharingMode").ToLocalChecked();
      v8::Local<v8::String> sAccess11 = Nan::New("queueFamilyIndexCount").ToLocalChecked();
      v8::Local<v8::String> sAccess12 = Nan::New("pQueueFamilyIndices").ToLocalChecked();
      v8::Local<v8::String> sAccess13 = Nan::New("preTransform").ToLocalChecked();
      v8::Local<v8::String> sAccess14 = Nan::New("compositeAlpha").ToLocalChecked();
      v8::Local<v8::String> sAccess15 = Nan::New("presentMode").ToLocalChecked();
      v8::Local<v8::String> sAccess16 = Nan::New("clipped").ToLocalChecked();
      v8::Local<v8::String> sAccess17 = Nan::New("oldSwapchain").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      if (obj->Has(sAccess7)) info.This()->Set(sAccess7, obj->Get(sAccess7));
      if (obj->Has(sAccess8)) info.This()->Set(sAccess8, obj->Get(sAccess8));
      if (obj->Has(sAccess9)) info.This()->Set(sAccess9, obj->Get(sAccess9));
      if (obj->Has(sAccess10)) info.This()->Set(sAccess10, obj->Get(sAccess10));
      if (obj->Has(sAccess11)) info.This()->Set(sAccess11, obj->Get(sAccess11));
      if (obj->Has(sAccess12)) info.This()->Set(sAccess12, obj->Get(sAccess12));
      if (obj->Has(sAccess13)) info.This()->Set(sAccess13, obj->Get(sAccess13));
      if (obj->Has(sAccess14)) info.This()->Set(sAccess14, obj->Get(sAccess14));
      if (obj->Has(sAccess15)) info.This()->Set(sAccess15, obj->Get(sAccess15));
      if (obj->Has(sAccess16)) info.This()->Set(sAccess16, obj->Get(sAccess16));
      if (obj->Has(sAccess17)) info.This()->Set(sAccess17, obj->Get(sAccess17));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkSwapchainCreateInfoKHR constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkSwapchainCreateInfoKHR::GetsType) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkSwapchainCreateInfoKHR::SetsType) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkSwapchainCreateInfoKHR.sType'");
  }
}// pNext
NAN_GETTER(_VkSwapchainCreateInfoKHR::GetpNext) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
}NAN_SETTER(_VkSwapchainCreateInfoKHR::SetpNext) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
}// flags
NAN_GETTER(_VkSwapchainCreateInfoKHR::Getflags) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkSwapchainCreateInfoKHR::Setflags) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkSwapchainCreateFlagsKHR>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkSwapchainCreateInfoKHR.flags'");
  }
}// surface
NAN_GETTER(_VkSwapchainCreateInfoKHR::Getsurface) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  if (self->surface.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->surface);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkSwapchainCreateInfoKHR::Setsurface) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkSurfaceKHR::constructor)->HasInstance(obj)) {
      self->surface.Reset<v8::Object>(value.As<v8::Object>());
      _VkSurfaceKHR* inst = Nan::ObjectWrap::Unwrap<_VkSurfaceKHR>(obj);
      ;
      self->instance.surface = inst->instance;
    } else {
      return Nan::ThrowTypeError("Expected 'Object [VkSurfaceKHR]' for 'VkSwapchainCreateInfoKHR.surface'");
    }
  } else if (value->IsNull()) {
    self->surface.Reset();
    self->instance.surface = VK_NULL_HANDLE;
  } else {
    return Nan::ThrowTypeError("Expected 'Object [VkSurfaceKHR]' for 'VkSwapchainCreateInfoKHR.surface'");
  }
}// minImageCount
NAN_GETTER(_VkSwapchainCreateInfoKHR::GetminImageCount) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.minImageCount));
}NAN_SETTER(_VkSwapchainCreateInfoKHR::SetminImageCount) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.minImageCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkSwapchainCreateInfoKHR.minImageCount'");
  }
}// imageFormat
NAN_GETTER(_VkSwapchainCreateInfoKHR::GetimageFormat) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.imageFormat));
}NAN_SETTER(_VkSwapchainCreateInfoKHR::SetimageFormat) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.imageFormat = static_cast<VkFormat>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkSwapchainCreateInfoKHR.imageFormat'");
  }
}// imageColorSpace
NAN_GETTER(_VkSwapchainCreateInfoKHR::GetimageColorSpace) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.imageColorSpace));
}NAN_SETTER(_VkSwapchainCreateInfoKHR::SetimageColorSpace) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.imageColorSpace = static_cast<VkColorSpaceKHR>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkSwapchainCreateInfoKHR.imageColorSpace'");
  }
}// imageExtent
NAN_GETTER(_VkSwapchainCreateInfoKHR::GetimageExtent) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  if (self->imageExtent.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->imageExtent);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkSwapchainCreateInfoKHR::SetimageExtent) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkExtent2D::constructor)->HasInstance(obj)) {
      self->imageExtent.Reset<v8::Object>(value.As<v8::Object>());
      _VkExtent2D* inst = Nan::ObjectWrap::Unwrap<_VkExtent2D>(obj);
      inst->flush();
      self->instance.imageExtent = inst->instance;
    } else {
      return Nan::ThrowTypeError("Expected 'Object [VkExtent2D]' for 'VkSwapchainCreateInfoKHR.imageExtent'");
    }
  } else if (value->IsNull()) {
    self->imageExtent.Reset();
    memset(&self->instance.imageExtent, 0, sizeof(VkExtent2D));
  } else {
    return Nan::ThrowTypeError("Expected 'Object [VkExtent2D]' for 'VkSwapchainCreateInfoKHR.imageExtent'");
  }
}// imageArrayLayers
NAN_GETTER(_VkSwapchainCreateInfoKHR::GetimageArrayLayers) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.imageArrayLayers));
}NAN_SETTER(_VkSwapchainCreateInfoKHR::SetimageArrayLayers) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.imageArrayLayers = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkSwapchainCreateInfoKHR.imageArrayLayers'");
  }
}// imageUsage
NAN_GETTER(_VkSwapchainCreateInfoKHR::GetimageUsage) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.imageUsage));
}NAN_SETTER(_VkSwapchainCreateInfoKHR::SetimageUsage) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.imageUsage = static_cast<VkImageUsageFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkSwapchainCreateInfoKHR.imageUsage'");
  }
}// imageSharingMode
NAN_GETTER(_VkSwapchainCreateInfoKHR::GetimageSharingMode) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.imageSharingMode));
}NAN_SETTER(_VkSwapchainCreateInfoKHR::SetimageSharingMode) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.imageSharingMode = static_cast<VkSharingMode>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkSwapchainCreateInfoKHR.imageSharingMode'");
  }
}// queueFamilyIndexCount
NAN_GETTER(_VkSwapchainCreateInfoKHR::GetqueueFamilyIndexCount) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.queueFamilyIndexCount));
}NAN_SETTER(_VkSwapchainCreateInfoKHR::SetqueueFamilyIndexCount) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.queueFamilyIndexCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkSwapchainCreateInfoKHR.queueFamilyIndexCount'");
  }
}// pQueueFamilyIndices
NAN_GETTER(_VkSwapchainCreateInfoKHR::GetpQueueFamilyIndices) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  if (self->pQueueFamilyIndices.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pQueueFamilyIndices);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkSwapchainCreateInfoKHR::SetpQueueFamilyIndices) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  
    // js
    if (value->IsArrayBufferView()) {
      if (value->IsUint32Array()) {
        self->pQueueFamilyIndices.Reset<v8::Array>(value.As<v8::Array>());
      } else {
        return Nan::ThrowTypeError("Expected 'Uint32Array' for 'VkSwapchainCreateInfoKHR.pQueueFamilyIndices'");
      }
    } else if (value->IsNull()) {
      self->pQueueFamilyIndices.Reset();
    } else {
      return Nan::ThrowTypeError("Expected 'Uint32Array' for 'VkSwapchainCreateInfoKHR.pQueueFamilyIndices'");
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pQueueFamilyIndices = getTypedArrayData<uint32_t>(Nan::To<v8::Object>(value).ToLocalChecked(), nullptr);
  } else {
    self->instance.pQueueFamilyIndices = nullptr;
  }
}// preTransform
NAN_GETTER(_VkSwapchainCreateInfoKHR::GetpreTransform) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.preTransform));
}NAN_SETTER(_VkSwapchainCreateInfoKHR::SetpreTransform) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.preTransform = static_cast<VkSurfaceTransformFlagBitsKHR>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkSwapchainCreateInfoKHR.preTransform'");
  }
}// compositeAlpha
NAN_GETTER(_VkSwapchainCreateInfoKHR::GetcompositeAlpha) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.compositeAlpha));
}NAN_SETTER(_VkSwapchainCreateInfoKHR::SetcompositeAlpha) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.compositeAlpha = static_cast<VkCompositeAlphaFlagBitsKHR>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkSwapchainCreateInfoKHR.compositeAlpha'");
  }
}// presentMode
NAN_GETTER(_VkSwapchainCreateInfoKHR::GetpresentMode) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.presentMode));
}NAN_SETTER(_VkSwapchainCreateInfoKHR::SetpresentMode) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.presentMode = static_cast<VkPresentModeKHR>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkSwapchainCreateInfoKHR.presentMode'");
  }
}// clipped
NAN_GETTER(_VkSwapchainCreateInfoKHR::Getclipped) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.clipped));
}NAN_SETTER(_VkSwapchainCreateInfoKHR::Setclipped) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.clipped = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkSwapchainCreateInfoKHR.clipped'");
  }
}// oldSwapchain
NAN_GETTER(_VkSwapchainCreateInfoKHR::GetoldSwapchain) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  if (self->oldSwapchain.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->oldSwapchain);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkSwapchainCreateInfoKHR::SetoldSwapchain) {
  _VkSwapchainCreateInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkSwapchainCreateInfoKHR>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkSwapchainKHR::constructor)->HasInstance(obj)) {
      self->oldSwapchain.Reset<v8::Object>(value.As<v8::Object>());
      _VkSwapchainKHR* inst = Nan::ObjectWrap::Unwrap<_VkSwapchainKHR>(obj);
      ;
      self->instance.oldSwapchain = inst->instance;
    } else {
      return Nan::ThrowTypeError("Expected 'Object [VkSwapchainKHR]' for 'VkSwapchainCreateInfoKHR.oldSwapchain'");
    }
  } else if (value->IsNull()) {
    self->oldSwapchain.Reset();
    self->instance.oldSwapchain = VK_NULL_HANDLE;
  } else {
    return Nan::ThrowTypeError("Expected 'Object [VkSwapchainKHR]' for 'VkSwapchainCreateInfoKHR.oldSwapchain'");
  }
}