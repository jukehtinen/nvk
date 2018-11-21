/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.8
 */
#ifndef __VK_VKDESCRIPTORIMAGEINFO_H__
#define __VK_VKDESCRIPTORIMAGEINFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkDescriptorImageInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> sampler;
      static NAN_GETTER(Getsampler);
    static NAN_SETTER(Setsampler);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> imageView;
      static NAN_GETTER(GetimageView);
    static NAN_SETTER(SetimageView);
    
    static NAN_GETTER(GetimageLayout);
    static NAN_SETTER(SetimageLayout);
    

    // real instance
    VkDescriptorImageInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkDescriptorImageInfo();
    ~_VkDescriptorImageInfo();

};

#endif