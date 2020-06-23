//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBDocumentPlatformAdapter.h>

@class IBCocoaBindingsManager, NSNumber;

@interface IBCocoaDocumentPlatformAdapter : IBDocumentPlatformAdapter
{
    IBCocoaBindingsManager *_bindingManager;
    NSNumber *_explicitCustomObjectInstantiationBehavior;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *explicitCustomObjectInstantiationBehavior; // @synthesize explicitCustomObjectInstantiationBehavior=_explicitCustomObjectInstantiationBehavior;
@property(readonly, nonatomic) IBCocoaBindingsManager *bindingManager; // @synthesize bindingManager=_bindingManager;
- (void)performAdditionDocumentVerificationAndPopulateMessages:(id)arg1;
- (id)applicableInspectorCategoriesGivenSuggestion:(id)arg1;
- (id)storyboardExitPlaceholder;
- (id)storyboardFirstResponderPlaceholder;
- (id)implicitIntegratorBundleDependencyIdentifier;
- (void)applyPlatformSpecificInstanceStateToPasteboardClone:(id)arg1;
- (void)decodePlatformSpecificDocumentProperties:(id)arg1;
- (void)encodePlatformSpecificDocumentProperties:(id)arg1;
- (void)unarchivePlatformSpecificDocumentProperties:(id)arg1;
- (void)archivePlatformSpecificDocumentProperties:(id)arg1;
- (void)populateEmptyXIBDocumentWithInitialPlaceholders;
- (void)installTopLevelPlaceholderWithLabel:(id)arg1 className:(id)arg2 andObjectID:(id)arg3;
- (Class)externalReferencePlaceholderClass;
- (id)defaultHybridNIBPackageRuntimeFileName;
- (id)compiledStoryBoardIntermediateXibFileType;
- (void)addToManyOutletFromObject:(id)arg1 referencingInstance:(id)arg2 byName:(id)arg3;
- (void)addOutletFromObject:(id)arg1 referencingInstance:(id)arg2 byName:(id)arg3;
- (void)addActionFromSender:(id)arg1 toReceiver:(id)arg2 withSelector:(id)arg3;
- (id)archiveTypeForFileType:(id)arg1;
- (id)forcedUpgradeFileTypeForFileType:(id)arg1;
- (id)intrinsicPackageContentForNewlyGeneratedPackageWithFileType:(id)arg1;
- (id)issueReasonForMisuseOfSymbolCharactersInString;
- (id)documentCIImageNamed:(id)arg1 usingSizeValueForPlaceholderImageIfNeeded:(id)arg2;
- (void)frameDecider:(id)arg1 didPropagateFrameSize:(struct CGSize)arg2 toView:(id)arg3;
- (void)frameDecider:(id)arg1 didPropagateFrame:(struct CGRect)arg2 toView:(id)arg3;
- (void)internalFrameDecider:(id)arg1 didPropagateFrameSize:(struct CGSize)arg2 toView:(id)arg3;
- (id)effectiveAppearanceForConfiguration:(id)arg1;
- (id)desiredConfigurationBasedOnEditorWindow:(id)arg1;
- (BOOL)isConfigurationAffectedByEditorAppearance;
- (id)initialDefaultConfiguration;
- (void)primitiveInvalidate;
- (BOOL)isObjectBuiltInXIBPlaceholder:(id)arg1;
- (id)platform;
- (id)initWithDocument:(id)arg1;

@end

