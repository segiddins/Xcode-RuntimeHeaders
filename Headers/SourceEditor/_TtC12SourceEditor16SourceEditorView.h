//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

#import <SourceEditor/NSServicesMenuRequestor-Protocol.h>

@class MISSING_TYPE, NSString, SourceEditorScrollView, _TtC12SourceEditor23SourceEditorContentView;

@interface _TtC12SourceEditor16SourceEditorView : NSView <NSServicesMenuRequestor>
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *contentViewOffset;
    MISSING_TYPE *layoutManager;
    MISSING_TYPE *contentView;
    MISSING_TYPE *editAssistant;
    MISSING_TYPE *foldingController;
    MISSING_TYPE *placeholderVisualization;
    MISSING_TYPE *dataSource;
    MISSING_TYPE *boundsChangeObserver;
    MISSING_TYPE *frameChangeObserver;
    MISSING_TYPE *undoObserver;
    MISSING_TYPE *redoObserver;
    MISSING_TYPE *$__lazy_storage_$_commandInterface;
    MISSING_TYPE *pasteboard;
    MISSING_TYPE *contentViewWidthConstraint;
    MISSING_TYPE *contentViewWidthLimitConstraint;
    MISSING_TYPE *contentViewHeightConstraint;
    MISSING_TYPE *scrollView;
    MISSING_TYPE *defaultScrollViewContentInsets;
    MISSING_TYPE *additionalScrollViewContentInsets;
    MISSING_TYPE *overscroll;
    MISSING_TYPE *structuredEditingController;
    MISSING_TYPE *trimTrailingWhitespaceController;
    MISSING_TYPE *docCommentEditAssistant;
    MISSING_TYPE *automaticallyAdjustsContentMargins;
    MISSING_TYPE *cursorRectOverrideProviders;
    MISSING_TYPE *lineAnnotationManager;
    MISSING_TYPE *gutter;
    MISSING_TYPE *foldingRibbon;
    MISSING_TYPE *minimap;
    MISSING_TYPE *stylizedDocumentationController;
    MISSING_TYPE *$__lazy_storage_$_markSeparatorController;
    MISSING_TYPE *draggingSource;
    MISSING_TYPE *lineInsertionEffects;
    MISSING_TYPE *dropInsertsANewLine;
    MISSING_TYPE *dropRange;
    MISSING_TYPE *lastDragPoint;
    MISSING_TYPE *lastDragTime;
    MISSING_TYPE *registeredDraggingExtensions;
    MISSING_TYPE *$__lazy_storage_$_textFindableDisplay;
    MISSING_TYPE *$__lazy_storage_$_textFindPanel;
    MISSING_TYPE *textFindPanelDisplayed;
    MISSING_TYPE *findQuery;
    MISSING_TYPE *findResultSelectionShouldWrap;
    MISSING_TYPE *findResult;
    MISSING_TYPE *findReplaceWith;
    MISSING_TYPE *findResultNeedUpdate;
    MISSING_TYPE *findPasteboard;
    MISSING_TYPE *$__lazy_storage_$_spellChecker;
    MISSING_TYPE *$__lazy_storage_$_selectedSymbolHighlight;
    MISSING_TYPE *lineHighlightLayoutVisualization;
    MISSING_TYPE *$__lazy_storage_$_delimiterHighlight;
    MISSING_TYPE *coverageLayoutVisualization;
    MISSING_TYPE *isEditingEnabled;
    MISSING_TYPE *$__lazy_storage_$_selectionController;
    MISSING_TYPE *selectionObservers;
    MISSING_TYPE *selectionDisplay;
    MISSING_TYPE *selection;
    MISSING_TYPE *oldSubstitutionView;
    MISSING_TYPE *$__lazy_storage_$_calloutVisualization;
    MISSING_TYPE *markedEditTransaction;
    MISSING_TYPE *markedStyle;
    MISSING_TYPE *asyncContinuations;
    MISSING_TYPE *postLayoutContinuations;
    MISSING_TYPE *emacsMarkedSourceRange;
    MISSING_TYPE *continueKillRing;
    MISSING_TYPE *deferredScrollState;
    MISSING_TYPE *contextualMenuEventConsumer;
    MISSING_TYPE *contextualMenuItemProvider;
    MISSING_TYPE *structuredSelectionDelegate;
    MISSING_TYPE *eventConsumers;
    MISSING_TYPE *editing;
    MISSING_TYPE *updateContentSizeDuringLiveResize;
    MISSING_TYPE *isInLiveResize;
    MISSING_TYPE *contentSizeIsValid;
    MISSING_TYPE *contentSize;
}

- (void).cxx_destruct;
@property(nonatomic, readonly) NSString *description;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (void)performTextFinderAction:(id)arg1;
- (void)performFindPanelAction:(id)arg1;
- (void)registerForDraggedTypes:(id)arg1;
- (void)unregisterDraggedTypes;
@property(nonatomic, readonly) BOOL isDragging;
- (void)resetCursorRects;
@property(nonatomic, readonly) SourceEditorScrollView *scrollView; // @synthesize scrollView;
- (BOOL)_wantsKeyDownForEvent:(id)arg1;
- (void)updateSelectionManagerIsActive;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
@property(nonatomic, readonly) BOOL acceptsFirstResponder;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (id *)performSelector:(SEL)arg1 withObject:(id)arg2;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)viewDidMoveToWindow;
- (BOOL)isFlipped;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, readonly) _TtC12SourceEditor23SourceEditorContentView *contentView; // @synthesize contentView;

// Remaining properties
@property(nonatomic, readonly) BOOL flipped;

@end
