//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebugger/GPUTraceStateItem.h>

#import <GPUDebuggerGLSupport/DYFunctionTracerDelegate-Protocol.h>
#import <GPUDebuggerGLSupport/GPUGLStateMirrorInterface-Protocol.h>

@class GPUGLStateMirror, NSString;

__attribute__((visibility("hidden")))
@interface GPUGLTraceStateItem : GPUTraceStateItem <DYFunctionTracerDelegate, GPUGLStateMirrorInterface>
{
    GPUGLStateMirror *_stateMirror;
    int _stateMirrorLock;
}

- (void).cxx_destruct;
- (BOOL)isGroupMarkerCall;
- (id)rewriteReceiver:(unsigned long long)arg1;
- (id)rewriteURL:(const char *)arg1;
- (id)rewriteVariable:(const char *)arg1 receiver:(unsigned long long)arg2;
- (id)generateLabel;
@property(readonly) BOOL hasStateMirror;
@property(copy) GPUGLStateMirror *stateMirror;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

