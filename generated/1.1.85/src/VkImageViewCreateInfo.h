/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.8
 */
#ifndef __VK_VKIMAGEVIEWCREATEINFO_H__
#define __VK_VKIMAGEVIEWCREATEINFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkImageViewCreateInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pNext;
    static NAN_GETTER(GetpNext);
    static NAN_SETTER(SetpNext);
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> image;
      static NAN_GETTER(Getimage);
    static NAN_SETTER(Setimage);
    
    static NAN_GETTER(GetviewType);
    static NAN_SETTER(SetviewType);
    
    static NAN_GETTER(Getformat);
    static NAN_SETTER(Setformat);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> components;
      static NAN_GETTER(Getcomponents);
    static NAN_SETTER(Setcomponents);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> subresourceRange;
      static NAN_GETTER(GetsubresourceRange);
    static NAN_SETTER(SetsubresourceRange);
    

    // real instance
    VkImageViewCreateInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkImageViewCreateInfo();
    ~_VkImageViewCreateInfo();

};

#endif