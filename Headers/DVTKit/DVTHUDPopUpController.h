//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DVTDealloc2Main_WindowController.h"

#import <DVTKit/NSWindowDelegate-Protocol.h>

@class DVTDelayedInvocation, DVTHUDPopUpContentViewController, DVTHUDPopUpView, DVTNotificationToken, NSButton, NSString;

@interface DVTHUDPopUpController : DVTDealloc2Main_WindowController <NSWindowDelegate>
{
    CDUnknownBlockType _doneButtonClickHandlerBlock;
    DVTHUDPopUpContentViewController *_viewController;
    DVTDelayedInvocation *_layoutInvocation;
    struct CGSize _lastLayoutContentSize;
    DVTHUDPopUpView *_popupView;
    NSButton *_doneButton;
    NSButton *_alternateButton;
    struct CGPoint _targetPoint;
    struct CGSize _contentSize;
    struct CGRect _visibleArea;
    BOOL _isOpen;
    BOOL _hostWindowCanBecomeKey;
    BOOL _hidesArrow;
    DVTNotificationToken *_frameChangeToken;
    BOOL _animatesIn;
}

- (void).cxx_destruct;
@property BOOL animatesIn; // @synthesize animatesIn=_animatesIn;
@property(nonatomic) BOOL hidesArrow; // @synthesize hidesArrow=_hidesArrow;
@property(copy) CDUnknownBlockType doneButtonClickHandlerBlock; // @synthesize doneButtonClickHandlerBlock=_doneButtonClickHandlerBlock;
@property(nonatomic) BOOL hostWindowCanBecomeKey; // @synthesize hostWindowCanBecomeKey=_hostWindowCanBecomeKey;
@property(readonly) NSButton *doneButton; // @synthesize doneButton=_doneButton;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property struct CGRect visibleArea; // @synthesize visibleArea=_visibleArea;
@property(readonly) DVTHUDPopUpContentViewController *popupContentViewController; // @synthesize popupContentViewController=_viewController;
- (void)insertText:(id)arg1;
- (void)cancel:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)closeForCancelling;
- (BOOL)spaceBarClosesPopUp;
- (BOOL)escapeClosesPopUp;
- (void)keyDown:(id)arg1;
- (void)_contentViewFrameChangedNotification:(id)arg1;
- (void)clickedDoneButton:(id)arg1;
- (void)close:(id)arg1;
- (void)close;
- (BOOL)windowShouldClose:(id)arg1;
- (void)fadeOutAndCloseWindow;
- (void)closeWindowAndEnd;
- (void)_closeWindowAndEnd;
- (void)showWindowPointingAtLocation:(struct CGPoint)arg1 orientation:(unsigned long long)arg2;
- (void)showWindowPointingAtLocation:(struct CGPoint)arg1 orientation:(unsigned long long)arg2 arrowLocation:(double)arg3;
- (void)positionWindow;
- (struct CGPoint)targetOrigin;
- (void)setWindowOrigin:(struct CGPoint)arg1 clipToScreen:(BOOL)arg2;
- (void)setArrowPointWithTargetPointHidingIfInvalid:(struct CGPoint)arg1;
- (void)layout;
- (void)addSubviews;
- (void)applyContentSize;
- (id)windowNibName;
- (void)setArrowEdge:(unsigned long long)arg1;
@property double arrowHeight;
- (void)validateLayout;
- (void)invalidateLayout;
- (void)loadWindow;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

