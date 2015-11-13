//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEDebugTopNavigableModel-Protocol.h>

@class DVTStackBacktrace, IDEDebugSession, IDELaunchSession, IDEStackFrame, IDEThread, NSArray, NSString;

@interface IDEDebugProcess : NSObject <IDEDebugTopNavigableModel>
{
    NSString *_associatedProcessUUID;
    IDELaunchSession *launchSession;
    NSString *name;
    NSArray *_threads;
    NSArray *_queues;
    IDEThread *_currentThread;
    IDEStackFrame *_currentStackFrame;
    IDEStackFrame *_instructionPointerStackFrame;
    IDEDebugSession *_parentDebugSession;
}

+ (void)initialize;
@property(retain, nonatomic) IDEDebugSession *parentDebugSession; // @synthesize parentDebugSession=_parentDebugSession;
@property(retain, nonatomic) IDEStackFrame *instructionPointerStackFrame; // @synthesize instructionPointerStackFrame=_instructionPointerStackFrame;
@property(retain, nonatomic) IDEStackFrame *currentStackFrame; // @synthesize currentStackFrame=_currentStackFrame;
@property(retain, nonatomic) IDEThread *currentThread; // @synthesize currentThread=_currentThread;
@property(copy, nonatomic) NSArray *queues; // @synthesize queues=_queues;
@property(copy, nonatomic) NSArray *threads; // @synthesize threads=_threads;
@property(copy, nonatomic) NSString *name; // @synthesize name;
@property(readonly, copy) NSString *associatedProcessUUID; // @synthesize associatedProcessUUID=_associatedProcessUUID;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (BOOL)isPaused;
@property(readonly) IDELaunchSession *launchSession; // @synthesize launchSession;
- (id)contentDelegateUIExtensionIdentifier;
- (id)init;
- (id)initWithDebugSession:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic) NSArray *loadedCodeModules;
@property(readonly) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
