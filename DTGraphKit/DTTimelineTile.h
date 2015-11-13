//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, DTTimelineDecorator, _DTTimelineTileDecorationOperation;

@interface DTTimelineTile : NSObject
{
    CALayer *_layer;
    struct TileMetrics _tileMetrics;
    DTTimelineDecorator *_decorator;
    _DTTimelineTileDecorationOperation *_latestOperation;
    unsigned long long _decorationState;
    unsigned long long _renderState;
    unsigned long long _tileIndex;
}

@property(readonly, nonatomic) unsigned long long tileIndex; // @synthesize tileIndex=_tileIndex;
@property(readonly, nonatomic) unsigned long long renderState; // @synthesize renderState=_renderState;
@property(readonly, nonatomic) unsigned long long decorationState; // @synthesize decorationState=_decorationState;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)stringSummaries;
- (const struct TileMetrics *)tileMetrics;
- (void)_containerMissedETA:(id)arg1;
- (void)_containerReadyForRedraw:(id)arg1;
- (void)decorate;
- (void)purgeDecorations;
- (struct DynamicRange)dynamicRangeForTimeRange:(struct XRTimeRange)arg1;
- (void)setTileMetrics:(struct TileMetrics *)arg1;
@property(nonatomic) double displayScale;
- (void)dealloc;
- (id)initWithIndex:(unsigned long long)arg1 tileSize:(struct CGSize)arg2 tileMetrics:(struct TileMetrics *)arg3 decorator:(id)arg4;
- (void)discardContentIfPossible;
- (BOOL)isContentDiscarded;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)invalidate;
- (void)removeFromSuperlayer;
- (void)attachToSuperlayer:(id)arg1;
- (BOOL)backedByLayer:(id)arg1;
@property(readonly, nonatomic) BOOL displaying;
- (void)layoutWithOffset:(double)arg1;

@end

