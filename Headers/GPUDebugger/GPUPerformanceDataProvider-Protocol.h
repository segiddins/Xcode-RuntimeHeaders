//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/NSObject-Protocol.h>

@class GPUInvestigatorReportItem;

@protocol GPUPerformanceDataProvider <NSObject>
@property(readonly) double appTargetFrameRate;
@property(readonly) double appFrameRate;
@property(retain, nonatomic) GPUInvestigatorReportItem *reportItem;
@end
