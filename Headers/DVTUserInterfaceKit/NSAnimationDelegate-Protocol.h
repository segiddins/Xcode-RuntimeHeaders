//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/NSObject-Protocol.h>

@class NSAnimation;

@protocol NSAnimationDelegate <NSObject>

@optional
- (void)animation:(NSAnimation *)arg1 didReachProgressMark:(float)arg2;
- (float)animation:(NSAnimation *)arg1 valueForProgress:(float)arg2;
- (void)animationDidEnd:(NSAnimation *)arg1;
- (void)animationDidStop:(NSAnimation *)arg1;
- (BOOL)animationShouldStart:(NSAnimation *)arg1;
@end

