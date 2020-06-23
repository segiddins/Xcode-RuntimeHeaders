//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSSegmentedCell.h>

@interface DVTFlatSegmentedControlCell : NSSegmentedCell
{
    BOOL _drawsBackground;
    double _topLeftCornerRadius;
    double _bottomLeftCornerRadius;
    double _topRightCornerRadius;
    double _bottomRightCornerRadius;
}

@property double bottomRightCornerRadius; // @synthesize bottomRightCornerRadius=_bottomRightCornerRadius;
@property double topRightCornerRadius; // @synthesize topRightCornerRadius=_topRightCornerRadius;
@property double bottomLeftCornerRadius; // @synthesize bottomLeftCornerRadius=_bottomLeftCornerRadius;
@property double topLeftCornerRadius; // @synthesize topLeftCornerRadius=_topLeftCornerRadius;
@property BOOL drawsBackground; // @synthesize drawsBackground=_drawsBackground;
- (id)_segmentedControlPathForFrame:(struct CGRect)arg1;
- (id)_segmentPathForSegmentAtIndex:(long long)arg1 forSegmentFrame:(struct CGRect)arg2;
- (void)_drawSegment:(long long)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (id)_borderColor;
- (void)_drawBackgroundWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawFocusRingMaskWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (long long)backgroundStyle;
- (void)_dvtFindBarSegmentedControlCellCommonInit;
- (void)awakeFromNib;
- (id)init;

@end
