//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEIODebugGaugesUI/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSString;
@protocol DVTCancellable;

@interface IDEGFXGaugeLaunchObserver : NSObject <DVTInvalidation>
{
    CDUnknownBlockType _handler;
    id <DVTCancellable> _spritekitToken;
    id <DVTCancellable> _spritekitActiveToken;
    id <DVTCancellable> _scenekitToken;
    id <DVTCancellable> _scenekitActiveToken;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)_postResultAndCancel:(id)arg1;
- (id)_setupActiveObserver:(id)arg1;
- (id)_setupDebuggingAdditionUIControllerObserverForID:(id)arg1 inWorkspaceTabController:(id)arg2 forLaunchSession:(id)arg3;
- (id)initForLaunchSession:(id)arg1 inWorkspaceTabController:(id)arg2 handler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

