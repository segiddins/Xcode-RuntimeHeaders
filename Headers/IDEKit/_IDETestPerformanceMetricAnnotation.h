//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTKit/DVTMessageBubbleAnnotation.h>

@class DVTDevice, DVTTestPerformanceMetricOutput, IDETest, NSArray, NSString;

@interface _IDETestPerformanceMetricAnnotation : DVTMessageBubbleAnnotation
{
    DVTDevice *_targetDevice;
    NSString *_targetArchitecture;
    IDETest *_test;
    DVTTestPerformanceMetricOutput *_performanceMetric;
    NSArray *_performanceMetricsForPreviousRun;
}

+ (id)locationForTest:(id)arg1 inDocument:(id)arg2 performanceMetric:(id)arg3;
+ (id)defaultTheme;
- (void).cxx_destruct;
@property(retain) NSArray *performanceMetricsForPreviousRun; // @synthesize performanceMetricsForPreviousRun=_performanceMetricsForPreviousRun;
@property(retain) DVTTestPerformanceMetricOutput *performanceMetric; // @synthesize performanceMetric=_performanceMetric;
@property __weak IDETest *test; // @synthesize test=_test;
@property(copy) NSString *targetArchitecture; // @synthesize targetArchitecture=_targetArchitecture;
@property(retain) DVTDevice *targetDevice; // @synthesize targetDevice=_targetDevice;
- (BOOL)validateMenuItem:(id)arg1;
- (void)contextMenu_revealInReport:(id)arg1;
- (void)contextMenu_acceptPreviousAverage:(id)arg1;
- (void)contextMenu_acceptPreviousAverageForAllMetrics:(id)arg1;
- (void)contextMenu_performSelector:(SEL)arg1 sender:(id)arg2;
- (void)updateBaselineForPerformanceMetricWithIdentifier:(id)arg1 average:(id)arg2 maxStandardDeviation:(id)arg3;
- (void)asyncApplyBaselineRecord:(id)arg1;
- (id)runDestinationRecord;
- (id)initWithTest:(id)arg1;

@end

