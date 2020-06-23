//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSColorScaleSlider, NSStepper, NSString, NSTextField;

@interface IDEInspectorColorComponentProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_colorValueKeyPath;
    IDEInspectorKeyPath *_isExtendedRangeKeyPath;
    NSString *_componentName;
    long long _inputType;
    BOOL _extendedRange;
    NSColorScaleSlider *_colorSlider;
    NSTextField *_valueText;
    NSStepper *_stepper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSStepper *stepper; // @synthesize stepper=_stepper;
@property(retain, nonatomic) NSTextField *valueText; // @synthesize valueText=_valueText;
@property(retain, nonatomic) NSColorScaleSlider *colorSlider; // @synthesize colorSlider=_colorSlider;
- (void)userDidChangeValue:(id)arg1;
- (void)refresh;
- (void)setupRefreshTriggersAndConfigure;
- (id)nibName;
- (double)baseline;
- (id)initWithPropertyDefinition:(id)arg1 andController:(id)arg2;

@end

