//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEProductsUI/IDEProductsUtilityPane.h>

@class DVTAnalyticsPointAbstractClass, DVTAnalyticsPointChartView;

@interface IDEAnalyticsPointDistributionUtilityPane : IDEProductsUtilityPane
{
    DVTAnalyticsPointChartView *_analyticsPointChartView;
}

@property __weak DVTAnalyticsPointChartView *analyticsPointChartView; // @synthesize analyticsPointChartView=_analyticsPointChartView;
- (void).cxx_destruct;
- (void)viewDidLoad;
@property(readonly) DVTAnalyticsPointAbstractClass *analyticsPoint;
- (id)initWithInspectable:(id)arg1;

@end

