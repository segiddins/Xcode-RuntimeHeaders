//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor;

@interface DBGRoundedBox : NSView
{
    NSColor *_color;
    double *_pattern;
    long long _count;
    double _phase;
    NSColor *_fillColor;
    double _borderRadius;
}

@property double borderRadius; // @synthesize borderRadius=_borderRadius;
@property(retain) NSColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
@property(retain) NSColor *fillColor; // @synthesize fillColor=_fillColor;
- (void)drawRect:(struct CGRect)arg1;
- (void)setLineDash:(double *)arg1 count:(long long)arg2 phase:(double)arg3;
- (void)dealloc;

@end

