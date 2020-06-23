//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor;

@interface DVTTrimSliderInternalTrackView : NSView
{
    BOOL _drawsBackground;
    long long _numberOfSegments;
    NSColor *_segmentSeparatorColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSColor *segmentSeparatorColor; // @synthesize segmentSeparatorColor=_segmentSeparatorColor;
@property(nonatomic) BOOL drawsBackground; // @synthesize drawsBackground=_drawsBackground;
@property(nonatomic) long long numberOfSegments; // @synthesize numberOfSegments=_numberOfSegments;
- (void)_drawSegmentSeparatorCenteredAtX:(double)arg1 boundsHeight:(double)arg2 color:(id)arg3;
- (void)_drawSegmentSeparatorsInBounds:(struct CGRect)arg1;
- (void)_drawTrackBackgroundInBounds:(struct CGRect)arg1;
- (void)_drawTrackInBounds:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end

