//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDELaunchTestSchemeActionOptions.h>

@class MISSING_TYPE, _TtC13IDEFoundation25IDEDeviceAppDataReference, _TtC13IDEFoundation28IDELocationScenarioReference;

@interface IDETestPlanOptions : IDELaunchTestSchemeActionOptions
{
    MISSING_TYPE *parentOptions;
    MISSING_TYPE *overrides;
    MISSING_TYPE *isRootLevel;
    MISSING_TYPE *_details;
}

- (void).cxx_destruct;
@property(nonatomic, readonly) BOOL testTimeoutsEnabled;
@property(nonatomic, readonly) long long userAttachmentLifetime;
@property(nonatomic, readonly) BOOL areLocalizationScreenshotsEnabled;
@property(nonatomic, readonly) long long uiTestingScreenshotsLifetime;
@property(nonatomic, readonly) _TtC13IDEFoundation28IDELocationScenarioReference *locationScenarioReference;
@property(nonatomic, readonly) _TtC13IDEFoundation25IDEDeviceAppDataReference *deviceAppDataReference;
@property(nonatomic, readonly) long long testExecutionOrdering;
@property(nonatomic, readonly) BOOL parallelizable;
- (id)copyWithZone:(void *)arg1;
@property(nonatomic, readonly) long long hash;
- (BOOL)isEqual:(id)arg1;

@end

