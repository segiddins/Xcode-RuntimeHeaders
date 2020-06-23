//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTUserInterfaceKit/DVTPreferenceSet-Protocol.h>

@class DVTCustomDataSpecifier, DVTStackBacktrace, NSColor, NSFont, NSImage, NSMutableDictionary, NSPointerArray, NSString, NSURL;

@interface DVTFontAndColorTheme : NSObject <DVTPreferenceSet>
{
    NSString *_name;
    NSImage *_image;
    NSURL *_dataURL;
    DVTCustomDataSpecifier *_customDataSpecifier;
    BOOL _needsPostSettingsChangedNotification;
    long long _disablePostSettingsChangedNotificationCount;
    NSColor *_sourceTextBackgroundColor;
    NSColor *_sourceTextSidebarBackgroundColor;
    NSColor *_sourceTextSidebarEdgeColor;
    NSFont *_sourceTextSidebarNumbersFont;
    NSColor *_sourceTextSidebarNumbersColor;
    NSColor *_sourceTextSidebarHighlightedNumbersColor;
    NSColor *_sourceTextFoldbarBackgroundColor;
    NSColor *_sourceTextSelectionColor;
    NSColor *_sourceTextSecondarySelectionColor;
    NSColor *_sourceTextInsertionPointColor;
    NSColor *_sourceTextCurrentLineHighlightColor;
    NSColor *_sourceTextInvisiblesColor;
    NSColor *_sourceTextBlockDimBackgroundColor;
    NSColor *_scrollbarMarkerErrorColor;
    NSColor *_scrollbarMarkerWarningColor;
    NSColor *_scrollbarMarkerAnalyzerColor;
    NSColor *_scrollbarMarkerRuntimeIssueColor;
    NSColor *_scrollbarMarkerBreakpointColor;
    NSColor *_scrollbarMarkerDiffColor;
    NSColor *_scrollbarMarkerDiffConflictColor;
    NSColor *_sourceTextTokenizedBorderColor;
    NSColor *_sourceTextTokenizedBackgroundColor;
    NSColor *_sourceTextTokenizedBorderSelectedColor;
    NSColor *_sourceTextTokenizedBackgroundSelectedColor;
    NSColor *_markupTextBackgroundColor;
    NSColor *_markupTextBorderColor;
    NSColor *_markupTextNormalColor;
    NSColor *_markupTextStrongColor;
    NSColor *_markupTextEmphasisColor;
    NSColor *_markupTextPrimaryHeadingColor;
    NSColor *_markupTextSecondaryHeadingColor;
    NSColor *_markupTextOtherHeadingColor;
    NSColor *_markupTextInlineCodeColor;
    NSColor *_markupTextLinkColor;
    NSFont *_markupTextNormalFont;
    NSFont *_markupTextStrongFont;
    NSFont *_markupTextEmphasisFont;
    NSFont *_markupTextPrimaryHeadingFont;
    NSFont *_markupTextSecondaryHeadingFont;
    NSFont *_markupTextOtherHeadingFont;
    NSFont *_markupTextLinkFont;
    NSFont *_markupTextCodeFont;
    NSColor *_diffSplitViewBackgroundColor;
    NSColor *_diffSplitViewEdgeColor;
    NSColor *_diffSplitViewFocusedBackgroundColor;
    NSColor *_diffSplitViewFocusedEdgeColor;
    NSColor *_diffButtonBackgroundColor;
    NSColor *_diffButtonEdgeColor;
    NSColor *_diffButtonNumberColor;
    NSColor *_diffButtonResolutionColor;
    NSColor *_diffStandardEdgeColor;
    NSColor *_diffStandardUnfocusedEdgeColor;
    NSColor *_diffStandardSwoopBackgroundColor;
    NSColor *_diffStandardButtonBackgroundColor;
    NSColor *_diffStandardUnfocusedButtonBackgroundColor;
    NSColor *_diffConflictEdgeColor;
    NSColor *_diffConflictUnfocusedEdgeColor;
    NSColor *_diffConflictSwoopBackgroundColor;
    NSColor *_diffConflictButtonBackgroundColor;
    NSColor *_diffConflictUnfocusedButtonBackgroundColor;
    NSColor *_diffDisabledEdgeColor;
    NSColor *_diffDisabledUnfocusedEdgeColor;
    NSColor *_diffDisabledSwoopBackgroundColor;
    NSColor *_diffDisabledButtonBackgroundColor;
    NSColor *_diffDisabledUnfocusedButtonBackgroundColor;
    NSColor *_diffBackgroundEdgeColor;
    NSColor *_diffBackgroundUnfocusedEdgeColor;
    NSColor *_diffBackgroundSwoopBackgroundColor;
    NSColor *_diffBackgroundButtonBackgroundColor;
    NSColor *_consoleTextBackgroundColor;
    NSColor *_consoleTextSelectionColor;
    NSColor *_consoleTextSecondarySelectionColor;
    NSColor *_consoleTextInsertionPointColor;
    NSColor *_consoleDebuggerPromptTextColor;
    NSColor *_consoleDebuggerInputTextColor;
    NSColor *_consoleDebuggerOutputTextColor;
    NSColor *_consoleExecutableInputTextColor;
    NSColor *_consoleExecutableOutputTextColor;
    NSFont *_consoleDebuggerPromptTextFont;
    NSFont *_consoleDebuggerInputTextFont;
    NSFont *_consoleDebuggerOutputTextFont;
    NSFont *_consoleExecutableInputTextFont;
    NSFont *_consoleExecutableOutputTextFont;
    NSColor *_debuggerInstructionPointerColor;
    NSColor *_sourcePlainTextColor;
    NSFont *_sourcePlainTextFont;
    NSPointerArray *_syntaxColorsByNodeType;
    NSPointerArray *_syntaxFontsByNodeType;
    NSMutableDictionary *_markdownNodeToColorDeriverBlock;
    NSMutableDictionary *_markdownNodeToFontDeriverBlock;
    NSColor *_ghostComplementTextColor;
    double _lineSpacing;
    int _cursor;
    BOOL _builtIn;
    BOOL _loadedData;
    BOOL _contentNeedsSaving;
    BOOL _hasMultipleSourceTextFonts;
    long long _version;
    long long _fontSizeModifier;
}

+ (long long)scrollerKnobStyleForBackgroundColor:(id)arg1;
+ (id)_defaultSourceCodeFont;
+ (id)keyPathsForValuesAffectingConsoleTextSecondarySelectionColor;
+ (id)keyPathsForValuesAffectingSourceTextSecondarySelectionColor;
+ (void)recordMessageTracerStatistics;
+ (id)titleForNewPreferenceSetFromTemplate;
+ (id)preferenceSetsListHeader;
+ (id)upgradablePreferenceSetsFileExtensions;
+ (id)preferenceSetsFileExtension;
+ (id)defaultKeyForExcludedBuiltInPreferenceSets;
+ (id)defaultKeyForCurrentPreferenceSet;
+ (id)builtInPreferenceSetsDirectoryURL;
+ (id)systemPreferenceSet;
+ (id)preferenceSetGroupingName;
+ (id)_nodeTypesIncludedInPreferences;
+ (id)_stringRepresentationOfFont:(id)arg1;
+ (id)_preferencesSetNameForKey:(id)arg1 shouldBeLight:(id)arg2;
+ (id)_currentDarkThemeNameRequiringLight:(id)arg1;
+ (id)_currentLightThemeNameRequiringLight:(id)arg1;
+ (id)initialPreferenceSetName;
+ (id)currentDarkTheme;
+ (id)currentLightTheme;
+ (id)currentTheme;
+ (id)_primitivePreferenceSetManager;
+ (id)preferenceSetsManager;
+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) long long fontSizeModifier; // @synthesize fontSizeModifier=_fontSizeModifier;
@property(readonly) BOOL loadedData; // @synthesize loadedData=_loadedData;
@property(readonly) NSPointerArray *syntaxFontsByNodeType; // @synthesize syntaxFontsByNodeType=_syntaxFontsByNodeType;
@property(readonly) NSPointerArray *syntaxColorsByNodeType; // @synthesize syntaxColorsByNodeType=_syntaxColorsByNodeType;
@property(nonatomic) BOOL hasMultipleSourceTextFonts; // @synthesize hasMultipleSourceTextFonts=_hasMultipleSourceTextFonts;
@property BOOL contentNeedsSaving; // @synthesize contentNeedsSaving=_contentNeedsSaving;
@property(retain) DVTCustomDataSpecifier *customDataSpecifier; // @synthesize customDataSpecifier=_customDataSpecifier;
@property(readonly, getter=isBuiltIn) BOOL builtIn; // @synthesize builtIn=_builtIn;
@property(retain) NSImage *image; // @synthesize image=_image;
@property(copy) NSString *name; // @synthesize name=_name;
@property(readonly) long long scrollerKnobStyle;
- (BOOL)hasLightBackground;
- (double)additionalLineHeightForBaseLineHeight:(double)arg1;
- (void)setCursor:(int)arg1;
@property(readonly) int cursor;
- (void)setLineSpacing:(double)arg1;
@property(readonly) double lineSpacing;
- (void)setFont:(id)arg1 forNodeTypes:(id)arg2;
- (void)setColor:(id)arg1 forNodeTypes:(id)arg2;
- (void)_setColorOrFont:(id)arg1 forNodeTypes:(id)arg2;
- (id)fontIfExistsForNodeType:(short)arg1;
- (id)fontForNodeType:(short)arg1;
- (id)colorIfExistsForNodeType:(short)arg1;
- (id)colorForNodeType:(short)arg1;
@property(readonly) NSFont *sourcePlainTextFont;
@property(readonly, copy) NSColor *sourcePlainTextColor;
- (void)setDebuggerInstructionPointerColor:(id)arg1;
- (void)setConsoleExecutableOutputTextFont:(id)arg1;
- (void)setConsoleExecutableInputTextFont:(id)arg1;
- (void)setConsoleDebuggerOutputTextFont:(id)arg1;
- (void)setConsoleDebuggerInputTextFont:(id)arg1;
- (void)setConsoleDebuggerPromptTextFont:(id)arg1;
- (void)setConsoleExecutableOutputTextColor:(id)arg1;
- (void)setConsoleExecutableInputTextColor:(id)arg1;
- (void)setConsoleDebuggerOutputTextColor:(id)arg1;
- (void)setConsoleDebuggerInputTextColor:(id)arg1;
- (void)setConsoleDebuggerPromptTextColor:(id)arg1;
- (void)primitiveSetConsoleDebuggerPromptTextColor:(id)arg1;
- (void)setConsoleTextInsertionPointColor:(id)arg1;
- (void)setConsoleTextSelectionColor:(id)arg1;
- (void)setConsoleTextBackgroundColor:(id)arg1;
- (void)setMarkupTextCodeFont:(id)arg1;
- (void)setMarkupTextLinkFont:(id)arg1;
- (void)setMarkupTextOtherHeadingFont:(id)arg1;
- (void)setMarkupTextSecondaryHeadingFont:(id)arg1;
- (void)setMarkupTextPrimaryHeadingFont:(id)arg1;
- (void)setMarkupTextEmphasisFont:(id)arg1;
- (void)setMarkupTextStrongFont:(id)arg1;
- (void)setMarkupTextNormalFont:(id)arg1;
- (void)setMarkupTextLinkColor:(id)arg1;
- (void)setMarkupTextInlineCodeColor:(id)arg1;
- (void)setMarkupTextOtherHeadingColor:(id)arg1;
- (void)setMarkupTextSecondaryHeadingColor:(id)arg1;
- (void)setMarkupTextPrimaryHeadingColor:(id)arg1;
- (void)setMarkupTextEmphasisColor:(id)arg1;
- (void)setMarkupTextStrongColor:(id)arg1;
- (void)setMarkupTextNormalColor:(id)arg1;
- (void)setMarkupTextBorderColor:(id)arg1;
- (void)setMarkupTextBackgroundColor:(id)arg1;
- (void)setSourceTextInvisiblesColor:(id)arg1;
- (void)setSourceTextCurrentLineHighlightColor:(id)arg1;
- (void)setSourceTextInsertionPointColor:(id)arg1;
- (void)setSourceTextSelectionColor:(id)arg1;
- (void)setSourceTextBackgroundColor:(id)arg1;
- (void)_setColorOrFont:(id)arg1 forKey:(id)arg2 colorOrFontivar:(id *)arg3;
@property(readonly, copy) NSColor *debuggerInstructionPointerColor;
@property(readonly) NSFont *consoleExecutableOutputTextFont;
@property(readonly) NSFont *consoleExecutableInputTextFont;
@property(readonly) NSFont *consoleDebuggerOutputTextFont;
@property(readonly) NSFont *consoleDebuggerInputTextFont;
@property(readonly) NSFont *consoleDebuggerPromptTextFont;
@property(readonly, copy) NSColor *consoleExecutableOutputTextColor;
@property(readonly, copy) NSColor *consoleExecutableInputTextColor;
@property(readonly, copy) NSColor *consoleDebuggerOutputTextColor;
@property(readonly, copy) NSColor *consoleDebuggerInputTextColor;
@property(readonly, copy) NSColor *consoleDebuggerPromptTextColor;
@property(readonly, copy) NSColor *consoleTextInsertionPointColor;
@property(readonly, copy) NSColor *consoleTextSecondarySelectionColor;
@property(readonly, copy) NSColor *consoleTextSelectionColor;
@property(readonly, copy) NSColor *consoleTextBackgroundColor;
@property(readonly) NSColor *diffBackgroundButtonBackgroundColor;
@property(readonly) NSColor *diffBackgroundSwoopBackgroundColor;
- (id)diffBackgroundUnfocusedEdgeColor;
@property(readonly) NSColor *diffBackgroundEdgeColor;
@property(readonly) NSColor *diffDisabledUnfocusedButtonBackgroundColor;
@property(readonly) NSColor *diffDisabledButtonBackgroundColor;
@property(readonly) NSColor *diffDisabledSwoopBackgroundColor;
@property(readonly) NSColor *diffDisabledUnfocusedEdgeColor;
@property(readonly) NSColor *diffDisabledEdgeColor;
@property(readonly) NSColor *diffConflictUnfocusedButtonBackgroundColor;
@property(readonly) NSColor *diffConflictButtonBackgroundColor;
@property(readonly) NSColor *diffConflictSwoopBackgroundColor;
@property(readonly) NSColor *diffConflictUnfocusedEdgeColor;
@property(readonly) NSColor *diffConflictEdgeColor;
@property(readonly) NSColor *diffStandardUnfocusedButtonBackgroundColor;
@property(readonly) NSColor *diffStandardButtonBackgroundColor;
@property(readonly) NSColor *diffStandardSwoopBackgroundColor;
@property(readonly) NSColor *diffStandardUnfocusedEdgeColor;
@property(readonly) NSColor *diffStandardEdgeColor;
@property(readonly) NSColor *diffButtonResolutionColor;
@property(readonly) NSColor *diffButtonNumberColor;
@property(readonly) NSColor *diffButtonEdgeColor;
@property(readonly) NSColor *diffButtonBackgroundColor;
@property(readonly, copy) NSColor *diffSplitViewFocusedEdgeColor;
@property(readonly, copy) NSColor *diffSplitViewFocusedBackgroundColor;
@property(readonly, copy) NSColor *diffSplitViewEdgeColor;
@property(readonly, copy) NSColor *diffSplitViewBackgroundColor;
@property(readonly) NSFont *markupTextCodeFont;
@property(readonly) NSFont *markupTextLinkFont;
@property(readonly) NSFont *markupTextOtherHeadingFont;
@property(readonly) NSFont *markupTextSecondaryHeadingFont;
@property(readonly) NSFont *markupTextPrimaryHeadingFont;
@property(readonly) NSFont *markupTextEmphasisFont;
@property(readonly) NSFont *markupTextStrongFont;
@property(readonly) NSFont *markupTextNormalFont;
@property(readonly, copy) NSColor *markupTextLinkColor;
@property(readonly, copy) NSColor *markupTextInlineCodeColor;
@property(readonly, copy) NSColor *markupTextOtherHeadingColor;
@property(readonly, copy) NSColor *markupTextSecondaryHeadingColor;
@property(readonly, copy) NSColor *markupTextPrimaryHeadingColor;
@property(readonly, copy) NSColor *markupTextEmphasisColor;
@property(readonly, copy) NSColor *markupTextStrongColor;
@property(readonly, copy) NSColor *markupTextNormalColor;
@property(readonly, copy) NSColor *markupTextBorderColor;
@property(readonly, copy) NSColor *markupTextBackgroundColor;
@property(readonly, copy) NSColor *sourceTextTokenizedBackgroundSelectedColor;
@property(readonly, copy) NSColor *sourceTextTokenizedBorderSelectedColor;
@property(readonly, copy) NSColor *sourceTextTokenizedBackgroundColor;
@property(readonly, copy) NSColor *sourceTextTokenizedBorderColor;
@property(readonly, copy) NSColor *sourceTextLinkColor;
@property(readonly, copy) NSColor *ghostComplementTextColor;
@property(readonly) NSColor *scrollbarMarkerDiffConflictColor;
@property(readonly) NSColor *scrollbarMarkerDiffColor;
@property(readonly) NSColor *scrollbarMarkerBreakpointColor;
@property(readonly) NSColor *scrollbarMarkerRuntimeIssueColor;
@property(readonly) NSColor *scrollbarMarkerAnalyzerColor;
@property(readonly) NSColor *scrollbarMarkerWarningColor;
@property(readonly) NSColor *scrollbarMarkerErrorColor;
@property(readonly, copy) NSColor *sourceTextBlockDimBackgroundColor;
@property(readonly, copy) NSColor *sourceTextInvisiblesColor;
@property(readonly, copy) NSColor *sourceTextCurrentLineHighlightColor;
@property(readonly, copy) NSColor *sourceTextInsertionPointColor;
@property(readonly, copy) NSColor *sourceTextSecondarySelectionColor;
@property(readonly, copy) NSColor *sourceTextSelectionColor;
@property(readonly, copy) NSColor *sourceTextFoldbarBackgroundColor;
@property(readonly, copy) NSColor *sourceTextSidebarHighlightedNumbersColor;
@property(readonly, copy) NSColor *sourceTextSidebarNumbersColor;
@property(readonly, copy) NSFont *sourceTextSidebarNumbersFont;
@property(readonly, copy) NSColor *sourceTextSidebarEdgeColor;
@property(readonly, copy) NSColor *sourceTextSidebarBackgroundColor;
@property(readonly, copy) NSColor *sourceTextBackgroundColor;
@property(readonly) long long version;
- (BOOL)canResetFontSize;
- (BOOL)canDecreaseFontSize;
- (BOOL)canIncreaseFontSize;
- (void)resetFontSize;
- (void)decreaseFontSize;
- (void)increaseFontSize;
- (void)postSettingsChangedNotificationIfNeeded;
- (void)postSettingsChangedNotification;
- (void)enablePostSettingsChangedNotification;
- (void)disablePostSettingsChangedNotification;
@property BOOL needsPostSettingsChangedNotification; // @synthesize needsPostSettingsChangedNotification=_needsPostSettingsChangedNotification;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *localizedName;
- (void)_updateHasMultipleSourceTextFonts;
- (void)_updateDerivedColors;
- (void)_updateFontSizesWithDeltaPointSize:(long long)arg1;
- (void)_registerMarkdownNode:(id)arg1 nodeNameForColor:(id)arg2 fontName:(id)arg3 fontMultiplier:(double)arg4;
- (void)_registerDerivedMarkdownNodesAndDeriverBlocks;
- (BOOL)_loadFontsAndColors;
- (id)dataRepresentationWithError:(id *)arg1;
- (void)primitiveInvalidate;
- (id)initWithCustomDataSpecifier:(id)arg1 basePreferenceSet:(id)arg2;
- (id)initWithName:(id)arg1 dataURL:(id)arg2;
- (id)_initWithName:(id)arg1 syntaxColorsByNodeType:(id)arg2 syntaxFontsByNodeType:(id)arg3;
- (void)_themeCommonInit;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
