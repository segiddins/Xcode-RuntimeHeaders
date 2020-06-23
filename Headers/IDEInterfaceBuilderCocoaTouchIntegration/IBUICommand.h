//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIMenuChild-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCoding-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCopying-Protocol.h>

@class IBCocoaTouchTargetRuntime, IBKeyEquivalent, IBUIMenuElementIdentifier, NSArray, NSImage, NSString;

@interface IBUICommand : NSObject <IBDocumentArchiving, IBUIMenuChild, NSCopying, NSCoding>
{
    BOOL _isSystemItem;
    int _modifierFlags;
    NSString *_title;
    NSString *_discoverabilityTitle;
    NSImage *_image;
    NSString *_actionName;
    NSString *_propertyListString;
    unsigned long long _attributes;
    long long _state;
    NSArray *_alternates;
    NSString *_input;
    IBCocoaTouchTargetRuntime *_targetRuntime;
    IBUIMenuElementIdentifier *_anchorForUnarchiving;
}

+ (id)keyPathsForValuesAffectingIbInspectedKeyEquivalent;
+ (void)registerMarshallingRecordHandlers;
+ (id)keyPathsForValuesAffectingIbInspectedAlternates;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) IBUIMenuElementIdentifier *anchorForUnarchiving; // @synthesize anchorForUnarchiving=_anchorForUnarchiving;
@property(nonatomic) BOOL isSystemItem; // @synthesize isSystemItem=_isSystemItem;
@property(retain, nonatomic) IBCocoaTouchTargetRuntime *targetRuntime; // @synthesize targetRuntime=_targetRuntime;
@property(nonatomic) int modifierFlags; // @synthesize modifierFlags=_modifierFlags;
@property(copy, nonatomic) NSString *input; // @synthesize input=_input;
@property(copy, nonatomic) NSArray *alternates; // @synthesize alternates=_alternates;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) unsigned long long attributes; // @synthesize attributes=_attributes;
@property(copy, nonatomic) NSString *propertyListString; // @synthesize propertyListString=_propertyListString;
@property(copy, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *discoverabilityTitle; // @synthesize discoverabilityTitle=_discoverabilityTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)parentMenuForDocument:(id)arg1;
- (id)rootMenuForDocument:(id)arg1;
@property(readonly, nonatomic) IBUIMenuElementIdentifier *menuElementIdentifier;
- (id)ibActionConnectionForDocument:(id)arg1;
- (void)flattenIntoArray:(id)arg1;
@property(readonly, nonatomic) unsigned long long childType;
@property(nonatomic, getter=isHidden) BOOL hidden;
@property(nonatomic, getter=isEnabled) BOOL enabled;
@property(readonly, copy) NSString *description;
- (id)initWithTargetRuntime:(id)arg1;
- (void)ibPrepareToBackwardsDeployToOSVersion:(id)arg1 inDocument:(id)arg2;
- (void)ibPopulateAdditionalTargetOSVersions:(id)arg1 forCompilingDocument:(id)arg2;
- (BOOL)isInInitialMenuForDocument:(id)arg1;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (BOOL)ibSupportsOverridingWithCustomClass;
- (BOOL)ibSupportsUserDefinedRuntimeAttributes;
- (id)ibInspectedKeyEquivalentString;
- (BOOL)ibInspectedIsDeveloperItem;
- (void)setIbInspectedKeyEquivalent:(id)arg1;
@property(readonly, nonatomic) IBKeyEquivalent *ibInspectedKeyEquivalent;
- (void)ibFlattenConnection:(id)arg1;
- (BOOL)ibRequiresConnectionFlattening;
- (BOOL)ibIsValidConnectionSourceForDestination:(id)arg1;
- (id)ibPasteboardTypes;
- (BOOL)ibIsCopyableGivenSelection:(id)arg1;
- (Class)classToTakeInitialMarshalledKeysFrom:(id)arg1;
- (id)runtimeClassNameForContext:(id)arg1 returningOptionalFallbackClassName:(id *)arg2;
- (id)ibMarshalledRepresentationForRendering;
- (Class)ibEditorClass;
- (id)ibEditorCanvasFrameControllerForDocument:(id)arg1;
- (BOOL)needsSeparatorAfterPreviousItem:(id)arg1;
- (void)populateEditedMenuItemChildren:(id)arg1 withPreviousItem:(id)arg2;
- (id)ibEditedMenuItemRepresentation;
- (id)ibDefaultLabel;
@property(copy, nonatomic) NSArray *ibInspectedAlternates;
- (void)unarchiveState:(id)arg1;
- (void)archiveState:(id)arg1;
- (void)unarchiveEnabled:(id)arg1;
- (void)archiveEnabled:(id)arg1;
- (void)unarchiveAnchor:(id)arg1;
- (void)archiveAnchor:(id)arg1;
- (void)ibRemoveChildren:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (id)ibLocalLocalizableStringsAttributeKeyPaths;
- (id)ibLocalChildToManyRelationshipsKeyPaths;
- (id)ibLocalAttributeKeyPaths;
- (void)populateWithPlistDict:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

