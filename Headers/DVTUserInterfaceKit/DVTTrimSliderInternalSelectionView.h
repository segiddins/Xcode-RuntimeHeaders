//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@interface DVTTrimSliderInternalSelectionView : NSView
{
    BOOL _highlighted;
}

@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
- (id)_backgroundColorHighlighted;
- (id)_backgroundColorNormal;
- (void)_updateColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end

