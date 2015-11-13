//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSCountedSet, NSMapTable, NSMutableDictionary;

@interface DVTLayoutView_ML : NSView
{
    NSCountedSet *_frameChangeObservations;
    NSCountedSet *_boundsChangeObservations;
    BOOL _implementsDrawRect;
    BOOL _implementsLayoutCompletionCallback;
    BOOL _layoutNeeded;
    NSMutableDictionary *_invalidationTokens;
    NSMapTable *_frameChangeStacksByView;
    NSMapTable *_boundsChangeStacksByView;
    BOOL _needsSecondLayoutPass;
}

+ (void)_layoutWindow:(id)arg1;
+ (void)_recursivelyLayoutSubviewsOfView:(id)arg1 populatingSetWithLaidOutViews:(id)arg2;
+ (void)_doRecursivelyLayoutSubviewsOfView:(id)arg1 populatingSetWithLaidOutViews:(id)arg2 completionCallBackHandlers:(id)arg3 currentLayoutPass:(long long)arg4 needsSecondPass:(char *)arg5;
+ (void)scheduleWindowForLayout:(id)arg1;
+ (id)alreadyLaidOutViewsForCurrentDisplayPassOfWindow:(id)arg1;
+ (void)clearAlreadyLaidOutViewsForCurrentDisplayPassOfWindow:(id)arg1;
@property BOOL needsSecondLayoutPass; // @synthesize needsSecondLayoutPass=_needsSecondLayoutPass;
@property(getter=isLayoutNeeded) BOOL layoutNeeded; // @synthesize layoutNeeded=_layoutNeeded;
- (void).cxx_destruct;
- (BOOL)wantsDefaultClipping;
- (void)stopInvalidatingLayoutWithChangesToKeyPath:(id)arg1 ofObject:(id)arg2;
- (void)invalidateLayoutWithChangesToKeyPath:(id)arg1 ofObject:(id)arg2;
- (void)_autoLayoutViewViewFrameDidChange:(id)arg1;
- (void)_autoLayoutViewViewBoundsDidChange:(id)arg1;
- (void)_invalidateLayoutIfNeededAfterRegisteringRectChange:(struct CGRect)arg1 forView:(id)arg2 table:(id)arg3;
- (void)stopInvalidatingLayoutWithBoundsChangesToView:(id)arg1;
- (void)stopInvalidatingLayoutWithFrameChangesToView:(id)arg1;
- (void)invalidateLayoutWithBoundsChangesToView:(id)arg1;
- (void)invalidateLayoutWithFrameChangesToView:(id)arg1;
- (void)_tearDownObservationForObservedObject:(id)arg1 notificationName:(id)arg2 observationCountTable:(id)arg3 rectChangeStackTable:(id)arg4;
- (void)_setupObservationForObservedObject:(id)arg1 selector:(SEL)arg2 notificationName:(id)arg3 observationCountTable:(id *)arg4 rectChangeStackTable:(id *)arg5;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)didCompleteLayout;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (void)layoutIfNeeded;
- (void)didLayoutSubview:(id)arg1;
- (id)subviewsOrderedForLayout;
- (void)viewWillDraw;
- (void)_reallyLayoutIfNeededBottomUp;
- (void)_reallyLayoutIfNeededTopDown;
- (void)invalidateLayout;
- (void)viewDidMoveToWindow;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_DVTLayoutView_MLSharedInit;
- (void)dealloc;

@end

