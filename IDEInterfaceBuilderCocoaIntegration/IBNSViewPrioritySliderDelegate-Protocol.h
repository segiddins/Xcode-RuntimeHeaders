//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaIntegration/NSObject-Protocol.h>

@class IBNSViewPrioritySlider;

@protocol IBNSViewPrioritySliderDelegate <NSObject>
- (void)viewPrioritySlider:(IBNSViewPrioritySlider *)arg1 didStopTrackingAtPoint:(struct CGPoint)arg2;
- (void)viewPrioritySlider:(IBNSViewPrioritySlider *)arg1 didContinueTrackingAtPoint:(struct CGPoint)arg2;
- (void)viewPrioritySlider:(IBNSViewPrioritySlider *)arg1 didStartTrackingAtPoint:(struct CGPoint)arg2;
@end

