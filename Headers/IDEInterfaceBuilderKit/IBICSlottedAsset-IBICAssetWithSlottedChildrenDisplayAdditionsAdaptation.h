//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBFoundation/IBICSlottedAsset.h>

#import <IDEInterfaceBuilderKit/IBICAssetWithSlottedChildrenDisplayAdditions_ONLY-Protocol.h>

@interface IBICSlottedAsset (IBICAssetWithSlottedChildrenDisplayAdditionsAdaptation) <IBICAssetWithSlottedChildrenDisplayAdditions_ONLY>
+ (id)keyPathsForValuesAffectingIbInspectedShowLocalizations;
+ (id)keyPathsForValuesAffectingIbInspectedShowLocalizeButton;
+ (BOOL)groupedRepCapsuleWrapsAllSubgroupsOfGroupWithPath:(id)arg1;
+ (id)groupedRepCapsuleTitleOfGroupWithPath:(id)arg1 containingAssetRepIDs:(id)arg2;
+ (CDStruct_7ddbbeae)capsuleGroupingAttributesForGroupWithPath:(id)arg1;
- (id)createDefaultChildForNewSlot:(id)arg1 byModifyingSlot:(id)arg2;
- (id)mutateByAddingNewChild:(id)arg1 forSlot:(id)arg2 inDocument:(id)arg3;
- (id)mutateByAddingCopyOfChild:(id)arg1 usingSlot:(id)arg2 inDocument:(id)arg3;
- (void)idInspectedMakeLocalizable;
- (BOOL)ibInspectedShowLocalizations;
- (BOOL)ibInspectedShowLocalizeButton;
- (BOOL)isDisplayNameFindable;
- (id)overviewCapsuleSpecification;
- (id)detachedSlottedAssetRepByAcceptingPasteboardObject:(id)arg1 forRepIdentifier:(id)arg2;
- (id)itemsForOpeningInExternalEditor;
- (id)icon;
- (id)ibInspectedLocalizations;
- (id)project;
@end

