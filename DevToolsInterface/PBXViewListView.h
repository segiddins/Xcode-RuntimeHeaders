//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSButtonCell, NSColor, NSHashTable, NSImage;

@interface PBXViewListView : NSView
{
    NSButtonCell *_headerCell;
    double _headingHeight;
    double _subviewLeftMargin;
    double _gutterThickness;
    NSHashTable *_expandedSubviews;
    id _delegate;
    NSColor *_backgroundColor;
    NSColor *_alternateBackgroundColor;
    struct {
        unsigned int allowsSubviewSelection:1;
        unsigned int ignoreSubviewFrameChanges:1;
        unsigned int delegateWantsShouldSelectSubview:1;
        unsigned int delegateWantsShouldMoveSubview:1;
        unsigned int delegateWantsDeleteSubviews:1;
        unsigned int delegateWantsMoveSubview:1;
        unsigned int delegateWantsBackgroundColor:1;
        unsigned int delegateWantsAlternateBackgroundColor:1;
        unsigned int isDeallocating:1;
        unsigned int ignoreSubviewAdditionAndRemoval:1;
        unsigned int drawsHeaderBackground:1;
        unsigned int drawsBackground:1;
        unsigned int drawsStripes:1;
        unsigned int logsSubviewLayout:1;
        unsigned int RESERVED:19;
    } _vlvFlags;
    unsigned long long _disableSubviewLayout;
    unsigned long long _needsSubviewLayoutFromIndex;
    unsigned long long _selectedSubviewIndex;
    SEL _viewRepresentedObjectSelector;
    SEL _viewRepresentedObjectHeadingStringSelector;
    NSView *_subviewBeingMousetracked;
    unsigned long long _draggedSubviewIndex;
    double _draggedDistance;
    NSImage *_dragCacheImage;
    struct CGPoint _dragCachePoint;
}

+ (void)initialize;
- (void)setLogsSubviewLayout:(BOOL)arg1;
- (void)setExpandedSubviewsFromArrayOfIndices:(id)arg1;
- (id)indicesOfExpandedSubviews;
- (void)delete:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_reorderSubviewAtIndex:(unsigned long long)arg1 withEvent:(id)arg2;
- (id)_nextEventAfterMovementThreshold:(double)arg1 fromPoint:(struct CGPoint)arg2;
- (unsigned long long)_indexOfSubviewClosestToSubviewAtIndex:(unsigned long long)arg1 whenMoved:(double)arg2;
- (void)resetCursorRects;
- (BOOL)_userCanMoveSubviewAtIndex:(unsigned long long)arg1;
- (BOOL)_userCanSelectSubviewAtIndex:(unsigned long long)arg1;
- (void)_collapseTrackedSubview:(id)arg1;
- (void)_expandTrackedSubview:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)selectSubviewAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfSelectedSubview;
- (void)removeSubviewAtIndex:(unsigned long long)arg1;
- (void)addSubview:(id)arg1;
- (void)insertSubview:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)indexOfSubview:(id)arg1;
- (id)subviewAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSubviews;
- (void)layoutSubviews;
- (void)reenableSubviewLayout;
- (void)disableSubviewLayout;
- (void)setAllowsSubviewSelection:(BOOL)arg1;
- (BOOL)allowsSubviewSelection;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawInsertionBarAtIndex:(unsigned long long)arg1;
- (struct CGRect)insertionBarRectAtIndex:(unsigned long long)arg1;
- (void)drawSelectionBorderOfSubview:(id)arg1 atIndex:(unsigned long long)arg2 inRect:(struct CGRect)arg3;
- (void)drawDragRectOfSubview:(id)arg1 atIndex:(unsigned long long)arg2 inRect:(struct CGRect)arg3;
- (void)drawHeadingOfSubview:(id)arg1 atIndex:(unsigned long long)arg2 inRect:(struct CGRect)arg3;
- (void)collapseSubview:(id)arg1;
- (void)expandSubview:(id)arg1;
- (BOOL)isSubviewExpanded:(id)arg1;
- (BOOL)isOpaque;
- (void)subviewFrameChanged:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)moveSubviewAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)_stopIgnoringSubviewAdditionAndRemoval;
- (void)_startIgnoringSubviewAdditionAndRemoval;
- (struct CGRect)rectOfSubviewAtIndex:(unsigned long long)arg1;
- (struct CGRect)_dragRectOfSubviewAtIndex:(unsigned long long)arg1;
- (double)_locationOfSubviewAtIndex:(unsigned long long)arg1;
- (struct CGRect)_borderRectOfSubviewAtIndex:(unsigned long long)arg1;
- (struct CGRect)_headingRectOfSubviewAtIndex:(unsigned long long)arg1;
- (struct _NSRange)_rangeOfSubviewsFromMinY:(double)arg1 toMaxY:(double)arg2;
- (void)_layoutSubviewsIfNeeded;
- (void)_layoutSubviewsFromIndex:(unsigned long long)arg1;
- (void)_layoutSubviewsFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ignoringSubview:(id)arg3;
- (void)setAlternateBackgroundColor:(id)arg1;
- (id)alternateBackgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (void)setDrawsStripes:(BOOL)arg1;
- (BOOL)drawsStripes;
- (void)setDrawsBackground:(BOOL)arg1;
- (BOOL)drawsBackground;
- (void)setDrawsHeaderBackground:(BOOL)arg1;
- (BOOL)drawsHeaderBackground;
- (void)setGutterThickness:(double)arg1;
- (double)gutterThickness;
- (void)setSubviewLeftMargin:(double)arg1;
- (double)subviewLeftMargin;
- (void)setHeadingHeight:(double)arg1;
- (double)headingHeight;
- (id)_headerCell;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setViewRepresentedObjectHeadingStringSelector:(SEL)arg1;
- (SEL)viewRepresentedObjectHeadingStringSelector;
- (void)setViewRepresentedObjectSelector:(SEL)arg1;
- (SEL)viewRepresentedObjectSelector;
- (BOOL)isFlipped;
- (void)finalize;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

