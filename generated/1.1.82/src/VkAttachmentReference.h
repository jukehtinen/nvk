/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.8
 */
#ifndef __VK_VKATTACHMENTREFERENCE_H__
#define __VK_VKATTACHMENTREFERENCE_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkAttachmentReference: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(Getattachment);
    static NAN_SETTER(Setattachment);
    
    static NAN_GETTER(Getlayout);
    static NAN_SETTER(Setlayout);
    

    // real instance
    VkAttachmentReference instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkAttachmentReference();
    ~_VkAttachmentReference();

};

#endif