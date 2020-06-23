//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSGradient;

@interface DVTGauge : NSView
{
    unsigned long long _style;
    unsigned long long _indicatorStyle;
    double _doubleValue;
    double _minValue;
    double _maxValue;
    long long _backgroundStyle;
    NSGradient *_indicatorGradient;
    CDUnknownBlockType _renderer;
}

- (void).cxx_destruct;
@property(nonatomic) CDUnknownBlockType renderer; // @synthesize renderer=_renderer;
@property(retain, nonatomic) NSGradient *indicatorGradient; // @synthesize indicatorGradient=_indicatorGradient;
@property long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) double maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) double minValue; // @synthesize minValue=_minValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(nonatomic) unsigned long long indicatorStyle; // @synthesize indicatorStyle=_indicatorStyle;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
