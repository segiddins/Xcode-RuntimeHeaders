//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

#import <IDEInterfaceBuilderCocoaIntegration/IBDocumentArchiving-Protocol.h>

@class NSNumber, NSString;

@interface NSTextField (IBNSTextFieldIntegration) <IBDocumentArchiving>
+ (id)keyPathsForValuesAffectingIbInspectedPreferredWidthMode;
+ (id)keyPathsForValuesAffectingIbDefaultImage;
+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)decodePreferredMaxLayoutWidthForUnarchiver:(id)arg1;
- (void)encodePreferredMaxLayoutWidthForArchiver:(id)arg1;
- (void)unarchiveAutomaticTextCompletionEnabled:(id)arg1;
- (void)archiveAutomaticTextCompletionEnabled:(id)arg1;
- (void)unarchiveAllowsCharacterPickerTouchBarItem:(id)arg1;
- (void)archiveAllowsCharacterPickerTouchBarItem:(id)arg1;
- (void)setIbInspectedPreferredWidthMode:(long long)arg1;
- (long long)ibInspectedPreferredWidthMode;
@property(copy) NSNumber *ibExternalPreferredMaxLayoutWidth;
- (void)ibCellDidChangeInspectedLineBreakMode:(id)arg1;
- (void)setIbInspectedLineBreakMode:(long long)arg1;
- (void)ibTextFieldCellDidChangeInspectorLayout:(id)arg1;
- (void)_ibDidChangeTextFieldWrappingMode:(BOOL)arg1;
- (void)ibVerifyPreferredMaxLayoutWidthOnlyForLegacyStaticWrappingTextUsingAutomaticModeInDocument:(id)arg1;
- (void)ibVerifyPreferredMaxLayoutWidthOnlyForMultilineLabelsInDocument:(id)arg1 populateMessages:(id)arg2;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (void)ibPropagatePropertiesToCopyOfReceiver:(id)arg1 forLayoutEngine:(id)arg2;
- (void)_setEffectivePreferredMaxLayoutWidthSettingsOnTextField:(id)arg1;
- (void)ibEnableAutolayoutInDocument:(id)arg1 context:(id)arg2;
@property(readonly) BOOL ibIsWrappingStaticTextLabel;
- (void)ibSetContentCompressionResistancePriorityForTextWrapping;
- (BOOL)ibPrefersToBeSizedToFitAfterEditingTitle;
- (id)ibQualifyingInfoForDefaultLabel;
- (id)ibDefaultImage;
- (BOOL)ibUsesWidgetTypeForTypeNameForDefaultLabel;
- (BOOL)ibIgnoreFixedWidthConstraintsForLocalizationWarnings;
- (BOOL)ibShouldBeProcessedForLocalizationWarnings;
- (void)setIbInspectedControlSize:(unsigned long long)arg1;
- (struct CGSize)ibPreferredSize;
- (struct CGSize)ibMaximumSize;
- (struct CGSize)ibMinimumSize;
- (id)_ibLocalAttributeKeyPaths;
- (id)ibLocalAttributeKeyPaths;
- (BOOL)ibTouchBarPropertiesAreAvailable;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

