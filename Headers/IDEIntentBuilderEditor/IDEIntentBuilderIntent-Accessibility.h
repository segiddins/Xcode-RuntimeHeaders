//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEIntentBuilderCore/IDEIntentBuilderIntent.h>

#import <IDEIntentBuilderEditor/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, NSArray, NSImage, NSNull, NSString, NSURL, NSUUID, _TtC13DVTFoundation9DVTSymbol;

@interface IDEIntentBuilderIntent (Accessibility) <IDEKeyDrivenNavigableItemRepresentedObject>
+ (id)keyPathsForValuesAffectingAccessibilityLabel;
+ (id)keyPathsForValuesAffectingSelectedKeyParameters;
+ (id)keyPathsForValuesAffectingInputComponentValues;
+ (id)keyPathsForValuesAffectingSelectedInputs;
+ (id)keyPathsForValuesAffectingEligibleForSuggestions;
+ (id)keyPathsForValuesAffectingSelectedCategories;
+ (id)keyPathsForValuesAffectingPrimaryParameterCombinationAsIdentifier;
+ (id)keyPathsForValuesAffectingUnmanagedParameterCombinationsAsIdentifier;
+ (id)keyPathsForValuesAffectingUnmanagedParameterCombinationsAsString;
+ (id)keyPathsForValuesAffectingHasDuplicateUnmanagedParameterCombinations;
+ (id)keyPathsForValuesAffectingNavigableItem_childRepresentedObjects;
+ (id)pluralPropertyDisplayName;
+ (id)singularPropertyDisplayName;
+ (id)keyPathsForValuesAffectingAllowsCategorySelection;
+ (id)keyPathsForValuesAffectingIneligibleForSuggestionsEnabled;
+ (id)keyPathsForValuesAffectingUserConfirmationRequiredEnabled;
+ (id)keyPathsForValuesAffectingPossibleRestrictionNames;
+ (id)keyPathsForValuesAffectingPossibleRestrictions;
+ (id)keyPathsForValuesAffectingCanAddParameterCombinations;
+ (id)keyPathsForValuesAffectingCanAddResolvableParameters;
+ (id)keyPathsForValuesAffectingResolvedParameters;
+ (id)keyPathsForValuesAffectingUnresolvedParameters;
+ (id)keyPathsForValuesAffectingAllowsInputSelection;
- (id)accessibilityLabel;
- (void)setSelectedKeyParameters:(id)arg1;
- (id)selectedKeyParameters;
- (id)inputComponentValues;
- (void)setSelectedInputs:(id)arg1;
- (id)selectedInputs;
@property(nonatomic, getter=isEligibleForSuggestions) BOOL eligibleForSuggestions;
- (void)setSelectedCategories:(id)arg1;
- (id)selectedCategories;
- (id)ideModelObjectTypeIdentifier;
@property(retain, nonatomic) NSUUID *primaryParameterCombinationAsIdentifier;
@property(readonly, copy, nonatomic) NSArray *unmanagedParameterCombinationsAsIdentifier;
@property(readonly, copy, nonatomic) NSArray *unmanagedParameterCombinationsAsString;
@property(readonly, nonatomic) BOOL hasDuplicateUnmanagedParameterCombinations;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) BOOL navigableItem_isLeaf;
- (void)prepareToPasteFromPasteboard;
- (BOOL)canCopy;
- (id)generatedClassName;
- (id)originalGeneratedClassName;
@property(readonly, nonatomic) BOOL allowsCategorySelection;
@property(readonly, nonatomic, getter=isIneligibleForSuggestionsEnabled) BOOL ineligibleForSuggestionsEnabled;
@property(readonly, nonatomic, getter=isUserConfirmationRequiredEnabled) BOOL userConfirmationRequiredEnabled;
@property(readonly, nonatomic) NSArray *possibleRestrictionNames;
@property(readonly, nonatomic) NSArray *possibleRestrictions;
@property(readonly, nonatomic) BOOL canEditSystemAttributes;
@property(readonly, nonatomic) BOOL canAddParameterCombinations;
@property(readonly, nonatomic) BOOL canAddResolvableParameters;
@property(readonly, nonatomic) NSArray *resolvedParameters;
@property(readonly, nonatomic) NSArray *unresolvedParameters;
- (void)updateOriginalGeneratedClassName;
@property(readonly, nonatomic) BOOL allowsKeyParameterSelection;
@property(readonly, nonatomic) BOOL allowsInputSelection;
- (BOOL)isSelectableWhenInserted;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *navigableItem_accessibilityIdentifier;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) IDEFileReference *navigableItem_fileReference;
@property(readonly, nonatomic) NSNull *navigableItem_filtered;
@property(readonly, nonatomic) NSString *navigableItem_groupIdentifier;
@property(readonly, nonatomic) NSImage *navigableItem_image;
@property(readonly, nonatomic) BOOL navigableItem_isEnabled;
@property(readonly, nonatomic) BOOL navigableItem_isMajorGroup;
@property(readonly, nonatomic) BOOL navigableItem_isVisible;
@property(readonly, nonatomic) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly, nonatomic) NSString *navigableItem_name;
@property(readonly, nonatomic) id navigableItem_parentRepresentedObject;
@property(readonly, nonatomic) BOOL navigableItem_referencedContentExists;
@property(readonly, nonatomic) _TtC13DVTFoundation9DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) NSString *navigableItem_subtitle;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@end
