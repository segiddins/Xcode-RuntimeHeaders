//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor;

@interface GTFActionTimelineControlView : NSView
{
    BOOL _showTab;
    BOOL _showNeedle;
    int _track;
    NSColor *_needleColor;
    double _tabHeight;
    double _tabOffsetFromTop;
    double _currentX;
}

@property(nonatomic) double currentX; // @synthesize currentX=_currentX;
@property(nonatomic) int track; // @synthesize track=_track;
@property(nonatomic) BOOL showNeedle; // @synthesize showNeedle=_showNeedle;
@property(nonatomic) BOOL showTab; // @synthesize showTab=_showTab;
@property(nonatomic) double tabOffsetFromTop; // @synthesize tabOffsetFromTop=_tabOffsetFromTop;
@property(nonatomic) double tabHeight; // @synthesize tabHeight=_tabHeight;
@property(retain, nonatomic) NSColor *needleColor; // @synthesize needleColor=_needleColor;
- (void).cxx_destruct;
- (BOOL)isAnimating;
- (void)startAnimation:(double)arg1 playbackSpeed:(double)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
