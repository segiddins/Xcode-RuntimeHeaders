//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSButton, NSNumberFormatter, NSStepper, NSString, NSTextField;

@interface IDEInspectorSizeProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_nonNilValueKeyPath;
    IDEInspectorKeyPath *_nonNilValueObjectKeyPath;
    NSString *_nilPlaceholder;
    BOOL _allowsNilValues;
    BOOL _allowsNegativeValues;
    long long _checkStateForNonNil;
    long long _checkStateForNil;
    NSTextField *_widthTextField;
    NSTextField *_heightTextField;
    NSStepper *_widthStepper;
    NSStepper *_heightStepper;
    NSTextField *_widthLabel;
    NSTextField *_heightLabel;
    NSButton *_hasValueCheckBox;
    NSNumberFormatter *_sizeFormatter;
}

@property(retain, nonatomic) NSNumberFormatter *sizeFormatter; // @synthesize sizeFormatter=_sizeFormatter;
@property(retain, nonatomic) NSButton *hasValueCheckBox; // @synthesize hasValueCheckBox=_hasValueCheckBox;
@property(retain, nonatomic) NSTextField *heightLabel; // @synthesize heightLabel=_heightLabel;
@property(retain, nonatomic) NSTextField *widthLabel; // @synthesize widthLabel=_widthLabel;
@property(retain, nonatomic) NSStepper *heightStepper; // @synthesize heightStepper=_heightStepper;
@property(retain, nonatomic) NSStepper *widthStepper; // @synthesize widthStepper=_widthStepper;
@property(retain, nonatomic) NSTextField *heightTextField; // @synthesize heightTextField=_heightTextField;
@property(retain, nonatomic) NSTextField *widthTextField; // @synthesize widthTextField=_widthTextField;
- (void).cxx_destruct;
- (id)findIndicatorContentViewWithContext:(id)arg1;
- (void)refresh;
- (void)toggleNilValue:(id)arg1;
- (void)userDidEnterHeight:(id)arg1;
- (void)userDidEnterWidth:(id)arg1;
- (void)userDidIncrementHeight:(id)arg1;
- (void)userDidIncrementWidth:(id)arg1;
- (void)applyUserSizeFromSender:(id)arg1 byMappingValues:(CDUnknownBlockType)arg2;
- (double)baseline;
- (id)nibName;
- (void)loadView;
- (void)setupRefreshTriggersAndConfigure;
- (BOOL)allowsNilValues;

@end

