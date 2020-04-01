//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSButtonCell.h>

@class NSImage;

@interface NSButtonCell (IBNSButtonCellIntegration)
+ (id)keyPathsForValuesAffectingIbInspectedStyle;
+ (id)keyPathsForValuesAffectingIbInspectedBehavior;
+ (id)keyPathsForValuesAffectingIbInspectedKeyEquivalent;
+ (id)keyPathsForValuesAffectingIbInspectedTitle;
+ (id)keyPathsForValuesAffectingIbInspectedFont;
+ (id)keyPathsForValuesAffectingIbInspectedAlternateImage;
+ (id)keyPathsForValuesAffectingIbShadowedAlternateImage;
+ (id)keyPathsForValuesAffectingIbInspectedImage;
+ (id)keyPathsForValuesAffectingIbShadowedImage;
+ (id)keyPathsForValuesAffectingIbInspectedImagePosition;
+ (id)keyPathsForValuesAffectingIbInspectedMaxAcceleratorLevelIsVisible;
+ (id)keyPathsForValuesAffectingIbShadowedBehavior;
+ (id)keyPathsForValuesAffectingIbShadowedStyle;
- (void)setIbInspectedStyle:(long long)arg1;
- (long long)ibInspectedStyle;
- (void)setIbInspectedBehavior:(long long)arg1;
- (long long)ibInspectedBehavior;
- (id)ibSuggestedKeyEquivalentForUpdatingTitleTo:(id)arg1;
- (id)ibTitlesToTypicalKeyEquivalents;
- (void)setIbInspectedKeyEquivalent:(id)arg1;
- (id)ibInspectedKeyEquivalent;
- (void)setIbInspectedTitle:(id)arg1;
- (id)ibInspectedTitle;
- (void)setIbInspectedFont:(id)arg1;
- (id)ibInspectedFont;
@property long long ibShadowedInset;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (id)ibOrderedSnapshotAttributesKeyPaths;
- (Class)ibEditorClass;
- (id)ibInitialConnectionLabelSearchTerm;
- (id)ibQualifyingInfoForDefaultLabel;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (unsigned long long)ibPreferredMatrixMode;
- (Class)ibPreferredControlClass;
- (struct CGSize)ibPreferredSizeForSize:(struct CGSize)arg1;
- (id)ibPreferredSizeForSize:(struct CGSize)arg1 suggestedWidth:(char *)arg2 suggestedHeight:(char *)arg3 scaleAxesIndependently:(char *)arg4;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (BOOL)ibWantsBoundsIndicatorDuringTracking;
- (BOOL)ibIsBaselineAtIndex:(long long)arg1 inMotionWithKnob:(CDUnion_42e99c75)arg2;
- (id)ibBaselineCount;
- (id)ibWidgetType;
- (void)setIbInspectedAlternateImage:(id)arg1;
- (id)ibInspectedAlternateImage;
@property(retain) NSImage *ibShadowedAlternateImage;
- (void)setIbInspectedImage:(id)arg1;
- (id)ibInspectedImage;
@property(retain) NSImage *ibShadowedImage;
- (void)setIbInspectedImagePosition:(unsigned long long)arg1;
- (unsigned long long)ibInspectedImagePosition;
@property unsigned long long ibShadowedImagePosition;
- (BOOL)ibIsInNSButton;
- (unsigned long long)ibInspectedMaxAcceleratorLevelMinimumValue;
- (unsigned long long)ibInspectedMaxAcceleratorLevelMaximumValue;
- (BOOL)ibInspectedMaxAcceleratorLevelIsVisible;
@property long long ibShadowedBehavior;
- (id)ibDefaultFontForCurrentConfiguration;
- (BOOL)ibSwizzledIsAnimatingDefaultCell;
@property long long ibShadowedStyle;
- (id)ibDocumentationSymbolInfosForKeyPath:(id)arg1;
- (void)ibAwakeInDocument:(id)arg1;
- (id)ibLocalLocalizableStringsAttributeKeyPaths;
- (id)ibLocalAdditionalLocalizableAttributeKeyPaths;
- (id)ibButtonLocalLocalizableStringsAttributeKeyPaths;
- (id)ibLocalAttributeKeyPaths;
- (id)ibButtonLocalAttributesKeyPaths;
@end

