//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DTGraphKit/DTTimelineGraphLayerSubtree.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface DTTimelineZoomSelectionLayerSubtree : DTTimelineGraphLayerSubtree
{
    CALayer *_leftZoomIndicationPointLayer;
    CALayer *_rightZoomIndicationPointLayer;
}

- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)adjustToGraph:(id)arg1;
- (void)dealloc;
- (id)init;

@end

