//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSSegmentedControl;

@interface IDEInspectorResizableSegmentedControlView : NSView
{
    NSSegmentedControl *segmentedControl;
}

- (void).cxx_destruct;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)awakeFromNib;
- (void)sizeSegmentedControlToFit;
- (void)optimallySizeSegments;
- (double)autosizedSegmentWidthForSegment:(long long)arg1;

@end

