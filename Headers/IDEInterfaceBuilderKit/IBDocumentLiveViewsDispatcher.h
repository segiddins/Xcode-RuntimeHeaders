//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IBAttachToProcessHelper, IBDocument, NSOrderedSet, NSString;

@interface IBDocumentLiveViewsDispatcher : NSObject <DVTInvalidation>
{
    IBAttachToProcessHelper *_attachToProcessHelper;
    IBDocument *_document;
    NSOrderedSet *_activeDebuggingSessions;
}

+ (id)_queueForLaunchingLiveViewsTools;
+ (void)initialize;
@property(copy, nonatomic) NSOrderedSet *activeDebuggingSessions; // @synthesize activeDebuggingSessions=_activeDebuggingSessions;
@property(readonly, nonatomic) __weak IBDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (void)refreshLiveViews;
- (BOOL)canRefreshLiveViews;
- (void)_debugLiveViews:(id)arg1 invokedFromTabController:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (id)_createAndAddSessionForDebuggingViews:(id)arg1;
- (id)_titleForDebuggingViews:(id)arg1;
- (void)sendDebugRequestsForView:(id)arg1 marshalledRepresentation:(id)arg2 tool:(id)arg3 queue:(id)arg4;
- (id)liveViewsManager;
- (void)_launchLiveViewsToolForTargetRuntime:(id)arg1 builtBundleInstances:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_removeActiveDebuggingSession:(id)arg1;
- (void)_addActiveDebuggingSession:(id)arg1;
- (void)debugLiveViewsGivenSelection:(id)arg1 invokedFromTabController:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (BOOL)canDebugLiveViewsGivenSelection:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

