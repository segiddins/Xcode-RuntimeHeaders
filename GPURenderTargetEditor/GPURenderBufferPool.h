//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GPURenderTargetEditor/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, GPURenderBuffer, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface GPURenderBufferPool : NSObject <DVTInvalidation>
{
    _Bool _powerOf2ZoomClamping;
    GPURenderBuffer *_pool[24];
    NSArray *_allActiveBuffers;
    NSArray *_activeColorBuffers;
    GPURenderBuffer *_activeDepthBuffer;
    GPURenderBuffer *_activeStencilBuffer;
}

+ (void)initialize;
@property(readonly, nonatomic) GPURenderBuffer *activeStencilBuffer; // @synthesize activeStencilBuffer=_activeStencilBuffer;
@property(readonly, nonatomic) GPURenderBuffer *activeDepthBuffer; // @synthesize activeDepthBuffer=_activeDepthBuffer;
@property(readonly, nonatomic) NSArray *activeColorBuffers; // @synthesize activeColorBuffers=_activeColorBuffers;
@property(readonly, nonatomic) NSArray *allActiveBuffers; // @synthesize allActiveBuffers=_allActiveBuffers;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
@property(readonly, nonatomic) BOOL hasColorData;
@property(readonly, nonatomic) BOOL hasStencilData;
@property(readonly, nonatomic) BOOL hasDepthData;
- (void)enableRenderbuffersWithRenderJobs:(id)arg1;
- (void)setRenderbufferViewCoordinator:(id)arg1;
- (id)initWithContextMenu:(id)arg1 traceEditor:(id)arg2;
- (id)_createRenderBufferWithContextMenu:(id)arg1 andTraceEditor:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

