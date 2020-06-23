//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/GPUTraceGroupItem.h>

#import <GPUDebugger/IDEDebugTopNavigableModel-Protocol.h>

@class DVTStackBacktrace, IDEDebugSession, IDELaunchSession, NSString;

@interface GPUTraceProcessItem : GPUTraceGroupItem <IDEDebugTopNavigableModel>
{
    unsigned long long _outlineMode_forProgramMode_JumpBar_fix;
    GPUTraceGroupItem *_shaderDebuggerGroup;
}

+ (void)initialize;
@property(retain, nonatomic) GPUTraceGroupItem *shaderDebuggerGroup; // @synthesize shaderDebuggerGroup=_shaderDebuggerGroup;
@property(nonatomic) unsigned long long outlineMode_forProgramMode_JumpBar_fix; // @synthesize outlineMode_forProgramMode_JumpBar_fix=_outlineMode_forProgramMode_JumpBar_fix;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
@property(readonly, copy) NSString *associatedProcessUUID;
- (id)contentDelegateUIExtensionIdentifier;
@property(copy, nonatomic) NSString *name;
- (id)initWithController:(id)arg1 identifier:(id)arg2;
- (id)navigableItem_descendantRepresentedObjectsFromRepresentedObject:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) IDELaunchSession *launchSession;
@property(readonly, nonatomic) IDEDebugSession *parentDebugSession;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

