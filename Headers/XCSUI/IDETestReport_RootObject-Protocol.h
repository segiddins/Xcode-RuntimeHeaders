//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSUI/NSObject-Protocol.h>

@class IDEWorkspace, NSArray;

@protocol IDETestReport_RootObject <NSObject>
@property(readonly, nonatomic) BOOL ide_testReport_test_lazyTestRunFetchesUseNewBatchAPI;
@property(readonly, nonatomic) BOOL ide_testReport_test_fetchesTestRunsLazily;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_rootObject_perfMetricNames;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_rootObject_devices;
- (BOOL)ide_testReport_shouldEnableBaselineUpdatingUIForWorkspace:(IDEWorkspace *)arg1;
- (NSArray *)ide_testReport_rootObject_includeGroupsWithPassedTests:(BOOL)arg1 includeFailingTests:(BOOL)arg2 includeOnlyPerfTests:(BOOL)arg3;
@end
