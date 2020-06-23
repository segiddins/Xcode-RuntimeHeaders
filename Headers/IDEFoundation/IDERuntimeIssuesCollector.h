//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDispatchLock, DVTObservingToken, IDEDebugSession, IDELaunchSessionRuntimeGroup, NSArray, NSMutableArray, NSString;

@interface IDERuntimeIssuesCollector : NSObject
{
    IDEDebugSession *_debugSession;
    DVTObservingToken *_debugSessionToken;
    NSMutableArray *_issues;
    NSString *_token;
    BOOL _useThirdPartyPredicate;
    BOOL _stillReceivingIssues;
    DVTDispatchLock *_stillReceivingIssuesLock;
    IDELaunchSessionRuntimeGroup *_groupingObject;
}

+ (void)initialize;
@property(readonly) IDELaunchSessionRuntimeGroup *groupingObject; // @synthesize groupingObject=_groupingObject;
- (void).cxx_destruct;
- (BOOL)shouldDisplayRuntimeIssueWithSubsystem:(id)arg1 category:(id)arg2 imagePath:(id)arg3 environmentVariables:(id)arg4;
- (void)addSubcategory:(id)arg1 forTopCategory:(id)arg2;
- (void)cancel;
- (id)_locationFromThreads:(id)arg1;
- (id)_backtraceThreads:(id)arg1;
- (id)initWithLaunchSession:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSArray *issues; // @dynamic issues;
@property(readonly, copy) NSMutableArray *mutableIssues; // @dynamic mutableIssues;

@end

