//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEAnalyticsKit/DVTAnalyticsPointChartScaffoldView.h>

@class NSArray, NSMutableDictionary;

@interface DVTAnalyticsPointChartBarChartView : DVTAnalyticsPointChartScaffoldView
{
    NSArray *_distributionData;
    NSMutableDictionary *_toolTipTagToBarValue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *toolTipTagToBarValue; // @synthesize toolTipTagToBarValue=_toolTipTagToBarValue;
@property(copy, nonatomic) NSArray *distributionData; // @synthesize distributionData=_distributionData;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (void)drawRect:(struct CGRect)arg1;

@end

