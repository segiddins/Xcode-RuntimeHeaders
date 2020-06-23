//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDispatchLock, IDEActivityLogSection, IDEBuildParameters, NSMutableArray, NSString;
@protocol IDEBuildable;

@interface IDEBuildableSnapshot : NSObject
{
    id <IDEBuildable> _buildable;
    NSString *_name;
    IDEBuildParameters *_buildParameters;
    IDEActivityLogSection *_activityLogSection;
    BOOL _cleanupDidRun;
    NSMutableArray *_postprocessingBlocks;
    NSMutableArray *_readyBuildCommands;
    NSMutableArray *_startedBuildTasks;
    long long _buildResult;
    DVTDispatchLock *_syncLock;
}

+ (id)_enqueue_semaphore;
+ (void)initialize;
@property(retain) DVTDispatchLock *syncLock; // @synthesize syncLock=_syncLock;
@property long long buildResult; // @synthesize buildResult=_buildResult;
@property(retain) NSMutableArray *startedBuildTasks; // @synthesize startedBuildTasks=_startedBuildTasks;
@property(retain) NSMutableArray *readyBuildCommands; // @synthesize readyBuildCommands=_readyBuildCommands;
@property(retain) NSMutableArray *postprocessingBlocks; // @synthesize postprocessingBlocks=_postprocessingBlocks;
@property(readonly) id <IDEBuildable> buildable; // @synthesize buildable=_buildable;
@property(retain) IDEActivityLogSection *activityLogSection; // @synthesize activityLogSection=_activityLogSection;
@property(readonly) IDEBuildParameters *buildParameters; // @synthesize buildParameters=_buildParameters;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (void)buildTask:(id)arg1 addsPostprocessingBlocks:(id)arg2 forBuilder:(id)arg3;
- (void)buildTask:(id)arg1 updatesBuildStatusForBuilder:(id)arg2;
- (void)buildTask:(id)arg1 didSetExitCode:(int)arg2 forBuilder:(id)arg3;
- (void)buildTask:(id)arg1 activityLogSectionDidChange:(id)arg2 forBuilder:(id)arg3;
- (void)buildTask:(id)arg1 didStartExecutingForBuilder:(id)arg2;
- (void)cleanupForBuilder:(id)arg1;
- (void)builderWasCancelled:(id)arg1;
- (void)buildDidFinishForBuilder:(id)arg1 buildPlan:(id)arg2;
- (id)buildTaskForBuildCommand:(id)arg1 builder:(id)arg2;
- (BOOL)prepareForBuildingWithBuildPlan:(id)arg1;
- (id)buildPlanForBuilder:(id)arg1 buildCommand:(long long)arg2 buildOnlyTheseFiles:(id)arg3;
- (BOOL)buildForBuilderWillStart:(id)arg1;
- (long long)performBuildForBuilder:(id)arg1 buildCommand:(long long)arg2 buildOnlyTheseFiles:(id)arg3;
- (void)prepareForBuildingForBuilder:(id)arg1;
- (void)_buildCommandDidRestoreCachedOutputs:(id)arg1;
- (void)_updateBuildOperationStatusForBuilder:(id)arg1 buildTask:(id)arg2;
- (void)_buildTaskDidStartForBuilder:(id)arg1 buildTask:(id)arg2;
- (void)addPostprocessingBlocks:(id)arg1;
@property(readonly) NSString *logOutputSubpath; // @dynamic logOutputSubpath;
- (id)initWithName:(id)arg1 buildParameters:(id)arg2;
- (id)initFromBuildable:(id)arg1 withBuildParameters:(id)arg2;

@end

