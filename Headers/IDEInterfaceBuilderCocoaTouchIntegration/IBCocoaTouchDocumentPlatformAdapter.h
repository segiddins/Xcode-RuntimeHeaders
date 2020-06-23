//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBDocumentPlatformAdapter.h>

@class IBColor, IBPreXcode8ColorCorrector;

@interface IBCocoaTouchDocumentPlatformAdapter : IBDocumentPlatformAdapter
{
    IBPreXcode8ColorCorrector *_colorCorrector;
    IBColor *_storyboardGlobalTintColor;
}

- (void).cxx_destruct;
@property(copy, nonatomic) IBColor *storyboardGlobalTintColor; // @synthesize storyboardGlobalTintColor=_storyboardGlobalTintColor;
- (id)issueReasonForMisuseOfSymbolCharactersInString;
- (void)populateDocumentResourceReferences:(id)arg1 resourceManager:(id)arg2;
- (id)documentFallbackColorForSystemColor:(id)arg1;
- (id)documentSystemColorNamed:(id)arg1;
- (id)documentSystemColorNamed:(id)arg1 fallbackColor:(id)arg2;
- (void)preflightToolWithDeviceTypeDescription:(id)arg1 numberOfTimes:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)asynchronouslyPreflightShowingDocumentUIForDeviceTypeDescription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)preflightUnarchivingDocumentWithConfiguration:(id)arg1 error:(id *)arg2;
- (id)customFontFilenamesPlistKey;
- (void)repopulateCustomFontFilenames:(id)arg1;
- (id)allCustomFontFilenames;
- (id)defaultTintColor;
- (id)draggedImageBackgroundColorForAppearance:(id)arg1 document:(id)arg2;
- (struct CGSize)canvasPositioningScaleForSimulatedMetricsContainer:(id)arg1;
- (void)documentDidDisableMemberConfigurations;
- (void)refreshDocumentAppearance;
- (id)effectiveAppearanceForEditorCanvasFrameController:(id)arg1;
- (id)effectiveAppearanceForConfiguration:(id)arg1;
- (id)implicitIntegratorBundleDependencyIdentifier;
- (void)populateEmptyXIBDocumentWithInitialPlaceholders;
- (void)installTopLevelPlaceholderWithLabel:(id)arg1 className:(id)arg2 placeholderID:(id)arg3 andObjectID:(id)arg4;
- (id)compiledStoryboardInfoPlistFileName;
- (id)defaultCompiledStoryboardInfoPlistFileName;
- (id)defaultHybridNIBPackageRuntimeFileName;
- (id)compiledStoryBoardIntermediateXibFileType;
- (void)addToManyOutletFromObject:(id)arg1 referencingInstance:(id)arg2 byName:(id)arg3;
- (void)addOutletFromObject:(id)arg1 referencingInstance:(id)arg2 byName:(id)arg3;
- (void)addActionFromSender:(id)arg1 toReceiver:(id)arg2 withSelector:(id)arg3;
- (id)intrinsicPackageContentForNewlyGeneratedPackageWithFileType:(id)arg1;
- (id)archiveTypeForFileType:(id)arg1;
- (id)globalTintOverrideWarning;
- (BOOL)shouldShowGlobalTintOverrideWarning;
- (void)didUpdateSceneWithRootObject:(id)arg1;
- (void)didFinishUpdatingScenesWithRootObjects:(id)arg1;
- (void)documentWillBeginRegisteringUndoableChanges;
- (void)decodePlatformSpecificDocumentProperties:(id)arg1;
- (void)encodePlatformSpecificDocumentProperties:(id)arg1;
- (void)archivePlatformSpecificDocumentProperties:(id)arg1;
- (void)unarchivePlatformSpecificDocumentProperties:(id)arg1;
- (Class)externalReferencePlaceholderClass;
- (id)storyboardExitPlaceholder;
- (id)storyboardFirstResponderPlaceholder;
- (id)connectToSourceTeardownMethodCounterpartsForContext:(id)arg1;
- (BOOL)connectToSourceIsTargetingOSVersionWithRequiredViewUnloading;
- (id)targetRuntime;
- (id)initWithDocument:(id)arg1;

@end

