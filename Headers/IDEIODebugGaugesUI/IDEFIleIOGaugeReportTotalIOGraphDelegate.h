//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEIODebugGaugesUI/IDEGraphDelegate-Protocol.h>

@class IDEDebugGaugeStatisticsByteCountFormatter, NSFormatter, NSString;

@interface IDEFIleIOGaugeReportTotalIOGraphDelegate : NSObject <IDEGraphDelegate>
{
    NSFormatter *_totalIOXAxisFormatter;
    IDEDebugGaugeStatisticsByteCountFormatter *_totalIOYAxisFormatter;
}

+ (id)wrColor;
+ (id)rdColor;
- (void).cxx_destruct;
- (id)translateValue:(id)arg1 keypath:(id)arg2;
- (id)colorForChartNamed:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

