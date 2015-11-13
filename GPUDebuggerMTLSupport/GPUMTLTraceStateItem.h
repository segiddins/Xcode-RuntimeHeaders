//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GPUDebuggerFoundation/GPUTraceStateItem.h>

#import <GPUDebuggerMTLSupport/DYFunctionTracerDelegate-Protocol.h>
#import <GPUDebuggerMTLSupport/GPUMTLStateMirrorInterface-Protocol.h>
#import <GPUDebuggerMTLSupport/GPUMTLTraceItemInterface-Protocol.h>

@class GPUMTLStateMirror, NSString;

__attribute__((visibility("hidden")))
@interface GPUMTLTraceStateItem : GPUTraceStateItem <DYFunctionTracerDelegate, GPUMTLStateMirrorInterface, GPUMTLTraceItemInterface>
{
    GPUMTLStateMirror *_stateMirror;
    unsigned long long _owningDeviceID;
    BOOL _isHidden;
}

@property(readonly, nonatomic) unsigned long long owningDeviceID; // @synthesize owningDeviceID=_owningDeviceID;
@property(nonatomic) BOOL isHidden; // @synthesize isHidden=_isHidden;
- (void).cxx_destruct;
- (id)rewriteArgument:(const struct Argument *)arg1;
- (id)rewriteReceiver:(unsigned long long)arg1;
- (id)rewriteURL:(const char *)arg1;
- (id)generateLabel;
- (BOOL)isGroupMarkerCall;
@property(readonly, nonatomic) unsigned long long receiverID;
@property(readonly) BOOL hasStateMirror;
@property(copy) GPUMTLStateMirror *stateMirror;
- (id)initWithController:(id)arg1 parent:(id)arg2 label:(id)arg3;
- (id)initWithController:(id)arg1 parent:(id)arg2 deviceID:(unsigned long long)arg3 functionIndex:(int)arg4 displayIndex:(int)arg5 markedHidden:(BOOL)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

