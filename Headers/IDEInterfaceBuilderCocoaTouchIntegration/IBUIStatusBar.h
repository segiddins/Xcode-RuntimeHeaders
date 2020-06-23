//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class IBCocoaTouchTargetRuntime, IBUINavigationBar, IBUISimulatedStatusBarMetrics;

@interface IBUIStatusBar : NSView
{
    IBUISimulatedStatusBarMetrics *_statusBarMetrics;
    IBUINavigationBar *_navigationBar;
    IBCocoaTouchTargetRuntime *_targetRuntime;
}

@property(retain, nonatomic) IBCocoaTouchTargetRuntime *targetRuntime; // @synthesize targetRuntime=_targetRuntime;
@property(retain, nonatomic) IBUINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) IBUISimulatedStatusBarMetrics *statusBarMetrics; // @synthesize statusBarMetrics=_statusBarMetrics;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)wantsUpdateLayer;
- (id)navBarTintColorToMatch;
- (long long)style;
- (id)initWithFrame:(struct CGRect)arg1 targetRuntime:(id)arg2;

@end

