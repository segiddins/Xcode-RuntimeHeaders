//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class IDESchemeActionTestSummary, IDESchemeActionTestSummaryGroup, IDETestsSummariesBuilder, NSString;

@protocol IDETestsSummariesBuilderDelegate <NSObject>
- (void)builder:(IDETestsSummariesBuilder *)arg1 didFinishTestSuiteWithSummary:(IDESchemeActionTestSummaryGroup *)arg2;
- (void)builder:(IDETestsSummariesBuilder *)arg1 didStartTestSuiteWithSummary:(IDESchemeActionTestSummaryGroup *)arg2;
- (void)builder:(IDETestsSummariesBuilder *)arg1 didFinishTestWithSummary:(IDESchemeActionTestSummary *)arg2;
- (void)builder:(IDETestsSummariesBuilder *)arg1 didStartTestWithName:(NSString *)arg2 identifier:(NSString *)arg3;
@end

