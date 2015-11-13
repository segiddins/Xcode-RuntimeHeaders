//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSScroller.h>

@interface XCDiffScroller : NSScroller
{
    void *_segmentMarkers;
    long long _numSegmentMarkers;
    long long _capSegmentMarkers;
    struct CGLayer *_segmentMarkersLayer;
    struct _XCDiffScrollerFlags _sFlags3;
}

+ (void)initialize;
- (void)drawKnobSlotInRect:(struct CGRect)arg1 highlight:(BOOL)arg2;
- (void)drawSegmentsInRect:(struct CGRect)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (BOOL)drawsSegments;
- (void)setDrawsSegments:(BOOL)arg1;
- (BOOL)segmentsNeedUpdate;
- (void)setSegmentsNeedUpdate:(BOOL)arg1;
- (id)borderColorForSegment:(long long)arg1;
- (void)setBorderColor:(id)arg1 forSegment:(long long)arg2;
- (id)fillColorForSegment:(long long)arg1;
- (void)setFillColor:(id)arg1 forSegment:(long long)arg2;
- (void)getLocation:(double *)arg1 length:(double *)arg2 forSegment:(long long)arg3;
- (void)setLocation:(double)arg1 length:(double)arg2 forSegment:(long long)arg3;
- (long long)segmentCount;
- (void)setSegmentCount:(long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

