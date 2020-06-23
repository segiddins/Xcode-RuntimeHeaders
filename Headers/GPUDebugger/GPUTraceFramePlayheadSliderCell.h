//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSSliderCell.h>

__attribute__((visibility("hidden")))
@interface GPUTraceFramePlayheadSliderCell : NSSliderCell
{
    SEL _mouseDownAction;
    SEL _mouseUpAction;
}

@property SEL mouseDownAction; // @synthesize mouseDownAction=_mouseDownAction;
@property SEL mouseUpAction; // @synthesize mouseUpAction=_mouseUpAction;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (void)drawBarInside:(struct CGRect)arg1 flipped:(BOOL)arg2;
- (BOOL)_usesCustomTrackImage;

@end

