//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@interface IBNSGridViewCellPlaceholderMeasuringView : NSView
{
    double _firstBaselineOffsetFromTop;
    double _lastBaselineOffsetFromBottom;
}

+ (id)view;
+ (id)viewsForCount:(long long)arg1;
@property(nonatomic) double lastBaselineOffsetFromBottom; // @synthesize lastBaselineOffsetFromBottom=_lastBaselineOffsetFromBottom;
@property(nonatomic) double firstBaselineOffsetFromTop; // @synthesize firstBaselineOffsetFromTop=_firstBaselineOffsetFromTop;
- (struct CGSize)effectiveIntrinsicSize;
- (struct CGSize)intrinsicContentSize;

@end

