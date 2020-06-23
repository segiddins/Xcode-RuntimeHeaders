//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

#import <IDEKit/DVTColorPickerDelegate-Protocol.h>

@class DVTColorPickerPopUpButton, DVTObservingToken, IDEInspectorKeyPath, NSColor, NSString, NSTextField;
@protocol DVTInvalidation, IDEResourceManager;

@interface IDEInspectorColorProperty : IDEInspectorProperty <DVTColorPickerDelegate>
{
    IDEInspectorKeyPath *_defaultColorKeyPath;
    IDEInspectorKeyPath *_supportsNilKeyPath;
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_colorListKeyPath;
    IDEInspectorKeyPath *_resourceManagerKeyPath;
    IDEInspectorKeyPath *_colorSwatchAppearanceKeyPath;
    DVTObservingToken *_colorSwatchAppearanceKeyPathObserverToken;
    DVTObservingToken *_resourceManagerKeyPathObserverToken;
    id <DVTInvalidation> _resourceManagerObserverToken;
    NSColor *_defaultColor;
    BOOL _targetingCIColor;
    BOOL _defaultColorForNil;
    NSString *_title;
    DVTColorPickerPopUpButton *_popUpButton;
    NSTextField *_label;
}

@property(retain, nonatomic) NSTextField *label; // @synthesize label=_label;
@property(retain, nonatomic) DVTColorPickerPopUpButton *popUpButton; // @synthesize popUpButton=_popUpButton;
- (void).cxx_destruct;
- (id)colorPicker:(id)arg1 effectiveRecentColors:(id)arg2;
- (void)userDidChangeValue:(id)arg1;
- (id)colorValueReturningValueState:(out long long *)arg1;
- (void)refresh;
- (id)firstColorResourceFromResourceManager:(id)arg1 withRuntimeName:(id)arg2;
- (id)valueFromColor:(id)arg1;
- (id)colorFromValue:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
@property(readonly) id <IDEResourceManager> resourceManager;
- (id)nibName;
- (double)baseline;
- (void)primitiveInvalidate;
- (id)initWithPropertyDefinition:(id)arg1 andController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

