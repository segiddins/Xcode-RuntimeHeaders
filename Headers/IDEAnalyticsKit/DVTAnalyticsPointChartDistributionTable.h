//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEAnalyticsKit/DVTAnalyticsPointChartScaffoldView.h>

@class NSArray;

@interface DVTAnalyticsPointChartDistributionTable : DVTAnalyticsPointChartScaffoldView
{
    NSArray *_dataSet;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *dataSet; // @synthesize dataSet=_dataSet;
- (BOOL)isFlipped;
- (void)drawRect:(struct CGRect)arg1;
- (double)heightOfLegend;
- (double)paddingForRowTileAtIndex:(unsigned long long)arg1;
- (double)rowHeightForRowIndex:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
