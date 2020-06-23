//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIView.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIAttributedTextContainer-Protocol.h>

@class IBColor, IBUIFontDescription, NSAttributedString, NSNumber, NSString;

@interface IBUILabel : IBUIView <IBDocumentArchiving, IBUIAttributedTextContainer>
{
    BOOL _usesAttributedText;
    BOOL _adjustsLetterSpacingToFitWidth;
    BOOL _adjustsFontForContentSizeCategory;
    BOOL _adjustsFontSizeToFitWidth;
    BOOL _enabled;
    BOOL _highlighted;
    BOOL _enablesMarqueeWhenAncestorFocused;
    int _baselineAdjustment;
    int _lineBreakMode;
    NSAttributedString *_attributedText;
    IBUIFontDescription *_fontDescription;
    NSString *_text;
    long long _textAlignment;
    IBColor *_textColor;
    IBColor *_highlightedColor;
    IBColor *_shadowColor;
    double _minimumFontSize;
    double _minimumScaleFactor;
    long long _numberOfLines;
    NSNumber *_preferredMaxLayoutWidth;
    struct CGSize _shadowOffset;
}

+ (void)registerMarshallingRecordHandlers;
+ (id)keyPathsForValuesAffectingAutoshrinkMode;
+ (BOOL)ibSupportsCocoaTouchAccessibility;
+ (id)keyPathsForValuesAffectingIbInspectedAttributedText;
+ (id)keyPathsForValuesAffectingIbInspectedText;
+ (id)keyPathsForValuesAffectingIbInspectedUsesAttributedText;
+ (id)keyPathsForValuesAffectingIbInspectedMinimumFontSize;
+ (id)keyPathsForValuesAffectingIbInspectedAdjustsLetterSpacingToFitWidth;
+ (id)keyPathsForValuesAffectingIbInspectedLineBreakMode;
+ (id)keyPathsForValuesAffectingIbInspectedAutoshrinkMode;
+ (long long)ibInstantiationSizeBehavior;
+ (id)keyPathsForValuesAffectingIbPlainTextContent;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
@property(nonatomic) BOOL enablesMarqueeWhenAncestorFocused; // @synthesize enablesMarqueeWhenAncestorFocused=_enablesMarqueeWhenAncestorFocused;
@property(nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) BOOL adjustsFontSizeToFitWidth; // @synthesize adjustsFontSizeToFitWidth=_adjustsFontSizeToFitWidth;
@property(nonatomic) BOOL adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
@property(nonatomic) BOOL adjustsLetterSpacingToFitWidth; // @synthesize adjustsLetterSpacingToFitWidth=_adjustsLetterSpacingToFitWidth;
@property(nonatomic) int lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(nonatomic) int baselineAdjustment; // @synthesize baselineAdjustment=_baselineAdjustment;
@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(nonatomic) double minimumScaleFactor; // @synthesize minimumScaleFactor=_minimumScaleFactor;
@property(nonatomic) double minimumFontSize; // @synthesize minimumFontSize=_minimumFontSize;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(copy, nonatomic) IBColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(copy, nonatomic) IBColor *highlightedColor; // @synthesize highlightedColor=_highlightedColor;
@property(nonatomic) BOOL usesAttributedText; // @synthesize usesAttributedText=_usesAttributedText;
@property(copy, nonatomic) IBColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (void)unarchiveTextColor:(id)arg1;
- (void)archiveTextColor:(id)arg1;
- (void)unarchiveFont:(id)arg1;
- (void)archiveFont:(id)arg1;
- (void)decodePreferredMaxLayoutWidthForUnarchiver:(id)arg1;
- (void)encodePreferredMaxLayoutWidthForArchiver:(id)arg1;
- (void)decodePreferredMaxLayoutWidthForCoder:(id)arg1;
- (void)encodePreferredMaxLayoutWidthForCoder:(id)arg1;
- (void)decodeAdjustsFontSizeToFitWidthForArchiver:(id)arg1;
- (void)encodeAdjustsFontSizeToFitWidthForArchiver:(id)arg1;
- (void)decodeAdjustsFontSizeToFitWidthForCoder:(id)arg1;
- (void)encodeAdjustsFontSizeToFitWidthForCoder:(id)arg1;
- (void)applyDecodedAdjustedFontSizeToFitWidthValue:(id)arg1 forDocument:(id)arg2;
- (id)localExtraMarshalledAttributesKeyPaths;
- (void)unarchiveAttributedText:(id)arg1;
- (void)archiveAttributedText:(id)arg1;
- (void)decodeAttributedText:(id)arg1;
- (void)encodeAttributedText:(id)arg1;
- (void)decodeFont:(id)arg1;
- (void)encodeFont:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) long long autoshrinkMode;
@property(readonly, nonatomic, getter=isMultiline) BOOL multiline;
@property(copy, nonatomic) IBUIFontDescription *fontDescription; // @synthesize fontDescription=_fontDescription;
@property(readonly) IBUIFontDescription *defaultFontDescription;
- (id)initWithFrame:(struct CGRect)arg1 targetRuntime:(id)arg2;
- (unsigned long long)ibDefaultAccessibilityTraits;
- (BOOL)ibIsAccessibilityElementByDefault;
- (id)ibInspectedAttributedText;
- (void)setIbInspectedAttributedText:(id)arg1;
- (void)setIbInspectedText:(id)arg1;
- (id)ibInspectedText;
- (BOOL)ibInspectedUsesAttributedText;
- (void)ibTakeValue:(id)arg1 forInspectedConfigurableProperty:(id)arg2 inConfiguration:(id)arg3;
- (id)ibCompiledValueForKeyPath:(id)arg1 withPropertyStorage:(id)arg2 inConfiguration:(id)arg3 context:(id)arg4;
- (id)ibValueForInspectedConfigurableProperty:(id)arg1 inConfiguration:(id)arg2;
- (long long)ibPreferredResizeDirectionMask;
- (id)ibInspectedDefaultPreferredMaxLayoutWidth;
- (double)ibInspectedMinimumFontSize;
- (void)setIbInspectedMinimumFontSize:(double)arg1;
- (void)setIbInspectedAdjustsLetterSpacingToFitWidth:(BOOL)arg1;
- (BOOL)ibInspectedAdjustsLetterSpacingToFitWidth;
- (void)setIbInspectedLineBreakMode:(int)arg1;
- (int)ibInspectedLineBreakMode;
- (long long)ibInspectedAutoshrinkMode;
- (void)setIbInspectedAutoshrinkMode:(long long)arg1;
- (void)ibWillTakeAttributedTextValue:(id)arg1;
- (void)setIbInspectedUsesAttributedText:(BOOL)arg1;
- (void)ibPrepareToEnterStateExclusiveToAutoShrinking;
- (void)ibPrepareToEnableAutoShrinking;
- (CDUnknownBlockType)ibInspectedAttributedTextFilter;
- (id)ibUnarchiveValueForAttribute:(id)arg1 inConfiguration:(id)arg2 withDocumentUnarchiver:(id)arg3;
- (void)ibArchiveEvaluatedValue:(id)arg1 forAttribute:(id)arg2 inConfiguration:(id)arg3 withDocumentArchiver:(id)arg4;
- (id)ibLocalPerConfigurationAttributeKeyPaths;
- (id)ibFontFromFontDescription;
- (id)ibDefaultFontKeyPath;
- (void)ibCustomizeForInsertionIntoIBUITableViewCell:(id)arg1 withObjects:(id)arg2 andInsertionContext:(id)arg3;
- (void)ibCustomizeForInsertionIntoIBUIView:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)ibFieldEditorConfigurationForTextKeyPath:(id)arg1;
- (struct CGRect)ibInlineTextEditingRectForKeyPath:(id)arg1;
- (id)ibTextKeyPathForDefaultInlineStringEditing;
- (id)ibPlainTextContent;
- (id)ibQualifyingInfoForDefaultLabel;
- (BOOL)ibIgnoreFixedWidthConstraintsForLocalizationWarnings;
- (BOOL)ibShouldBeProcessedForLocalizationWarnings;
- (BOOL)ibWantsBoundsIndicatorDuringTracking;
- (id)ibWidgetType;
- (id)ibInitialConnectionLabelSearchTerm;
- (Class)ibEditorClass;
- (id)ibDocumentationSymbolInfosForKeyPath:(id)arg1;
- (CDUnknownBlockType)ibAutoShrinkingTextAttributeFilter;
- (CDUnknownBlockType)ibTextAttributeFilterForAutoShrinkMode:(long long)arg1 letterSpacing:(BOOL)arg2;
- (id)ibLocalLocalizableStringsAttributeKeyPaths;
- (id)ibLocalLocalizableGeometryAttributeKeyPaths;
- (BOOL)ibShowEnablesMarqueeWhenAncestorFocused;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

