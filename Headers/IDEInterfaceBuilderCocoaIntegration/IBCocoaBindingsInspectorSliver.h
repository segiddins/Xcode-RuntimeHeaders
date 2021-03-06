//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <IDEInterfaceBuilderCocoaIntegration/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IBCocoaBindingsInspectorSlice, NSAttributeDescription, NSControl, NSString;

@interface IBCocoaBindingsInspectorSliver : NSViewController <DVTInvalidation>
{
    NSAttributeDescription *_optionAttribute;
    NSString *_optionName;
    id _originalValue;
    BOOL _optionEnabled;
    IBCocoaBindingsInspectorSlice *_parentEditor;
    NSControl *_valueField;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain) NSControl *valueField; // @synthesize valueField=_valueField;
@property(retain) IBCocoaBindingsInspectorSlice *parentEditor; // @synthesize parentEditor=_parentEditor;
- (void)objectDidEndEditing:(id)arg1;
- (void)objectDidBeginEditing:(id)arg1;
- (id)optionAttribute;
- (void)setOptionAttribute:(id)arg1;
- (unsigned long long)optionWidgetType;
- (long long)compare:(id)arg1;
- (id)optionName;
- (id)optionStringValue;
- (void)setOptionStringValue:(id)arg1;
- (id)optionDateValue;
- (void)setOptionDateValue:(id)arg1;
- (BOOL)validateOptionDateValue:(id *)arg1 error:(id *)arg2;
- (id)optionNumberValue;
- (void)setOptionNumberValue:(id)arg1;
- (BOOL)validateOptionNumberValue:(id *)arg1 error:(id *)arg2;
- (long long)optionStateValue;
- (void)setOptionStateValue:(long long)arg1;
- (BOOL)optionEnabledValue;
- (void)setOptionEnabledValue:(BOOL)arg1;
- (void)primitiveInvalidate;
- (void)loadView;
- (id)initWithOptionDictionary:(id)arg1 controller:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

