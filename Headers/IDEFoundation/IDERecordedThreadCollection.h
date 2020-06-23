//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/IDEDebugNavigableModel-Protocol.h>

@class DVTDispatchLock, DVTStackBacktrace, IDEDebugProcess, IDELaunchSession, NSArray, NSMutableArray, NSString;

@interface IDERecordedThreadCollection : NSObject <IDEDebugNavigableModel, DVTInvalidation>
{
    NSMutableArray *_delayedInvalidationChildren;
    DVTDispatchLock *_delayedInvalidationChildrenLock;
    BOOL _usedInRuntimeIssue;
    BOOL _selectStackFrameWhenFirstShown;
    IDEDebugProcess *_parentProcess;
    NSArray *_recordedThreads;
    NSString *_displayName;
}

+ (void)initialize;
- (void).cxx_destruct;
@property BOOL selectStackFrameWhenFirstShown; // @synthesize selectStackFrameWhenFirstShown=_selectStackFrameWhenFirstShown;
@property BOOL usedInRuntimeIssue; // @synthesize usedInRuntimeIssue=_usedInRuntimeIssue;
@property(copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSArray *recordedThreads; // @synthesize recordedThreads=_recordedThreads;
@property(retain) IDEDebugProcess *parentProcess; // @synthesize parentProcess=_parentProcess;
- (void)primitiveInvalidate;
@property(readonly) IDELaunchSession *launchSession;
@property(readonly, copy) NSString *associatedProcessUUID;
- (id)initWithProcess:(id)arg1;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

