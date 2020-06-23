//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaIntegration/IBAutolayoutItem-Protocol.h>

@class IBAutolayoutAmbiguityGroup, IBAutolayoutStatus, IBDocument, IBMutableIdentityDictionary, NSArray, NSMutableArray, NSObject, NSString;
@protocol IBCollection, IBIDEAutolayoutItem;

@protocol IBIDEAutolayoutItem <IBAutolayoutItem>
@property(nonatomic) BOOL ibCanFrameDecideEvenWhenAmbiguousForNextStatusUpdate;
@property(readonly, nonatomic) BOOL ibShouldPropagateFramesDuringFrameDecision;
@property(readonly, nonatomic) BOOL ibShouldIgnoreSizeMisplacement;
@property(readonly, nonatomic) BOOL ibShouldIgnorePositionMisplacement;
@property(readonly, nonatomic) BOOL ibShouldIgnoreSizeAmbiguity;
@property(readonly, nonatomic) BOOL ibShouldIgnorePositionAmbiguity;
@property(nonatomic) BOOL ibExternalWasMisplacedOnLastStatusUpdate;
@property(nonatomic) BOOL ibExternalWasAmbiguousOnLastStatusUpdate;
@property(nonatomic) BOOL ibExternalHasUninitializedAutolayoutAmbiguityStatus;
@property(readonly, nonatomic) NSObject<IBIDEAutolayoutItem> *ibDesignableContentItem;
- (BOOL)ibAllowsBaselineConstraints;
- (BOOL)ibAllowsShowingControlDragConstraintFromAttribute:(unsigned long long)arg1 toAttribute:(unsigned long long)arg2 ofItem:(NSObject<IBIDEAutolayoutItem> *)arg3;
- (BOOL)ibAllowsContainerLikeTreatmentForSiblingConstraintGeneration;
- (unsigned long long)ibPreferredItemReplacementAttributeForAttribute:(unsigned long long)arg1;
- (unsigned long long)ibPreferredConstrainingLayoutAttributeToSiblingWithAttribute:(unsigned long long)arg1;
- (BOOL)ibAllowsConstrainingAttribute:(unsigned long long)arg1 toAttribute:(unsigned long long)arg2 ofItem:(NSObject<IBIDEAutolayoutItem> *)arg3;
- (BOOL)ibHasOwnedPositionLayoutInDocument:(IBDocument *)arg1;
- (BOOL)ibHasOwnedSizeLayoutInDocument:(IBDocument *)arg1;
- (void)ibPrimitiveRemoveConstraintsFromCandidates:(id <IBCollection>)arg1 andFromDocument:(IBDocument *)arg2 allowingCascadingDelete:(BOOL)arg3;
- (void)ibPrimitiveRemoveConstraintsFromCandidateListOnly:(id <IBCollection>)arg1 keepingInDocument:(IBDocument *)arg2;
- (void)ibPrimitiveAddConstraintsToCandidateListOnly:(id <IBCollection>)arg1 thatAreAlreadyInDocument:(IBDocument *)arg2;
- (void)ibInvalidateCachedInstalledConstraintsIncludingChildren:(BOOL)arg1;
- (NSString *)ibEffectiveTitleSuffixForConstrainingAttribute:(unsigned long long)arg1;
- (NSObject<IBIDEAutolayoutItem> *)ibEffectiveItemForConstrainingAttribute:(unsigned long long)arg1;
- (NSArray *)ibAuxiliaryItemsForConstraintDrawables;
- (BOOL)ibCanHaveUninitializedAutolayoutAmbiguityStatusInDocument:(IBDocument *)arg1;
- (void)ibVerifyConstraintsAreWellFormedInDocument:(IBDocument *)arg1 subarbitrationUnitCache:(IBMutableIdentityDictionary *)arg2 andPopulateMessages:(NSMutableArray *)arg3;
- (void)ibVerifyConstraintsAreSortedInDocument:(IBDocument *)arg1;
- (void)ibRemoveCandidateConstraints:(id <IBCollection>)arg1;
- (void)ibAddCandidateConstraints:(id <IBCollection>)arg1 shouldAddToEffectiveEditedConfiguration:(BOOL)arg2;
- (BOOL)ibShouldIgnoreForAmbiguityGroup:(IBAutolayoutAmbiguityGroup *)arg1;
- (BOOL)ibShouldBeIncludedForReportingAmbiguityWithStatus:(IBAutolayoutStatus *)arg1 inDocument:(IBDocument *)arg2;
- (double)ibPriorityForPlaceholderAmbiguousSubviewVerticalConstraints;
- (double)ibPriorityForPlaceholderAmbiguousSubviewHorizontalConstraints;
- (double)ibPriorityForPlaceholderUninitializedSubviewVerticalConstraints;
- (double)ibPriorityForPlaceholderUninitializedSubviewHorizontalConstraints;
- (BOOL)ibShouldInstallPlaceholderSizeConstraintsOnSubviewInsteadOfReceiver;
- (BOOL)ibShouldGeneratePlaceholderSizeConstraintsWhenAmbiguous;
- (BOOL)ibShouldGeneratePlaceholderPositionConstraintsForUninitializedSubviews;
- (BOOL)ibShouldGeneratePlaceholderSizeConstraintsForUninitializedSubviews;
- (BOOL)ibDerivesDesignTimeDefaultIntrinsicContentSize;
- (NSObject<IBIDEAutolayoutItem> *)ibPreferredItemForContainerConstraintFromDescendant:(NSObject<IBIDEAutolayoutItem> *)arg1 attribute:(unsigned long long)arg2;
- (BOOL)ibPrefersToVerticallyResizeWithContainer;
- (BOOL)ibPrefersToHorizontallyResizeWithContainer;
- (double)ibPriorityStrongerThanInternalWeakSizeConstraintsForCompressingViewInLayoutEngineForOrientation:(unsigned long long)arg1;
- (unsigned long long)ibOrientationsWithInternalConstraintsThatWeaklyDefineViewSize;
- (unsigned long long)ibCustomSubviewLayoutStrategy;
- (BOOL)ibIsVerticallyResizable;
- (BOOL)ibIsHorizontallyResizable;
- (CDStruct_d2b197d1)ibInsetToDesignableContentArea;
- (NSString *)ibContainerWidgetType;
- (NSString *)ibWidgetType;
@end
