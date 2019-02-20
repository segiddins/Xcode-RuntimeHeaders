//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <XCSUI/XCSUIBotDefintionEditorViewController-Protocol.h>

@class DVTStackBacktrace, NSString, XCSUIBotDefinitionContext, XCSUIBotDefinition_DevicePickerEditor, XCSUIBotDefinition_DevicePickerEditor_Legacy;

@interface XCSUIBotDefinitionEditor_DevicePickerCapsule : IDEViewController <XCSUIBotDefintionEditorViewController>
{
    XCSUIBotDefinitionContext *_definitionContext;
    XCSUIBotDefinition_DevicePickerEditor_Legacy *_legacyDevicePickerEditor;
    XCSUIBotDefinition_DevicePickerEditor *_devicePickerEditor;
}

+ (id)title;
@property(retain, nonatomic) XCSUIBotDefinition_DevicePickerEditor *devicePickerEditor; // @synthesize devicePickerEditor=_devicePickerEditor;
@property(retain, nonatomic) XCSUIBotDefinition_DevicePickerEditor_Legacy *legacyDevicePickerEditor; // @synthesize legacyDevicePickerEditor=_legacyDevicePickerEditor;
@property(retain, nonatomic) XCSUIBotDefinitionContext *definitionContext; // @synthesize definitionContext=_definitionContext;
- (void).cxx_destruct;
- (void)commitChanges;
- (void)primitiveInvalidate;
- (void)loadView;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
