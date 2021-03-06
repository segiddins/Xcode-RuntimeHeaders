//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIControl.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIAttributedTextContainer-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUITextInputTraits-Protocol.h>

@class IBColor, IBUIFontDescription, IBUITextInputTraits, NSAttributedString, NSImage, NSString;

@interface IBUITextField : IBUIControl <IBDocumentArchiving, IBUIAttributedTextContainer, IBUITextInputTraits>
{
    BOOL _usesAttributedText;
    BOOL _clearsOnBeginEditing;
    BOOL _adjustsFontForContentSizeCategory;
    BOOL _adjustsFontSizeToFitWidth;
    BOOL _allowsEditingTextAttributes;
    int _borderStyle;
    int _clearButtonMode;
    NSAttributedString *_attributedText;
    IBUIFontDescription *_fontDescription;
    NSString *_text;
    long long _textAlignment;
    IBColor *_textColor;
    IBUITextInputTraits *_textInputTraits;
    NSString *_placeholder;
    double _minimumFontSize;
    NSImage *_background;
    NSImage *_disabledBackground;
}

+ (void)registerMarshallingRecordHandlers;
+ (BOOL)ibSupportsCocoaTouchAccessibility;
+ (id)keyPathsForValuesAffectingIbInspectedAttributedText;
+ (id)keyPathsForValuesAffectingIbInspectedText;
+ (id)keyPathsForValuesAffectingIbInspectedUsesAttributedText;
+ (void)ibDidInstantiateView:(id)arg1 forAsset:(id)arg2 role:(long long)arg3;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
- (void).cxx_destruct;
@property(nonatomic) int clearButtonMode; // @synthesize clearButtonMode=_clearButtonMode;
@property(retain, nonatomic) NSImage *disabledBackground; // @synthesize disabledBackground=_disabledBackground;
@property(retain, nonatomic) NSImage *background; // @synthesize background=_background;
@property(nonatomic) double minimumFontSize; // @synthesize minimumFontSize=_minimumFontSize;
@property(nonatomic) BOOL allowsEditingTextAttributes; // @synthesize allowsEditingTextAttributes=_allowsEditingTextAttributes;
@property(nonatomic) BOOL adjustsFontSizeToFitWidth; // @synthesize adjustsFontSizeToFitWidth=_adjustsFontSizeToFitWidth;
@property(nonatomic) BOOL adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
@property(nonatomic) BOOL clearsOnBeginEditing; // @synthesize clearsOnBeginEditing=_clearsOnBeginEditing;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) int borderStyle; // @synthesize borderStyle=_borderStyle;
@property(nonatomic) BOOL usesAttributedText; // @synthesize usesAttributedText=_usesAttributedText;
@property(copy, nonatomic) IBColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (void)unarchiveTextColor:(id)arg1;
- (void)archiveTextColor:(id)arg1;
- (void)unarchiveFont:(id)arg1;
- (void)archiveFont:(id)arg1;
- (void)unarchiveAttributedText:(id)arg1;
- (void)archiveAttributedText:(id)arg1;
- (void)decodeAttributedText:(id)arg1;
- (void)encodeAttributedText:(id)arg1;
- (void)decodeFont:(id)arg1;
- (void)encodeFont:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localExtraMarshalledAttributesKeyPaths;
@property(retain, nonatomic) IBUITextInputTraits *textInputTraits; // @synthesize textInputTraits=_textInputTraits;
@property(copy, nonatomic) IBUIFontDescription *fontDescription; // @synthesize fontDescription=_fontDescription;
@property(readonly) IBUIFontDescription *defaultFontDescription;
- (id)ibDocumentationProtocolNames;
- (unsigned long long)ibDefaultAccessibilityTraits;
- (BOOL)ibIsAccessibilityElementByDefault;
- (id)ibInspectedAttributedText;
- (void)setIbInspectedAttributedText:(id)arg1;
- (void)setIbInspectedText:(id)arg1;
- (id)ibInspectedText;
- (BOOL)ibInspectedUsesAttributedText;
- (void)setIbInspectedUsesAttributedText:(BOOL)arg1;
- (void)ibTakeValue:(id)arg1 forInspectedConfigurableProperty:(id)arg2 inConfiguration:(id)arg3;
- (id)ibCompiledValueForKeyPath:(id)arg1 withPropertyStorage:(id)arg2 inConfiguration:(id)arg3 context:(id)arg4;
- (id)ibValueForInspectedConfigurableProperty:(id)arg1 inConfiguration:(id)arg2;
- (id)ibUnarchiveValueForAttribute:(id)arg1 inConfiguration:(id)arg2 withDocumentUnarchiver:(id)arg3;
- (void)ibArchiveEvaluatedValue:(id)arg1 forAttribute:(id)arg2 inConfiguration:(id)arg3 withDocumentArchiver:(id)arg4;
- (id)ibLocalPerConfigurationAttributeKeyPaths;
- (unsigned long long)ibOrientationsForSizingToFitFromLibrary;
- (id)ibFontFromFontDescription;
- (id)ibDefaultFontKeyPath;
- (long long)ibPreferredResizeDirectionMask;
- (id)ibQualifyingInfoForDefaultLabel;
- (id)ibFieldEditorConfigurationForTextKeyPath:(id)arg1;
- (BOOL)ibPrefersToBeSizedToFitAfterEditingTitle;
- (struct CGRect)ibInlineTextEditingRectForKeyPath:(id)arg1;
- (id)ibTextKeyPathForDefaultInlineStringEditing;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (id)ibWidgetType;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (unsigned long long)ibPreferredActionEventType;
- (Class)ibEditorClass;
- (BOOL)ibShouldBeProcessedForLocalizationWarnings;
- (CDUnknownBlockType)ibInspectedAttributedTextFilter;
- (id)ibLocalLocalizableStringsAttributeKeyPaths;
- (id)ibLocalLocalizableGeometryAttributeKeyPaths;
- (id)ibLocalAdditionalLocalizableAttributeKeyPaths;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

