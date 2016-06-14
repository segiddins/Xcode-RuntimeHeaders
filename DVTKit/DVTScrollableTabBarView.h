//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTBarBackground.h>

#import <DVTKit/DVTMorphingDragImageDropTarget-Protocol.h>
#import <DVTKit/NSAnimationDelegate-Protocol.h>
#import <DVTKit/NSDraggingDestination-Protocol.h>
#import <DVTKit/NSTabViewDelegate-Protocol.h>

@class CALayer, DVTScrollableTabBarViewAccessoryButton, DVTScrollableTabButton, NSMutableArray, NSScrollView, NSString, NSTrackingArea, NSView, ScrollableTabBarMaskingContainerView;

@interface DVTScrollableTabBarView : DVTBarBackground <NSAnimationDelegate, NSTabViewDelegate, DVTMorphingDragImageDropTarget, NSDraggingDestination>
{
    long long _numberOfGroupUpdates;
    NSTrackingArea *_trackingArea;
    unsigned long long _indexOfTabUnderMouse;
    DVTScrollableTabBarViewAccessoryButton *_createTabButton;
    NSScrollView *_scrollView;
    NSView *_scrollViewDocumentView;
    NSView *_selectedTabContainerView;
    NSView *_tabContainer;
    NSMutableArray *_tabButtons;
    unsigned long long _selectedTabButtonIndex;
    unsigned long long _firstInsertedTabButtonIndex;
    BOOL _selectionIsChanging;
    BOOL _isInteractivelyClosingTabs;
    BOOL _isScrollingToRevealAddedTab;
    BOOL _isReadyToUse;
    DVTScrollableTabButton *_draggedTabButton;
    struct CGPoint _mouseOffsetOnSelectedTab;
    struct CGPoint _mouseLocationForDraggedTab;
    unsigned long long _dragSourceIndex;
    unsigned long long _dropIndex;
    unsigned long long _fallbackSelectedTabButtonIndex;
    BOOL _shouldPreventLayOutWhileMovingButtons;
    BOOL _selectedButtonIsDetached;
    BOOL _isDroppingButton;
    struct CGRect _layoutBounds;
    struct CGRect _firstButtonFrame;
    double _remainingWidthInTabBarAfterDividingEvenlyAmongButtons;
    double _scrollViewContentWidth;
    unsigned long long _numberOfTabsForLayout;
    unsigned long long _stackingRegions;
    BOOL _isStackingButtons;
    double _edgeScrollingFactor;
    double _titleScrollingFactor;
    double _selectedButtonSlowingFactor;
    double _slowingDistance;
    ScrollableTabBarMaskingContainerView *_maskingContainerView;
    CALayer *_topBorderLayer;
    CALayer *_bottomBorderLayer;
    BOOL _isReorderingTabButtons;
}

@property(readonly, nonatomic) BOOL isReorderingTabButtons; // @synthesize isReorderingTabButtons=_isReorderingTabButtons;
- (void).cxx_destruct;
- (void)_layOutBackgroundLayersWithSelectedButtonFrame:(struct CGRect)arg1 startSelectedButtonFrame:(struct CGRect)arg2 animated:(BOOL)arg3;
- (void)_updateBackgroundLayersWithSelectedButtonFrameAnimated:(BOOL)arg1;
- (struct CGRect)_selectedButtonFrameForBackgroundLayersLayoutDuringAnimation:(BOOL)arg1;
- (struct CGRect)_frameOfView:(id)arg1 duringAnimation:(BOOL)arg2;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeNames;
- (unsigned long long)_draggedURLOperationForDraggingInfo:(id)arg1;
- (void)_performTabBarDragOperationForURLs:(id)arg1 droppedAtIndex:(unsigned long long)arg2 honorWindowPolicy:(BOOL)arg3;
- (void)_performTabBarDragOperationForTabViewItem:(id)arg1 URL:(id)arg2;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)wantsPeriodicDraggingUpdates;
- (unsigned long long)_updateDropIndexWithDraggingInfo:(id)arg1;
- (BOOL)morphingDragImage:(id)arg1 performDragOperation:(id)arg2;
- (void)morphingDragImage:(id)arg1 draggingExited:(id)arg2;
- (unsigned long long)morphingDragImage:(id)arg1 draggingUpdated:(id)arg2;
- (unsigned long long)morphingDragImage:(id)arg1 draggingEntered:(id)arg2;
- (BOOL)wantsPeriodicDraggingUpdatesForMorphingDragImage:(id)arg1;
- (void)_detachTabAndPositionUnderCursor:(id)arg1;
- (struct CGPoint)_mouseLocationInDragImageForTabButton:(id)arg1;
- (BOOL)_shouldDetachTabForMouseEvent:(id)arg1;
- (BOOL)_canDetachTab;
- (void)_autoscrollButtonsForStackingRegion:(unsigned long long)arg1;
- (void)_updateDropIndexWithDraggingLocation:(struct CGPoint)arg1;
- (long long)_tabDragResultForEventTrackingWithStartEvent:(id)arg1;
- (long long)_tabDragResultForInitialDragWithStartEvent:(id)arg1;
- (void)_trackReorderingEventsWithStartEvent:(id)arg1 forTabButton:(id)arg2;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_setIndexOfTabUnderMouse:(unsigned long long)arg1 animated:(BOOL)arg2;
- (BOOL)_canShowCloseButton;
- (void)_updateIndexOfTabUnderCurrentMouseLocation:(BOOL)arg1;
- (void)updateTrackingAreas;
- (void)_updateKeyLoop;
- (void)_trackMouseEventsForEvent:(id)arg1 onTabAtIndex:(unsigned long long)arg2;
- (void)_trackMouseEventsForEvent:(id)arg1 inStackingRegion:(unsigned long long)arg2 withTabAtIndex:(unsigned long long)arg3;
- (id)_trackMouseEventsUntilMouseUp:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)otherMouseUp:(id)arg1;
- (void)_animateTabBackgroundOnClickEventIfAppropriate:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (id)_titlesAfterLeadingTruncation:(id)arg1 toFitInWidth:(double)arg2 withFont:(id)arg3;
- (unsigned long long)_numberOfCommonLeadingWordsOfWordList:(id)arg1 andWordList:(id)arg2;
- (id)_leadingTruncateTitleWithWords:(id)arg1 toFitInWidth:(double)arg2 withFont:(id)arg3 maximumNumberOfWordsToRemove:(unsigned long long)arg4;
- (void)updateTabTitles;
- (void)_moveButton:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)_buttonDidBecomeFirstResponder:(id)arg1;
- (void)_didClickCloseButtonOnTab:(id)arg1;
- (void)_tabButtonClicked:(id)arg1;
- (void)moveTabViewItem:(id)arg1 toIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfTabs;
- (void)tabViewDidChangeNumberOfTabViewItems:(id)arg1;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (void)tabView:(id)arg1 willSelectTabViewItem:(id)arg2;
- (void)_updateNewTabButtonImage;
- (id)_inactiveTabBackgroundForNonMainWindow;
- (id)_inactiveTabBackgroundForMainWindow;
- (id)_backgroundFillImage;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)drawRect:(struct CGRect)arg1;
- (void)_windowChangedKeyState;
- (void)_scrollToButtonAtIndex:(unsigned long long)arg1 canScrollSelectedButton:(BOOL)arg2;
- (void)_scrollAfterClickingOnStackingRegion:(unsigned long long)arg1 withMouseOverTabAtIndex:(unsigned long long)arg2;
- (double)_effectiveRightStackWidthForButtonAtIndex:(unsigned long long)arg1;
- (double)_effectiveLeftStackWidthForButtonAtIndex:(unsigned long long)arg1;
- (unsigned long long)_visibleTabIndexAtPoint:(struct CGPoint)arg1 stackingRegion:(unsigned long long *)arg2 ignorePointsOutsideOfLayoutBounds:(BOOL)arg3;
- (unsigned long long)_visibleTabIndexAtPoint:(struct CGPoint)arg1 stackingRegion:(unsigned long long *)arg2;
- (unsigned long long)_tabIndexAtPointWhenLayingOutButtonsToAlignWithWindowCenter:(struct CGPoint)arg1;
- (unsigned long long)_tabIndexAtPoint:(struct CGPoint)arg1 withButtonWidth:(double)arg2 supplementalWidth:(double)arg3;
- (unsigned long long)_tabIndexAtPoint:(struct CGPoint)arg1;
- (struct CGRect)_viewFrameForAdjustedButtonFrame:(struct CGRect)arg1;
- (double)_horizontalOffsetForButtonAtIndex:(unsigned long long)arg1 frontmostButtonIndex:(unsigned long long)arg2 slowingFactor:(double)arg3;
- (struct CGRect)_centeringFrameForButtonAtIndex:(unsigned long long)arg1;
- (struct CGRect)_adjustedFrameForButtonAtIndex:(unsigned long long)arg1 isHidden:(char *)arg2;
- (struct CGRect)_frameForButtonAtIndex:(unsigned long long)arg1 firstButtonOffset:(double)arg2 buttonWidth:(double)arg3 supplementalWidth:(double)arg4;
- (struct CGRect)_unstackedFrameForButtonAtIndex:(unsigned long long)arg1;
- (unsigned long long)_calculateStackingRegions;
- (double)_buttonWidthForNumberOfButtons:(unsigned long long)arg1 inWidth:(double)arg2 remainderWidth:(double *)arg3;
- (void)_updateButtonWidthAndRemainingWidthInTabBarToDivideAmongButtons;
- (void)_recalculateLayout;
- (double)_layoutBoundsWidth;
- (BOOL)_shouldLayOutButtonsToAlignWithWindowCenter;
- (unsigned long long)_numberOfTabsForLayout;
- (id)_tabButtonAffectingLeftSeparatorOfTabAtIndex:(unsigned long long)arg1;
- (id)_tabButtonAffectingRightSeparatorOfTabAtIndex:(unsigned long long)arg1;
- (void)_redrawButtonSeparators;
- (void)_restackButtonViews;
- (unsigned long long)_frontmostButtonIndex;
- (void)_updateButtonSeparators;
- (void)_removeTabButton:(id)arg1;
- (void)_insertTabButtonWithTabViewItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)_insertMissingButtonsFromTabView;
- (void)_layOutButtonsAnimated:(BOOL)arg1;
- (void)_moveButtonToExpectedContainerView:(id)arg1;
- (void)_layOutDraggedButtonAnimated:(BOOL)arg1;
- (void)_recalculateLayoutAndUpdateContainerViewFrames;
- (void)_updateButtonsAndLayOutAnimated:(BOOL)arg1 isSelectingButton:(BOOL)arg2;
- (void)_updateButtonsAndLayOutAnimated:(BOOL)arg1;
- (void)_setUpViewAnimationForLayout:(BOOL)arg1;
- (void)updateTabTitlesNow;
- (void)setReadyToUse;
- (BOOL)_shouldLayOutButtonsNow;
- (void)_clipViewBoundsChanged:(id)arg1;
- (void)updateLabelNowForTab:(id)arg1;
- (void)updateLabelSoonForTab:(id)arg1;
- (BOOL)shouldSetFontSmoothingBackgroundColor;
- (BOOL)allowsVibrancy;
- (BOOL)isOpaque;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)endGroupUpdates;
- (void)beginGroupUpdates;
- (void)disconnectFromTabbedWindowController;
- (void)_commonScrollableTabBarViewInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)newTabIcon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

