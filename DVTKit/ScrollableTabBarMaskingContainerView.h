//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CALayer;

@interface ScrollableTabBarMaskingContainerView : NSView
{
    CALayer *_maskLayer;
    CALayer *_leftMaskLayer;
    CALayer *_rightMaskLayer;
    struct CGRect _maskingFrame;
}

@property(nonatomic) struct CGRect maskingFrame; // @synthesize maskingFrame=_maskingFrame;
- (void).cxx_destruct;
- (void)animateMaskFromFrame:(struct CGRect)arg1 toFrame:(struct CGRect)arg2;
- (struct CGRect)_rectConstrainedToViewBounds:(struct CGRect)arg1;
- (void)_layOutMaskLayersWithStartFrame:(struct CGRect)arg1 endFrame:(struct CGRect)arg2;
- (id)_boundsAnimationFromBounds:(struct CGRect)arg1;
- (void)_getLeftLayerBounds:(struct CGRect *)arg1 andRightLayerBounds:(struct CGRect *)arg2 forMaskingFrame:(struct CGRect)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

