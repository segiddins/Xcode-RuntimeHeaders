//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DYContextInfo;

__attribute__((visibility("hidden")))
@interface GPUGLBindingResolver : NSObject
{
    const ContextStateMirror_eb2bea29 *_context;
    DYContextInfo *_contextInfo;
}

+ (id)labelForObject:(unsigned long long)arg1 context:(const ContextStateMirror_eb2bea29 *)arg2 target:(unsigned int)arg3;
+ (id)_sharedByteFormatter;
- (void).cxx_destruct;
- (void)_annotateAndProcessBinding:(struct GPUGLBindPoint *)arg1 withBlock:(CDUnknownBlockType)arg2 prefix:(const char *)arg3;
- (void)_annotateRenderbufferBinding:(struct GPUGLBindPoint *)arg1;
- (void)_annotateTextureBinding:(struct GPUGLBindPoint *)arg1;
- (void)_annotateBufferBinding:(struct GPUGLBindPoint *)arg1;
- (void)_annotateResourceBinding:(struct GPUGLBindPoint *)arg1;
- (BOOL)_isDefaultObjectInUse:(int)arg1;
- (void)processBoundTransformFeedbackObjectWithBlock:(CDUnknownBlockType)arg1;
- (void)processBoundProgramWithBlock:(CDUnknownBlockType)arg1;
- (void)_processFramebufferAttachmentsWithBlock:(CDUnknownBlockType)arg1 fromFramebufferBinding:(unsigned int)arg2 withPrefix:(const char *)arg3;
- (void)processBoundFramebuffersWithBlock:(CDUnknownBlockType)arg1;
- (void)processBoundVertexArraysWithBlock:(CDUnknownBlockType)arg1;
- (void)processBoundTexturesWithBlock:(CDUnknownBlockType)arg1;
- (void)processBoundBuffersForFunction:(const struct Function *)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)processAllBoundObjectsForFunction:(const struct Function *)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)processAllObjectsOfType:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)initWithContextStateMirror:(const ContextStateMirror_eb2bea29 *)arg1 andContextInfo:(id)arg2;

@end

