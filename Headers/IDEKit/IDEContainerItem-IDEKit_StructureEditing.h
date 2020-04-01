//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEContainerItem.h>

#import <IDEKit/IDEInspectorMatching-Protocol.h>
#import <IDEKit/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>
#import <IDEKit/IDEStructureEditingTarget-Protocol.h>
#import <IDEKit/IDEStructureNavigatorMenuItemWhitelistProvider-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, DVTFilePath, DVTReferenceResolutionStrategy, DVTSymbol, IDEFileReference, NSArray, NSImage, NSNull, NSString, NSURL;

@interface IDEContainerItem (IDEKit_StructureEditing) <IDEStructureEditingTarget, IDEKeyDrivenNavigableItemRepresentedObject, IDEInspectorMatching, IDEStructureNavigatorMenuItemWhitelistProvider>
+ (id)keyPathsForValuesAffectingNavigableItem_filtered;
+ (id)keyPathsForValuesAffectingIdeInspectedExpectedFilePath;
+ (id)keyPathsForValuesAffectingIdeInspectedStartingPlaceForChoosingRelativeLocationContainingFolder;
+ (id)keyPathsForValuesAffectingIdeInspectedRelativeContainingFolderLocation;
+ (id)keyPathsForValuesAffectingIdeInspectedStartingPlaceForChoosingRelativeLocation;
+ (id)keyPathsForValuesAffectingIdeInspectedRelativeLocation;
+ (id)keyPathsForValuesAffectingIdeInspectedResolvedFilePath;
+ (id)keyPathsForValuesAffectingIdeInspectedFileName;
+ (BOOL)displaysStatus;
+ (BOOL)displaysProgress;
+ (id)keyPathsForValuesAffectingNavigableItem_contentDocumentLocation;
+ (id)keyPathsForValuesAffectingNavigableItem_representedURL;
+ (id)keyPathsForValuesAffectingNavigableItem_missingReferencedContentIsImportant;
+ (id)keyPathsForValuesAffectingNavigableItem_referencedContentExists;
+ (id)keyPathsForValuesAffectingNavigableItem_toolTip;
+ (id)keyPathsForValuesAffectingNavigableItem_name;
+ (id)keyPathsForValuesAffectingIdeInspectedExpectedFilePathURL;
+ (id)keyPathsForValuesAffectingIdeInspectedExpectedFilePath;
- (id)structureEditingRemoveSubitemsTargetForParentNavigableItem:(id)arg1;
- (id)structureEditingGroupingTargetForProposedNavigableItem:(id)arg1 proposedChildIndex:(long long)arg2 createDirectory:(BOOL)arg3 inWorkspace:(id)arg4;
- (id)structureEditingTargetForProposedNavigableItem:(id)arg1 proposedChildIndex:(long long)arg2;
@property(readonly) unsigned long long navigableItem_conflictStateForUpdateOrMerge;
@property(readonly) NSString *navigableItem_sourceControlServerStatus;
@property(readonly) NSString *navigableItem_sourceControlLocalStatus;
@property(nonatomic, readonly) NSString *navigableItem_name;
- (id)ide_openQuicklySubpathImage;
@property(readonly) NSString *ideInspectedExpectedDevReigonFilePath;
@property(readonly) BOOL ideInspectedShowsDevReigonSection;
@property(nonatomic, readonly) NSString *ideInspectedExpectedFilePath;
@property(readonly) NSString *ideInspectedRelativeLocationContainingFolderPlaceholder;
@property(readonly) NSString *ideInspectedStartingPlaceForChoosingRelativeLocationContainingFolder;
@property(copy) NSString *ideInspectedRelativeContainingFolderLocation;
@property(readonly) NSString *ideInspectedRelativeLocationPlaceholder;
@property(readonly) NSString *ideInspectedMessageForChoosingRelativeLocation;
@property(readonly) NSString *ideInspectedStartingPlaceForChoosingRelativeLocation;
@property(readonly) BOOL ideInspectedCanClearRelativeLocation;
@property(readonly) BOOL ideInspectedRelativeLocationShouldChooseDirectory;
@property(readonly) BOOL ideInspectedRelativeLocationShouldChooseFile;
@property(copy) NSString *idePendingInspectedRelativeLocation;
@property(copy) NSString *ideInspectedRelativeLocation;
- (BOOL)ideInspectedRelativeLocationIsEditable;
@property(readonly) NSArray *ideInspectedMissingResolutionStrategiesDisplayValues;
@property(readonly) NSArray *ideInspectedMissingResolutionStrategiesValues;
@property(readonly) NSArray *ideInspectedCustomResolutionStrategiesDisplayValues;
@property(readonly) NSArray *ideInspectedCustomResolutionStrategyValues;
@property(readonly) NSArray *ideInspectedStandardResolutionStrategiesDisplayValues;
@property(readonly) NSArray *ideInspectedStandardResolutionStrategyValues;
@property(retain) DVTReferenceResolutionStrategy *ideInspectedResolutionStrategy;
@property(readonly) NSString *ideInspectedNilResolutionStrategyPlaceholder;
@property(retain) DVTFileDataType *ideInspectedAssignedDataType;
@property(readonly) DVTFilePath *ideInspectedResolvedFilePath;
@property(readonly) BOOL ideInspectedShowsFileTypePopUp;
@property(readonly) BOOL ideInspectedIsNameEditable;
@property(readonly, copy) NSString *idePendingInspectedName;
@property(copy) NSString *ideInspectedName;
- (id)applicableInspectorSlicesForCategory:(id)arg1 suggestedSlices:(id)arg2;
- (id)filterMenuWhitelistIdentifiers;
- (id)contextualMenuWhitelistIdentifiers;
- (id)fileNewMenuWhitelistIdentifiers;
@property(nonatomic, readonly) NSString *navigableItem_groupIdentifier;
@property(nonatomic, readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(nonatomic, readonly) NSURL *navigableItem_representedURL;
@property(nonatomic, readonly) BOOL navigableItem_missingReferencedContentIsImportant;
@property(nonatomic, readonly) BOOL navigableItem_referencedContentExists;
@property(nonatomic, readonly) id navigableItem_parentRepresentedObject;
@property(nonatomic, readonly) NSString *navigableItem_toolTip;
@property(nonatomic, readonly) NSURL *ideInspectedExpectedFilePathURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *navigableItem_accessibilityIdentifier;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) IDEFileReference *navigableItem_fileReference;
@property(readonly, nonatomic) NSNull *navigableItem_filtered;
@property(readonly, nonatomic) NSImage *navigableItem_image;
@property(readonly, nonatomic) BOOL navigableItem_isEnabled;
@property(readonly, nonatomic) BOOL navigableItem_isLeaf;
@property(readonly, nonatomic) BOOL navigableItem_isMajorGroup;
@property(readonly, nonatomic) BOOL navigableItem_isVisible;
@property(readonly, nonatomic) DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSString *navigableItem_subtitle;
@property(readonly) Class superclass;
@end

