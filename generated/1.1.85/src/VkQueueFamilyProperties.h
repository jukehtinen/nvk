/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.8
 */
#ifndef __VK_VKQUEUEFAMILYPROPERTIES_H__
#define __VK_VKQUEUEFAMILYPROPERTIES_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkQueueFamilyProperties: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetqueueFlags);
    static NAN_GETTER(GetqueueCount);
    static NAN_GETTER(GettimestampValidBits);
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> minImageTransferGranularity;
      static NAN_GETTER(GetminImageTransferGranularity);

    // real instance
    VkQueueFamilyProperties instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkQueueFamilyProperties();
    ~_VkQueueFamilyProperties();

};

#endif