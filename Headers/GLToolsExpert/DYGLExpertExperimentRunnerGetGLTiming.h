//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GLToolsExpert/DYGLExpertExperimentRunner.h>

@class DYGLOverviewMeasurements, DYInvestigatorStatistics, NSArray;

__attribute__((visibility("hidden")))
@interface DYGLExpertExperimentRunnerGetGLTiming : DYGLExpertExperimentRunner
{
    NSArray *_modifiers;
    unsigned long long _profilingFlags;
    BOOL _useModifiedCapture;
    DYGLOverviewMeasurements *_originalOverviewMeasurements;
    DYGLOverviewMeasurements *_updatedOverviewMeasurements;
    DYInvestigatorStatistics *_frame_time;
    DYInvestigatorStatistics *_cpu_time;
    DYInvestigatorStatistics *_gl_counter;
    DYInvestigatorStatistics *_gl_time;
    DYInvestigatorStatistics *_platform_time;
    DYInvestigatorStatistics *_CA_wait_time;
    DYInvestigatorStatistics *_texture_upload_time;
    DYInvestigatorStatistics *_state_validation_time;
    DYInvestigatorStatistics *_vertex_copy_time;
    DYInvestigatorStatistics *_renderer_utilization;
    DYInvestigatorStatistics *_tiler_utilization;
    DYInvestigatorStatistics *_device_utilization;
}

@property(readonly, nonatomic) BOOL useModifiedCapture; // @synthesize useModifiedCapture=_useModifiedCapture;
@property(readonly, nonatomic) DYInvestigatorStatistics *device_utilization; // @synthesize device_utilization=_device_utilization;
@property(readonly, nonatomic) DYInvestigatorStatistics *tiler_utilization; // @synthesize tiler_utilization=_tiler_utilization;
@property(readonly, nonatomic) DYInvestigatorStatistics *renderer_utilization; // @synthesize renderer_utilization=_renderer_utilization;
@property(readonly, nonatomic) DYInvestigatorStatistics *vertex_copy_time; // @synthesize vertex_copy_time=_vertex_copy_time;
@property(readonly, nonatomic) DYInvestigatorStatistics *state_validation_time; // @synthesize state_validation_time=_state_validation_time;
@property(readonly, nonatomic) DYInvestigatorStatistics *texture_upload_time; // @synthesize texture_upload_time=_texture_upload_time;
@property(readonly, nonatomic) DYInvestigatorStatistics *CA_wait_time; // @synthesize CA_wait_time=_CA_wait_time;
@property(readonly, nonatomic) DYInvestigatorStatistics *platform_time; // @synthesize platform_time=_platform_time;
@property(readonly, nonatomic) DYInvestigatorStatistics *gl_time; // @synthesize gl_time=_gl_time;
@property(readonly, nonatomic) DYInvestigatorStatistics *gl_counter; // @synthesize gl_counter=_gl_counter;
@property(readonly, nonatomic) DYInvestigatorStatistics *cpu_time; // @synthesize cpu_time=_cpu_time;
@property(readonly, nonatomic) DYInvestigatorStatistics *frame_time; // @synthesize frame_time=_frame_time;
@property(retain, nonatomic) DYGLOverviewMeasurements *updatedOverviewMeasurements; // @synthesize updatedOverviewMeasurements=_updatedOverviewMeasurements;
@property(retain, nonatomic) DYGLOverviewMeasurements *originalOverviewMeasurements; // @synthesize originalOverviewMeasurements=_originalOverviewMeasurements;
- (void).cxx_destruct;
- (void)processFinishedExperiments;
- (id)executeAndWait;
- (id)numberOfExperiments;
- (id)initWithExpert:(id)arg1 modifiers:(id)arg2 profilingFlags:(unsigned long long)arg3 originalOverviewMeasurements:(id)arg4 useModifiedCapture:(BOOL)arg5;
- (id)initWithExpert:(id)arg1 profilingFlags:(unsigned long long)arg2 originalOverviewMeasurements:(id)arg3 useModifiedCapture:(BOOL)arg4;
- (id)description;

@end

