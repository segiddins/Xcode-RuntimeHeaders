//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSNumber, NSObject, NSString, SCMActivity, SCMBasePathObject, SCMLog, SCMModel, SCMNode, SCMRepository, SCMRevision;

@interface SCMRequest : NSOperation
{
    SCMBasePathObject *_basePath;
    NSArray *_paths;
    NSArray *_destinationPaths;
    NSMutableArray *_responseArray;
    NSMutableArray *_treeUpdates;
    NSMutableDictionary *_responseDictionary;
    NSMutableArray *_messages;
    NSMutableArray *_errors;
    SCMModel *_model;
    SCMLog *_log;
    SCMActivity *_activity;
    NSNumber *_requestID;
    NSObject *_contextInfo;
    SCMRepository *_repository;
    NSString *_path;
    NSString *_sandboxPath;
    NSString *_destinationPath;
    NSString *_changeMessage;
    SCMRevision *_revision;
    SCMRevision *_secondRevision;
    SCMNode *_responseNode;
    NSDate *_startDate;
    CDUnknownBlockType _requestCompletionBlock;
    id _completionTarget;
    SEL _completionSelector;
    SEL _selector;
    int _completionCode;
    int _priority;
    BOOL _shouldContactServer;
    BOOL _getAll;
    BOOL _aborted;
    BOOL _keepLocks;
    BOOL _applyUpdatesOnFailure;
}

+ (long long)maxThreads;
+ (void)setRunningThreads:(long long)arg1;
+ (long long)runningThreads;
+ (void)initialize;
@property BOOL getAll; // @synthesize getAll=_getAll;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
@property BOOL applyUpdatesOnFailure; // @synthesize applyUpdatesOnFailure=_applyUpdatesOnFailure;
@property BOOL aborted; // @synthesize aborted=_aborted;
@property int completionCode; // @synthesize completionCode=_completionCode;
@property(retain) id completionTarget; // @synthesize completionTarget=_completionTarget;
@property SEL completionSelector; // @synthesize completionSelector=_completionSelector;
@property(copy) CDUnknownBlockType requestCompletionBlock; // @synthesize requestCompletionBlock=_requestCompletionBlock;
@property(retain) SCMNode *responseNode; // @synthesize responseNode=_responseNode;
@property BOOL keepLocks; // @synthesize keepLocks=_keepLocks;
@property(retain) SCMRevision *secondRevision; // @synthesize secondRevision=_secondRevision;
@property(retain) SCMRevision *revision; // @synthesize revision=_revision;
@property(copy) NSString *changeMessage; // @synthesize changeMessage=_changeMessage;
@property(copy) NSString *sandboxPath; // @synthesize sandboxPath=_sandboxPath;
@property(retain) SCMRepository *repository; // @synthesize repository=_repository;
@property(retain) NSObject *contextInfo; // @synthesize contextInfo=_contextInfo;
@property(retain) NSNumber *requestID; // @synthesize requestID=_requestID;
@property(retain) SCMLog *log; // @synthesize log=_log;
@property(retain) SCMActivity *activity; // @synthesize activity=_activity;
@property BOOL shouldContactServer; // @synthesize shouldContactServer=_shouldContactServer;
@property int priority; // @synthesize priority=_priority;
@property SEL selector; // @synthesize selector=_selector;
@property(retain) SCMBasePathObject *basePath; // @synthesize basePath=_basePath;
@property(retain) SCMModel *model; // @synthesize model=_model;
- (int)clearTagsForPaths:(id)arg1;
- (int)unlockPaths:(id)arg1;
- (int)lockPaths:(id)arg1;
- (int)resolvedPaths:(id)arg1;
- (int)editPaths:(id)arg1;
- (int)revertPaths:(id)arg1;
- (int)commitPaths:(id)arg1 keepLocks:(BOOL)arg2 withMessage:(id)arg3;
- (int)addPaths:(id)arg1;
- (int)updatePaths:(id)arg1 revision:(id)arg2;
- (int)statusForPath:(id)arg1 getAll:(BOOL)arg2 revision:(id)arg3;
- (int)moveFromPaths:(id)arg1 toPaths:(id)arg2 withMessage:(id)arg3;
- (int)copyFromPaths:(id)arg1 toPaths:(id)arg2 revision:(id)arg3 withMessage:(id)arg4;
- (int)deleteForPaths:(id)arg1 withMessage:(id)arg2;
- (int)mkdirForPaths:(id)arg1 withMessage:(id)arg2;
- (int)diffForPath:(id)arg1 toPath:(id)arg2 revision:(id)arg3 secondRevision:(id)arg4;
- (int)blameForPath:(id)arg1 toPath:(id)arg2 revision:(id)arg3;
- (int)catForPath:(id)arg1 toPath:(id)arg2 revision:(id)arg3;
- (int)importFromPath:(id)arg1 toPath:(id)arg2 withMessage:(id)arg3;
- (int)exportFromPath:(id)arg1 toPath:(id)arg2 revision:(id)arg3;
- (int)checkoutFromPath:(id)arg1 toPath:(id)arg2 revision:(id)arg3;
- (int)logForPath:(id)arg1 getAll:(BOOL)arg2 revision:(id)arg3 secondRevision:(id)arg4;
- (int)propertiesForPath:(id)arg1 revision:(id)arg2;
- (int)infoForPath:(id)arg1 revision:(id)arg2;
- (int)blameForPath:(id)arg1 revision:(id)arg2;
- (int)listForPath:(id)arg1 revision:(id)arg2;
- (int)createRepositoryForPath:(id)arg1;
- (int)logout;
- (int)login;
- (int)unlockOperation;
- (int)lockOperation;
- (int)resolvedOperation;
- (int)clearTagsOperation;
- (int)editOperation;
- (int)revertOperation;
- (int)commitOperation;
- (int)addOperation;
- (int)updateOperation;
- (int)statusOperation;
- (int)moveOperation;
- (int)copyOperation;
- (int)deleteOperation;
- (int)mkdirOperation;
- (int)diffOperation;
- (int)blameOperation;
- (int)catOperation;
- (int)importOperation;
- (int)exportOperation;
- (int)checkoutOperation;
- (int)propertiesOperation;
- (int)logOperation;
- (int)infoOperation;
- (int)listOperation;
- (int)createOperation;
- (int)loginOperation;
- (id)description;
- (void)reportMessageString:(id)arg1;
- (id)errors;
- (id)errorReportString;
- (void)reportLogEntry:(id)arg1;
- (void)reportError:(id)arg1;
- (id)responseDictionary;
- (id)responseArray;
- (id)treeUpdates;
- (void)addTreeUpdate:(id)arg1;
- (void)sendReply:(int)arg1;
- (void)sendActivityFinishedMessage:(id)arg1;
- (void)sendActivityMessage:(id)arg1;
- (void)reportFinished;
- (void)shouldCollect;
- (double)executionTime;
- (void)reportCompletionWithCode:(int)arg1;
- (void)setCompletionTarget:(id)arg1 selector:(SEL)arg2;
- (void)main;
- (BOOL)preflightCheck;
- (void)setDestinationPaths:(id)arg1;
- (id)destinationPaths;
@property(copy) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
- (void)setPaths:(id)arg1;
- (id)paths;
@property(copy) NSString *path; // @synthesize path=_path;
- (void)dealloc;
- (id)initWithModel:(id)arg1 repository:(id)arg2;

@end

