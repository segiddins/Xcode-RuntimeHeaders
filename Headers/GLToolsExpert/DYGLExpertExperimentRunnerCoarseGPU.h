//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GLToolsExpert/DYGLExpertExperimentRunner.h>

__attribute__((visibility("hidden")))
@interface DYGLExpertExperimentRunnerCoarseGPU : DYGLExpertExperimentRunner
{
}

- (void)processFinishedExperiments;
- (unsigned int)_SGXPunchThroughExperimentsCount;
- (void)_createSGXPunchThroughExperiments;
- (unsigned int)_SGXNormalExperimentsCount;
- (void)_createSGXNormalExperiments;
- (void)_createExperiment:(int)arg1;
- (id)executeAndWait;
- (id)numberOfExperiments;
- (id)description;

@end

