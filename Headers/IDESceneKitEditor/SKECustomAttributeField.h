//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

#import <IDESceneKitEditor/IDEBindableDeclarativeInspectorController-Protocol.h>

@class DVTOneShotBlock, IDEInspectorContentView, IDEWorkspaceTabController, NSArray, NSBundle, NSColorWell, NSDictionary, NSString, SCNMaterial, SKEContentsPickerPopUpButton, SKEInspectorVector4Property, SKEMaterialCustomPropertiesInspector, SKETableStepperTextField;

@interface SKECustomAttributeField : NSView <IDEBindableDeclarativeInspectorController>
{
    id _contents;
    NSDictionary *_objectValue;
    SCNMaterial *_material;
    NSString *_slotName;
    NSView *_editor;
    SKEMaterialCustomPropertiesInspector *_inspector;
    SKEInspectorVector4Property *_vector4Controller;
    SKEContentsPickerPopUpButton *_picker;
    SKETableStepperTextField *_stepperTextField;
    NSColorWell *_colorField;
    DVTOneShotBlock *_cancellationTokens;
}

+ (id)inspectedArrayControllerKeys;
- (void).cxx_destruct;
@property(retain) NSString *slotName; // @synthesize slotName=_slotName;
@property(retain) SCNMaterial *material; // @synthesize material=_material;
@property(readonly) IDEInspectorContentView *inspectorContentView;
@property(readonly) id inspectedObject;
@property(readonly) NSArray *inspectedObjects;
@property(readonly) NSBundle *bundle;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)floatValueChanged:(id)arg1;
@property(nonatomic) struct SCNVector4 vector4;
- (void)setAttributeValue:(id)arg1;
- (id)attributeValue;
- (void)userChangedValue:(id)arg1;
- (void)setObjectValue:(id)arg1;
- (void)dealloc;
- (void)invalidate;
- (id)objectValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) IDEWorkspaceTabController *workspaceTabController;

@end
