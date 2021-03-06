//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary, NSPointerArray, NSView;
@protocol DVTStructuredLayoutView;

@interface DVTStructuredLayoutViewState : NSObject
{
    NSView<DVTStructuredLayoutView> *_hostView;
    NSPointerArray *_frameObservers;
    NSMapTable *_observedViewsToObservationRecords;
    NSMutableDictionary *_keyPathInvalidationTokens;
    BOOL _isLayoutValid;
    BOOL _isSubtreeLayoutValid;
    double _lastKnownScaleFactor;
    BOOL _needsSecondLayoutPass;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL needsSecondLayoutPass; // @synthesize needsSecondLayoutPass=_needsSecondLayoutPass;
- (void)stopInvalidatingLayoutWithChangesToKeyPath:(id)arg1 ofObject:(id)arg2;
- (void)invalidateLayoutWithChangesToKeyPath:(id)arg1 ofObject:(id)arg2;
- (void)invalidateLayoutWithChangesToKeyPath:(id)arg1 ofObject:(id)arg2 changeHandler:(CDUnknownBlockType)arg3;
- (void)_observedViewFrameChangeNotificationHandler:(id)arg1;
- (void)observedViewDidChangeFrame:(id)arg1;
- (void)stopInvalidatingLayoutWithFrameChangesToViews:(id)arg1;
- (void)stopInvalidatingLayoutWithFrameChangesToView:(id)arg1;
- (void)invalidateLayoutWithFrameChangesToViews:(id)arg1;
- (void)invalidateLayoutWithFrameChangesToView:(id)arg1;
- (void)unregisterForObservationsOf:(id)arg1;
- (void)hostViewWillChangeBoundsOrigin:(struct CGPoint)arg1;
- (void)hostViewWillChangeBoundsSize:(struct CGSize)arg1;
- (void)hostViewWillChangeFrameOrigin:(struct CGPoint)arg1;
- (void)hostViewWillChangeFrameSize:(struct CGSize)arg1;
- (void)notifyObserversOfFrameChange;
- (void)removeFrameObsever:(id)arg1;
- (void)registerFrameObserver:(id)arg1;
- (void)layoutIfNeeded;
- (void)markSubtreeNeedsLayoutForAncestors;
- (id)firstAncestorLayoutView;
- (void)invalidateLayout;
- (void)markSubTreeNeedsLayout;
- (void)markSubtreeLayoutAsValid;
- (BOOL)isSubtreeLayoutValid;
- (void)markLayoutAsValid;
- (BOOL)isLayoutValid;
- (void)hostViewWillDrawContinuingViewWillDrawRecurisionWith:(CDUnknownBlockType)arg1;
- (void)hostViewDidMoveToSuperview;
- (void)hostViewDidMoveToWindow;
- (void)hostViewDidChangeBackingProperties;
- (id)window;
- (id)description;
- (void)dealloc;
- (id)initWithHostView:(id)arg1;

@end

