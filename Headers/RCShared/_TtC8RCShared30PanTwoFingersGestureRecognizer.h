//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSGestureRecognizer.h>

@class MISSING_TYPE;

@interface _TtC8RCShared30PanTwoFingersGestureRecognizer : NSGestureRecognizer
{
    MISSING_TYPE *_translation;
    MISSING_TYPE *_delta;
    MISSING_TYPE *_velocity;
    MISSING_TYPE *restoreStateTimer;
    MISSING_TYPE *scrollingDelta;
}

- (void).cxx_destruct;
- (struct CGPoint)locationInView:(id)arg1;
- (void)reset;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end
