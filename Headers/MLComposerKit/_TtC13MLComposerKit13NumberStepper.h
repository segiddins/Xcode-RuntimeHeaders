//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSStackView.h>

__attribute__((visibility("hidden")))
@interface _TtC13MLComposerKit13NumberStepper : NSStackView
{
    // Error parsing type: , name: text
    // Error parsing type: , name: stepper
    // Error parsing type: , name: formatter
    // Error parsing type: , name: stepperDelegate
    // Error parsing type: , name: isEnabled
    // Error parsing type: , name: placeholderValue
    // Error parsing type: , name: value
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)onTextConfirm:(id)arg1;
- (void)onStepperClick:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
@property(nonatomic) double placeholderValue; // @synthesize placeholderValue;
@property(nonatomic) double step;
@property(nonatomic) double max;
@property(nonatomic) double min;

@end

