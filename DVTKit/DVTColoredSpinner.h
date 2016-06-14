//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, NSColor, NSDate, NSTimer;
@protocol DVTColoredSpinnerDelegate;

@interface DVTColoredSpinner : NSView
{
    NSTimer *_timer;
    unsigned long long _animationStep;
    NSArray *_images;
    NSTimer *_goalStateTimer;
    BOOL _goalState;
    NSDate *_lastAnimationStartTime;
    BOOL _displaysWhenStopped;
    BOOL _animating;
    NSColor *_color;
    id <DVTColoredSpinnerDelegate> _delegate;
}

+ (void)initialize;
@property(nonatomic, getter=isAnimating) BOOL animating; // @synthesize animating=_animating;
@property(nonatomic) __weak id <DVTColoredSpinnerDelegate> delegate; // @synthesize delegate=_delegate;
@property BOOL displaysWhenStopped; // @synthesize displaysWhenStopped=_displaysWhenStopped;
@property(copy, nonatomic) NSColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)imagesAreValid;
- (void)_timerStep:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)updateAnimationTimer;
- (void)validateGoalState:(id)arg1;
- (void)setAnimating:(BOOL)arg1 delayBeforeStarting:(double)arg2 minimumTimeOn:(double)arg3;
- (id)dvtExtraBindings;

@end

