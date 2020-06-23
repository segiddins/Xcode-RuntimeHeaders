//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor;

@interface IDEAnalyticsMetricsRoundChevronView : NSView
{
    unsigned long long _chevronDirection;
    NSColor *_color;
}

+ (void)drawChevronViewInRect:(struct CGRect)arg1 withDirection:(unsigned long long)arg2 andColor:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSColor *color; // @synthesize color=_color;
@property(nonatomic) unsigned long long chevronDirection; // @synthesize chevronDirection=_chevronDirection;
- (void)drawRect:(struct CGRect)arg1;

@end
