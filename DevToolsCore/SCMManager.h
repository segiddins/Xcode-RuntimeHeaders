//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsCore/NSPortDelegate-Protocol.h>

@class NSCountedSet, NSMutableArray, NSMutableDictionary, NSPort, NSString;

@interface SCMManager : NSObject <NSPortDelegate>
{
    NSMutableArray *_logEntries;
    NSMutableArray *_activities;
    NSMutableArray *_startedRequests;
    NSMutableArray *_finishedRequests;
    NSMutableArray *_finishedActivities;
    NSMutableArray *_repositories;
    NSMutableArray *_repositoryNames;
    NSMutableDictionary *_repositoryClasses;
    id _messageHandler;
    NSPort *_responseAvailableNotificationPort;
    NSCountedSet *_addedRunLoopModes;
}

+ (id)sharedInstance;
@property(retain) NSMutableArray *repositoryNames; // @synthesize repositoryNames=_repositoryNames;
- (void)reportActivityFinished:(id)arg1;
- (void)reportRequestFinished:(id)arg1;
- (void)reportRequestStarted:(id)arg1;
- (void)reportLogEntry:(id)arg1;
- (void)reportActivity:(id)arg1;
- (void)handlePortMessage:(id)arg1;
- (id)repositoryRecommendedForPath:(id)arg1;
- (id)uniquedRepositoryName:(id)arg1;
- (void)removeRepository:(id)arg1;
- (void)addRepository:(id)arg1;
- (void)writeRepositoryDefaults;
- (id)repositories;
- (id)repositoryWithName:(id)arg1;
- (void)removeSandbox:(id)arg1;
- (id)sandboxForPath:(id)arg1 repository:(id)arg2;
- (void)removeRunLoopMode:(id)arg1;
- (void)addRunLoopMode:(id)arg1;
- (void)reportSCMMessage:(id)arg1 title:(id)arg2 completionCode:(int)arg3;
- (void)registerMessageHandler:(id)arg1;
- (id)repositoryClasses;
- (void)registerRepositoryClassName:(id)arg1 forSystemNamed:(id)arg2;
- (void)dealloc;
- (void)tearDown;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

