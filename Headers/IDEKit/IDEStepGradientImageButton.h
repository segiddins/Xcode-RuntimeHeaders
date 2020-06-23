//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTGradientImageButton.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSImage, NSString;

@interface IDEStepGradientImageButton : DVTGradientImageButton <DVTInvalidation>
{
    id _optionMonitor;
    BOOL _onlyAllowAllStepByInstructionBehavior;
    NSImage *_stepImage;
    NSImage *_stepSuspendingOtherThreadsImage;
    NSImage *_stepByInstructionImage;
    SEL _stepAction;
    SEL _stepSuspendingOtherThreadsAction;
    SEL _stepByInstructionAction;
}

+ (BOOL)_areOnlyControlShiftKeysPressed:(id)arg1;
+ (BOOL)_isOnlyTheControlKeyPressed:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property SEL stepByInstructionAction; // @synthesize stepByInstructionAction=_stepByInstructionAction;
@property(copy) NSImage *stepByInstructionImage; // @synthesize stepByInstructionImage=_stepByInstructionImage;
@property SEL stepSuspendingOtherThreadsAction; // @synthesize stepSuspendingOtherThreadsAction=_stepSuspendingOtherThreadsAction;
@property(copy) NSImage *stepSuspendingOtherThreadsImage; // @synthesize stepSuspendingOtherThreadsImage=_stepSuspendingOtherThreadsImage;
@property SEL stepAction; // @synthesize stepAction=_stepAction;
@property(copy) NSImage *stepImage; // @synthesize stepImage=_stepImage;
- (void)primitiveInvalidate;
- (void)_onlyAllowAllStepByInstructionBehavior:(BOOL)arg1;
- (void)_changeToStepByInstructionButton;
- (void)_changeToStepSuspendingOtherThreadsButton;
- (void)_changeToStepButton;
- (void)_updateButtonImageAndAction:(id)arg1;
- (void)_handleEvent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

