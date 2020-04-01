//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProcessInfo.h>

@class NSDictionary;

@interface NSProcessInfo (DVTNSProcessInfoCachedEnvironmentAdditions)
@property(readonly) NSDictionary *dvt_cachedEnvironment;
- (void)dvt_removeEnvironmentVariable:(id)arg1;
- (void)dvt_setValue:(id)arg1 forEnvironmentVariable:(id)arg2;
- (id)dvt_activeSystemActivityTokensMatchingOptions:(unsigned long long)arg1;
- (id)dvt_beginActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2;
- (void)dvt_setUseCommandLineMessageTracerReportingOverride:(BOOL)arg1;
- (BOOL)dvt_shouldUseCommandLineMessageTracerReporting;
- (void)dvt_setDisableSCMOverride:(BOOL)arg1;
- (BOOL)dvt_shouldDisableSCM;
- (void)dvt_setDisallowSavingOverride:(BOOL)arg1;
- (BOOL)dvt_shouldDisallowSaving;
- (BOOL)dvt_isNonGraphicalProcess;
- (void)dvt_setIsNonGraphicalProcess:(BOOL)arg1;
- (void)dvt_disableSuddenTerminationForReason:(id)arg1;
- (void)dvt_enableSuddenTerminationForReason:(id)arg1;
- (void)dvt_enableAutomaticTerminationForReason:(id)arg1;
- (void)dvt_disableAutomaticTerminationForReason:(id)arg1;
- (id)dvt_disableAutomaticTerminationWithReason:(id)arg1;
- (long long)dvt_automaticTerminationDisablingCountForReason:(id)arg1;
- (id)dvt_automaticTerminationDisablingReasons;
- (void)_dvt_setSuddenTerminationDisablingCount:(long long)arg1 forReason:(id)arg2;
- (long long)dvt_suddenTerminationDisablingCountForReason:(id)arg1;
- (id)dvt_suddenTerminationDisablingReasons;
- (id)dvt_executablePath;
- (unsigned long long)dvt_numberOfAvailableCPUs;
@end

