/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.8
 */
#ifndef __VK_VKINDIRECTCOMMANDSLAYOUTNVX_H__
#define __VK_VKINDIRECTCOMMANDSLAYOUTNVX_H__

#include <nan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkIndirectCommandsLayoutNVX: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);

    // real instance
    VkIndirectCommandsLayoutNVX instance;

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkIndirectCommandsLayoutNVX();
    ~_VkIndirectCommandsLayoutNVX();

};

#endif