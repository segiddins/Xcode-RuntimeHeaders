//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEProductsUI/DVTAnalyticsPointChartScaffoldView.h>

@class NSArray;

@interface DVTAnalyticsPointChartOccurrenceCircleView : DVTAnalyticsPointChartScaffoldView
{
    BOOL _needsLayerUpdate;
    NSArray *_dataSet;
}

@property(copy, nonatomic) NSArray *dataSet; // @synthesize dataSet=_dataSet;
- (void).cxx_destruct;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)viewDidChangeBackingProperties;
- (id)initWithFrame:(struct CGRect)arg1;

@end

