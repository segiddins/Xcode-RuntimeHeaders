//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEDebugArea.h>

#import <IDEKit/DVTSplitViewDelegate-Protocol.h>

@class DVTReplacementView, DVTScopeBarView, DVTSplitView, DVTSplitViewItem, NSButton, NSString, NSView;

@interface IDESplitViewDebugArea : IDEDebugArea <DVTSplitViewDelegate>
{
    int _preferredLayoutMode;
    int _actualLayoutMode;
    double _proportionOfLeftWidthVsTotalWidth;
    DVTSplitViewItem *_leftSplitViewItem;
    DVTSplitViewItem *_rightSplitViewItem;
    BOOL _isInSetLayoutMode;
    BOOL _useAnimationIfAppropriate;
    NSButton *_showLeftViewButton;
    NSButton *_showRightViewButton;
    NSView *_buttonSeparator;
    NSButton *_currentPressedButton;
    DVTScopeBarView *_leftScopeBarView;
    DVTScopeBarView *_rightScopeBarView;
    DVTSplitView *_splitView;
    DVTReplacementView *_leftReplacementView;
    DVTReplacementView *_rightReplacementView;
}

+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
@property(retain) DVTReplacementView *rightReplacementView; // @synthesize rightReplacementView=_rightReplacementView;
@property(retain) DVTReplacementView *leftReplacementView; // @synthesize leftReplacementView=_leftReplacementView;
@property(retain) DVTSplitView *splitView; // @synthesize splitView=_splitView;
@property(nonatomic) int actualLayoutMode; // @synthesize actualLayoutMode=_actualLayoutMode;
@property(nonatomic) int preferredLayoutMode; // @synthesize preferredLayoutMode=_preferredLayoutMode;
- (void).cxx_destruct;
- (double)_rightViewMinWidth;
- (double)_leftViewMinWidth;
- (double)_currentVariableViewWidthProportion;
- (void)splitViewDidEndLiveResize:(id)arg1;
- (void)splitViewWillStartLiveResize:(id)arg1;
- (void)_resizeOnlyVisibleSubview;
- (void)_resizeBothVisibleSubviews;
- (int)_layoutModeForForcedCollapse;
- (BOOL)_canShowBothViewsUsingWidth:(double)arg1;
- (void)splitViewItemDidExpandOrCollapseBecauseUserDraggedDivider:(id)arg1;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)setStateToken:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)_adjustedHiddenSplitViewItemsMagnitudeIfNeccessary;
- (void)_animateToLayoutMode:(int)arg1;
- (BOOL)delegateFirstResponder;
- (BOOL)_shouldConsiderAnimationForModeTransition:(int)arg1 toMode:(int)arg2;
- (void)_updateToolTipsForLeftAndRightViewButtons;
- (void)_updatePreferredLayoutModeAfterButtonPress:(id)arg1;
- (void)_removeShowViewControlsFromScopeBar:(id)arg1;
- (void)_addShowViewControlsToScopeBar:(id)arg1;
- (void)_addViewToggleButtonsToAppropriateSuperview;
- (void)showViewSwitchingControlsInLeftScopeBar:(id)arg1 orRightScopeBarView:(id)arg2;
@property(readonly) NSString *toolTipForHideRightViewButton;
@property(readonly) NSString *toolTipForShowRightViewButton;
@property(readonly) NSString *toolTipForHideLeftViewButton;
@property(readonly) NSString *toolTipForShowLeftViewButton;
- (void)primitiveInvalidate;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

