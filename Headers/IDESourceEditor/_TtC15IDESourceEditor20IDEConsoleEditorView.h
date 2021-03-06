//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESourceEditor/_TtC15IDESourceEditor19IDESourceEditorView.h>

#import <IDESourceEditor/DVTConsoleTextViewProtocol-Protocol.h>
#import <IDESourceEditor/SourceEditorScrollViewScrollerMoved-Protocol.h>

@class MISSING_TYPE;
@protocol IDEConsoleTextViewObjectiveCExpressionRangeDelegate, IDEConsoleTextViewStandardIODelegate;

@interface _TtC15IDESourceEditor20IDEConsoleEditorView : _TtC15IDESourceEditor19IDESourceEditorView <DVTConsoleTextViewProtocol, SourceEditorScrollViewScrollerMoved>
{
    MISSING_TYPE *viewController;
    MISSING_TYPE *$__lazy_storage_$_standardIODelegate;
    MISSING_TYPE *$__lazy_storage_$_openingBracketLocationDelegate;
    MISSING_TYPE *_debuggerPromptTextAttributes;
    MISSING_TYPE *_debuggerInputTextAttributes;
    MISSING_TYPE *_debuggerOutputTextAttributes;
    MISSING_TYPE *_debuggedTargetInputTextAttributes;
    MISSING_TYPE *_debuggedTargetOutputTextAttributes;
    MISSING_TYPE *_IDEDebuggerPromptTextAttribute;
    MISSING_TYPE *_IDEDebuggerInputTextAttribute;
    MISSING_TYPE *_IDEDebuggerOutputTextAttribute;
    MISSING_TYPE *_IDEExecutableInputTextAttribute;
    MISSING_TYPE *_IDEExecutableOutputTextAttribute;
    MISSING_TYPE *_currentConsoleTextAttributes;
    MISSING_TYPE *_insertTextKind;
    MISSING_TYPE *textAttributesArray;
    MISSING_TYPE *_itemsToAppendAfterDelay;
    MISSING_TYPE *_itemsToAppendTimerScheduled;
    MISSING_TYPE *_lastItemTime;
    MISSING_TYPE *_promptString;
    MISSING_TYPE *currentPromptRange;
    MISSING_TYPE *textInsertionPoint;
    MISSING_TYPE *_scrollToBottom;
    MISSING_TYPE *_appendItemsLock;
    MISSING_TYPE *logMode;
    MISSING_TYPE *shouldDisableCloseBracket;
    MISSING_TYPE *scrollToBottomBufferHeight;
    MISSING_TYPE *consoleTextPreferences;
    MISSING_TYPE *autoCompletionToken;
    MISSING_TYPE *tryClosingBracket;
    MISSING_TYPE *_isClearingConsole;
    MISSING_TYPE *_appendInterval;
}

- (void).cxx_destruct;
- (id)contextForCompletionStrategiesAtWordStartLocation:(unsigned long long)arg1;
- (void)setViewController:(id)arg1;
- (void)setCompletionStrategies:(id)arg1;
- (struct _NSRange)rangeForUserTextChange;
- (void)insertNewline:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)repeatInput:(id)arg1;
- (void)appendConsoleItemsImmediatelyWithoutScrolling:(id)arg1;
- (void)appendConsoleItemsAfterDelay:(id)arg1;
- (void)clearConsoleItems;
- (void)scrollToEndOfDocument:(id)arg1;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (void)userDidScroll:(id)arg1;
- (void)scrollViewDidEndLiveScrolling;
- (void)scrollViewDidLiveScrolling;
- (void)scrollViewDidStartLiveScrolling;
- (id)textStorage;
- (void)setSelectedRange:(struct _NSRange)arg1;
- (void)moveToBeginningOfParagraph:(id)arg1;
- (void)moveToBeginningOfLine:(id)arg1;
- (void)moveToBeginningOfText:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)insertText:(id)arg1 replacementRange:(struct _NSRange)arg2;
- (void)themeFontsAndColorsUpdates;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)readSelectionFromPasteboard:(id)arg1;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) int logMode; // @synthesize logMode;
@property(nonatomic, readonly) BOOL shouldSuppressTextCompletion;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, retain) id <IDEConsoleTextViewObjectiveCExpressionRangeDelegate> openingBracketLocationDelegate;
@property(nonatomic, retain) id <IDEConsoleTextViewStandardIODelegate> standardIODelegate;

@end

