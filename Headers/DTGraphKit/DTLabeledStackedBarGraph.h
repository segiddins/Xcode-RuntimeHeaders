//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DTGraphKit/DTStackedBarGraph.h>

@class DTStacks, NSArray;

@interface DTLabeledStackedBarGraph : DTStackedBarGraph
{
    DTStacks *_graphStacks;
    NSArray *_graphAXElements;
    struct CGRect _graphXAxisRect;
    struct CGRect _graphYAxisRect;
}

@property(retain) NSArray *graphAXElements; // @synthesize graphAXElements=_graphAXElements;
@property(retain) DTStacks *graphStacks; // @synthesize graphStacks=_graphStacks;
@property struct CGRect graphYAxisRect; // @synthesize graphYAxisRect=_graphYAxisRect;
@property struct CGRect graphXAxisRect; // @synthesize graphXAxisRect=_graphXAxisRect;
- (void).cxx_destruct;
- (void)setupAXElements;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawStacks:(id)arg1 rect:(struct CGRect)arg2;
- (id)accessibilityChildren;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)drawPlaceholder:(struct CGRect)arg1;
- (void)drawLowValuesText:(id)arg1;
- (id)getFormatStringForMaxValue:(double)arg1;
- (unsigned long long)numberOfEntriesThatFitRect:(struct CGRect)arg1;
- (BOOL)canDrawBeyondContentRect;
- (double)yAxisSpacing;
- (double)barWidth;
- (double)barSpacing;
- (unsigned long long)numberOfBars;
- (void)drawBorder:(struct CGRect)arg1;
- (id)divisionsForContentMagnitude:(double)arg1 start:(double)arg2 min:(double)arg3 max:(double)arg4 spacing:(double)arg5;
- (id)divisionPositionsYAxis;
- (void)drawYAxis:(struct CGRect)arg1;
- (double)minimumYValueDouble;
- (double)maximumYValueDouble;
- (long long)minimumYValue;
- (long long)maximumYValue;
- (id)maxSystemFontAvailableForString:(id)arg1 withMaxLength:(double)arg2 startingFont:(id)arg3;
- (void)drawXAxis:(struct CGRect)arg1;
- (double)xAxisSpacing;
- (id)divisionPositionsXAxis;
- (struct CGRect)contentFrame;

@end

