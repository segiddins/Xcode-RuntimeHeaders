//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DTGraphKit/DTTimelineGraphLayerSubtree.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface DTTimelineSelectionLayerSubtree : DTTimelineGraphLayerSubtree
{
    CALayer *_leftSelectionIndicatorLayer;
    CALayer *_rightSelectionIndicatorLayer;
    CALayer *_leftSelectionPointLayer;
    CALayer *_rightSelectionPointLayer;
    id _resolvedColorEffect;
    double _startXInSuperLayerPts;
    double _endXInSuperLayerPts;
    BOOL _emptyTimeRange;
    id _colorEffect;
}

@property(retain, nonatomic) id colorEffect; // @synthesize colorEffect=_colorEffect;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)adjustToGraph:(id)arg1;
- (void)dealloc;

@end

