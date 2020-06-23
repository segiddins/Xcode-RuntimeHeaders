//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSScrollView.h>

#import <SourceEditor/NSScrollViewDelegate-Protocol.h>

@class NSString;
@protocol NSObject, SourceEditorPrivateScrollViewDelegate, SourceEditorScrollViewScrollerMoved;

@interface SourceEditorScrollView : NSScrollView <NSScrollViewDelegate>
{
    BOOL _floatingSubviewsShouldMaskToBounds;
    id <NSObject> _willStartLiveScrollNotificationToken;
    id <NSObject> _didLiveScrollNotificationToken;
    id <NSObject> _didEndLiveScrollNotificationToken;
    BOOL _isLiveScrolling;
    BOOL _updatingAutoContentInsets;
    id <SourceEditorPrivateScrollViewDelegate> _privateScrollViewDelegate;
    id <SourceEditorScrollViewScrollerMoved> _scrollerMovedDelegate;
    struct NSEdgeInsets _additionalContentInsets;
}

- (void).cxx_destruct;
@property BOOL updatingAutoContentInsets; // @synthesize updatingAutoContentInsets=_updatingAutoContentInsets;
@property struct NSEdgeInsets additionalContentInsets; // @synthesize additionalContentInsets=_additionalContentInsets;
@property BOOL isLiveScrolling; // @synthesize isLiveScrolling=_isLiveScrolling;
@property __weak id <SourceEditorScrollViewScrollerMoved> scrollerMovedDelegate; // @synthesize scrollerMovedDelegate=_scrollerMovedDelegate;
@property __weak id <SourceEditorPrivateScrollViewDelegate> privateScrollViewDelegate; // @synthesize privateScrollViewDelegate=_privateScrollViewDelegate;
- (void)scrollView:(id)arg1 didChangePresentationOrigin:(struct CGPoint)arg2 active:(BOOL)arg3;
- (BOOL)dvt_autoforwardsScrollWheelEvents;
- (void)dvt_setAutoforwardsScrollWheelEvents:(BOOL)arg1;
- (void)setFloatingSubviewsShouldMaskToBounds:(BOOL)arg1;
- (id)floatingSubviewsForAxis:(long long)arg1;
- (void)addFloatingSubview:(id)arg1 forAxis:(long long)arg2 positioned:(long long)arg3 relativeTo:(id)arg4;
- (id)_floatingSubviewsContainerForAxis:(long long)arg1;
- (id)floatingSubviewsContainerForAxis:(long long)arg1;
- (void)_notifyDelegateOfUserScroll:(id)arg1;
- (void)_doScroller:(id)arg1 hitPart:(long long)arg2 multiplier:(double)arg3;
- (void)_updateAutomaticContentInsets;
- (void)updateAutomaticContentInsets;
- (void)didEndLiveScrolling;
- (void)didLiveScrolling;
- (void)didStartLiveScrolling;
- (void)stopObservingLiveScrollingNotifications;
- (void)startObservingLiveScrollingNotifications;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(setter=_setWantsPageAlignedHorizontalAxis:) BOOL _wantsPageAlignedHorizontalAxis;
@property(setter=_setWantsPageAlignedVerticalAxis:) BOOL _wantsPageAlignedVerticalAxis;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

