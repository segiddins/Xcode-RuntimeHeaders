//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <DevToolsKit/NSAnimationDelegate-Protocol.h>

@class DTFirstResponderDrawingStrategy, DTTypeCompletionHandler, NSArray, NSIndexSet, NSMutableArray, NSMutableSet, NSString, NSViewAnimation;

@interface DTTileView : NSView <NSAnimationDelegate>
{
    void *_reserved;
    void *_reserved2;
    void *_reserved3;
    void *_reserved4;
    void *_reserved5;
    DTTypeCompletionHandler *_typeCompletionHandler;
    id _delegate;
    id _clickedContentObject;
    NSArray *_content;
    NSIndexSet *selectionIndexes;
    struct CGSize _minGridSize;
    struct CGSize _maxGridSize;
    unsigned long long _minGridRows;
    unsigned long long _maxGridRows;
    unsigned long long _minGridColumns;
    unsigned long long _maxGridColumns;
    NSArray *_backgroundColors;
    struct __tileViewanimationContainerFlags {
        unsigned int _selectable:1;
        unsigned int _allowsMultipleSelection:1;
        unsigned int _avoidsEmptySelection:1;
        unsigned int _superviewIsClipView:1;
        unsigned int _gridParametersReadFromPrototype:1;
        unsigned int _showsFirstResponder:1;
        unsigned int _reservedAnimationContainer:26;
    } _animationContainerFlags;
    struct CGSize _targetFrameSize;
    struct CGSize _targetGridSize;
    struct CGSize _targetUnfilledViewSpace;
    unsigned long long _targetNumberOfGridRows;
    unsigned long long _targetNumberOfGridColumns;
    NSMutableArray *_targetItems;
    struct CGSize _appliedFrameSize;
    struct CGSize _appliedGridSize;
    struct CGSize _appliedUnfilledViewSpace;
    unsigned long long _appliedNumberOfGridRows;
    unsigned long long _appliedNumberOfGridColumns;
    NSMutableArray *_appliedItems;
    NSMutableSet *_appliedItemsAsSet;
    NSMutableSet *_appliedRemovedItemsAsSet;
    double _animationDuration;
    NSViewAnimation *_animation;
    NSMutableArray *_hideLayoutItems;
    NSMutableArray *_showLayoutItems;
    DTFirstResponderDrawingStrategy *_firstResponderDrawingStrategy;
    BOOL animates;
}

- (void)rightMouseDown:(id)arg1;
- (void)setClickedContentObject:(id)arg1;
- (id)clickedContentObject;
- (id)_recursiveFindDefaultButtonCell;
- (void)moveWordLeftAndModifySelection:(id)arg1;
- (void)moveWordRightAndModifySelection:(id)arg1;
- (void)moveToEndOfParagraph:(id)arg1;
- (void)moveToBeginningOfParagraph:(id)arg1;
- (void)moveWordLeft:(id)arg1;
- (void)moveWordRight:(id)arg1;
- (void)moveDownAndModifySelection:(id)arg1;
- (void)moveUpAndModifySelection:(id)arg1;
- (void)moveLeftAndModifySelection:(id)arg1;
- (void)moveRightAndModifySelection:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveRight:(id)arg1;
- (unsigned long long)_indexForMoveDown;
- (unsigned long long)_indexForMoveUp;
- (unsigned long long)_indexForMoveLeft;
- (unsigned long long)_indexForMoveRight;
- (unsigned long long)_indexForIncrementMove:(unsigned long long)arg1;
- (unsigned long long)_indexForDecrementMove:(unsigned long long)arg1;
- (void)selectAll:(id)arg1;
- (void)_contentChanged:(BOOL)arg1 regenerate:(BOOL)arg2;
- (void)discardEditing;
- (void)gridGeometryChanged:(BOOL)arg1;
- (void)_animateAtEndOfEvent;
- (void)applyPendingChangesAndFinishAnimating;
- (void)_applyTargetConfiguration:(BOOL)arg1;
- (void)animationDidEnd:(id)arg1;
- (void)_itemRemovalCompleted:(id)arg1;
- (void)_itemAdditionCompleted:(id)arg1;
- (void)_stopAnimationCompletingOperations:(BOOL)arg1;
- (double)_animationDuration;
- (void)_setAnimationDuration:(double)arg1;
- (id)backgroundColors;
- (void)setBackgroundColors:(id)arg1;
- (struct _NSRange)columnCountRange;
- (void)setColumnCountRange:(struct _NSRange)arg1;
- (struct _NSRange)rowCountRange;
- (void)setRowCountRange:(struct _NSRange)arg1;
- (unsigned long long)maxNumberOfColumns;
- (void)setMaxNumberOfColumns:(unsigned long long)arg1;
- (unsigned long long)maxNumberOfRows;
- (void)setMaxNumberOfRows:(unsigned long long)arg1;
- (struct CGSize)maxGridSize;
- (void)setMaxGridSize:(struct CGSize)arg1;
- (struct CGSize)minGridSize;
- (void)setMinGridSize:(struct CGSize)arg1;
- (void)setTargetFrameSize:(struct CGSize)arg1;
- (struct CGSize)targetFrameSize;
- (struct CGSize)targetGridSize;
- (struct CGSize)appliedGridSize;
- (id)appliedItems;
- (unsigned long long)targetNumberOfGridColumns;
- (unsigned long long)appliedNumberOfGridColumns;
- (void)_computeTargetItemViewFrameRects;
- (struct CGRect)_frameRectForIndexInGrid:(unsigned long long)arg1 gridSize:(struct CGSize)arg2;
- (id)_mutableIndexSetInAppliedGridForRect:(struct CGRect)arg1;
- (unsigned long long)_indexInAppliedGridForPoint:(struct CGPoint)arg1;
- (void)_getRow:(unsigned long long *)arg1 column:(unsigned long long *)arg2 forPoint:(struct CGPoint)arg3;
- (void)_computeTargetItemsByRegenerating:(BOOL)arg1;
- (void)computeTargetGridGeometry;
- (BOOL)_allowsResizingHorizontally;
- (BOOL)_allowsResizingVertically;
- (void)_scrollSelectionToVisible;
- (void)_scrollToVisibleItemAtIndex:(unsigned long long)arg1;
- (id)newLayoutItemForRepresentedObject:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (BOOL)avoidsEmptySelection;
- (void)setAvoidsEmptySelection:(BOOL)arg1;
- (BOOL)allowsMultipleSelection;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (BOOL)isSelectable;
- (void)setSelectable:(BOOL)arg1;
- (id)_layoutItemForRepresentedObject:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)selectionIndexes;
- (void)setSelectionIndexes:(id)arg1;
- (void)validateSelectionIndexes;
- (void)_selectFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 scrollIndexToVisible:(unsigned long long)arg3;
- (void)_selectIndex:(unsigned long long)arg1 scrollToVisible:(BOOL)arg2;
- (void)_selectionStateChanged:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)needsPanelToBecomeKey;
- (BOOL)showsFirstResponder;
- (void)setShowsFirstResponder:(BOOL)arg1;
- (void)mouseDown:(id)arg1;
- (id)_handleMouseEvent:(id)arg1 numberOfObjects:(unsigned long long)arg2 startingPoint:(struct CGPoint)arg3 commandKey:(BOOL)arg4 shiftKey:(BOOL)arg5 rubberband:(id)arg6;
- (struct CGPoint)_pointWithinBounds:(struct CGPoint)arg1;
- (void)keyDown:(id)arg1;
- (void)insertText:(id)arg1;
- (id)typeCompletionHandler:(id)arg1 typeCompletionStringForObject:(id)arg2;
- (void)insertBacktab:(id)arg1;
- (void)insertTab:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)_superviewFrameChanged:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setAnimates:(BOOL)arg1;
- (BOOL)animates;
- (void)dealloc;
- (void)_applySelectionToItems:(id)arg1;
- (void)_applySelectionIndexes:(id)arg1 toItems:(id)arg2;
- (void)_updateContainerReferenceCounterForArraysOfItems:(id)arg1 direction:(BOOL)arg2;
- (void)_updateContainerReferenceCounterForItems:(id)arg1 direction:(BOOL)arg2;
- (void)finalize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

