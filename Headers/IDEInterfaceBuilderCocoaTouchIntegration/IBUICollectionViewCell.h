//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUICollectionReusableView.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>

@class IBUICollectionViewCellContentView, IBUIView, NSString, NSValue;

@interface IBUICollectionViewCell : IBUICollectionReusableView <IBDocumentArchiving>
{
    BOOL _ibWantsDocumentContentView;
    BOOL _ibRequiresCompileTimeContentViewConstraints;
    NSValue *_customSize;
    IBUIView *_contentView;
}

+ (void)registerMarshallingRecordHandlers;
+ (id)keyPathsForValuesAffectingIsInsideCollectionView;
+ (id)ibKeyPathForDocumentContentView;
+ (id)keyPathsForValuesAffectingIbIsUsingDocumentContentView;
+ (id)keyPathsForValuesAffectingIbInspectedUsesContentView;
+ (id)keyPathsForValuesAffectingIbInspectedShowContentViewOption;
+ (id)keyPathsForValuesAffectingIbArchivedDesignableContentView;
+ (id)keyPathsForValuesAffectingIbDesignableContentView;
+ (id)keyPathsForValuesAffectingIbInspectedCustomSize;
+ (id)keyPathsForValuesAffectingIbInspectedSizeMode;
+ (id)keyPathsForValuesAffectingIbInspectedDefaultSize;
+ (void)ibDidInstantiateView:(id)arg1 forAsset:(id)arg2 role:(long long)arg3;
+ (long long)ibInstantiationSizeBehavior;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
- (void).cxx_destruct;
@property(nonatomic) BOOL ibRequiresCompileTimeContentViewConstraints; // @synthesize ibRequiresCompileTimeContentViewConstraints=_ibRequiresCompileTimeContentViewConstraints;
@property(retain, nonatomic) IBUIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSValue *customSize; // @synthesize customSize=_customSize;
- (id)configurableKeyPathForMarshalledDesignTimeToManyRelationship:(id)arg1;
- (id)localExtraMarshalledToManyRelationshipKeyPaths;
- (id)localExtraMarshalledAttributesKeyPaths;
@property(readonly, nonatomic) BOOL ibIsUsingAutomaticSizing;
@property(readonly) BOOL isInsideCollectionView;
- (void)collectionViewItemSizeDidChange:(id)arg1;
- (void)ibInstallNonDocumentContentViewIfNeeded;
- (void)layoutSubviews;
- (id)ibVerifyContentViewCurrentContentView;
- (void)setIbVerifyContentViewCurrentContentView:(id)arg1;
- (id)ibEffectiveContentViewToUseForDocument:(id)arg1;
@property(readonly, nonatomic) IBUICollectionViewCellContentView *documentContentView;
@property(readonly, nonatomic) BOOL ibIsUsingDocumentContentView;
@property(nonatomic) BOOL ibWantsDocumentContentView;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 targetRuntime:(id)arg2;
- (id)ibViewForAncestorViewEdgeMovementQuestionsOfSubview:(id)arg1;
- (long long)ibFrameDecisionStrategyDuringFrameDecisionForChild:(id)arg1 hasCleanStatus:(BOOL)arg2;
- (BOOL)ibIsSubarbitrationUnitRoot;
- (BOOL)ibIsChildASubarbitrationUnitRoot:(id)arg1;
- (void)ibVerifyXcodeContentViewWithDocument:(id)arg1;
- (BOOL)ibInspectedAllowsCollectionViewCellContentView;
@property(nonatomic) BOOL ibInspectedUsesContentView;
- (BOOL)ibInspectedShowContentViewOption;
- (void)ibPrepareToBackwardsDeployToOSVersion:(id)arg1 inDocument:(id)arg2;
- (BOOL)ibIsCellOrContentViewReferencingConstraints;
- (void)ibPopulateAdditionalTargetOSVersions:(id)arg1 forCompilingDocument:(id)arg2;
- (void)ibEnumerateIncrementallyMarshalledKeyPathsForChangeToKeyPath:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (BOOL)ibShouldShowCustomSizeInSizeInspector;
- (unsigned long long)ibBoundsIndicatorRectBorderSides;
- (id)ibDuplicateReuseIdentifierWarningKey;
- (id)ibMissingReuseIdentifierWarningKey;
- (BOOL)ibHasDuplicateReuseIdentifierWithComputationContext:(id)arg1;
- (void)ibSetupTriggerForSegueTemplate:(id)arg1 inCompilationUnit:(id)arg2;
- (id)ibSegueTriggers;
- (id)ibDefaultSegueTrigger;
- (BOOL)ibIsSizable;
- (BOOL)ibIsMovable;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (BOOL)ibIsChildInitiallySelectable:(id)arg1;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (void)setIbArchivedDesignableContentView:(id)arg1 unarchiver:(id)arg2;
- (id)ibArchivedDesignableContentView;
- (id)ibDesignableContentView;
- (id)ibPasteboardTypes;
- (Class)ibTrackerClass;
- (void)setIbInspectedCustomSize:(struct CGSize)arg1;
- (struct CGSize)ibInspectedCustomSize;
- (void)setIbInspectedSizeMode:(long long)arg1;
- (long long)ibInspectedSizeMode;
- (id)ibQualifyingInfoForDefaultLabel;
@property(readonly, nonatomic) struct CGSize ibInspectedDefaultSize;
- (void)ibDidAddToDocument:(id)arg1 phase:(unsigned long long)arg2;
- (Class)ibEditorClass;
- (id)ibLocalAttributeKeyPaths;
- (id)ibLocalChildToOneRelationshipsKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

