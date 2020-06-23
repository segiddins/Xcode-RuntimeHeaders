//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@interface DVTTrimSliderInternalHandleView : NSView
{
    BOOL _trailingSide;
    BOOL _highlighted;
}

@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic, getter=isTrailingSide) BOOL trailingSide; // @synthesize trailingSide=_trailingSide;
- (void)_drawHandleForegroundInBounds:(struct CGRect)arg1;
- (void)_drawHandleBackgroundInBounds:(struct CGRect)arg1;
- (void)_drawHandleInBounds:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;

@end

