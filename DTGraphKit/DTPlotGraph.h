//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DTGraphKit/DTBarGraph.h>

@class NSMutableArray;

@interface DTPlotGraph : DTBarGraph
{
    NSMutableArray *_drawingOrderOfModels;
}

- (void).cxx_destruct;
- (BOOL)validateModel:(id)arg1;
- (id)_drawingOrderedModels:(id)arg1;
- (long long)maximumYValue;
- (long long)maximumXValue;
- (void)_drawImageForEntry:(id)arg1 atPoint:(struct CGPoint)arg2 insideRect:(struct CGRect)arg3;
- (void)_drawModel:(id)arg1 inRect:(struct CGRect)arg2;
- (void)_closePath:(id)arg1 closingY:(double)arg2;
- (struct CGRect)calculateXAxisBoundsWithinBounds:(struct CGRect)arg1;
- (struct CGRect)calculateYAxisBoundsWithinBounds:(struct CGRect)arg1;
- (void)drawBorder:(struct CGRect)arg1;
- (void)drawContent:(struct CGRect)arg1;
- (void)drawBackground:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

