//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GLToolsExpert/DYGLExpertExperimentRunner.h>

@class NSArray, NSNumber;

__attribute__((visibility("hidden")))
@interface DYGLExpertExperimentRunnerDisableFragmentShader : DYGLExpertExperimentRunner
{
    NSNumber *programId;
    NSNumber *sharegroupId;
    NSArray *contextIds;
    unsigned long long frameTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long frameTime; // @synthesize frameTime;
@property(retain, nonatomic) NSArray *contextIds; // @synthesize contextIds;
@property(retain, nonatomic) NSNumber *sharegroupId; // @synthesize sharegroupId;
@property(retain, nonatomic) NSNumber *programId; // @synthesize programId;
- (void)processFinishedExperiments;
- (id)executeAndWait;
- (id)numberOfExperiments;
- (id)initWithExpert:(id)arg1 withProgramId:(id)arg2 withSharegroupId:(id)arg3 withContextIds:(id)arg4;
- (id)description;

@end

