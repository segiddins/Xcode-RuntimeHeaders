//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSScrollView.h>

@class NSView;

@interface DVTScrollView : NSScrollView
{
    BOOL _handleBoundsOrFrameChangePending;
    NSView *_bottomBorderView;
    id _contentViewBoundsChangeNotificationToken;
    id _documentViewFrameChangeNotificationToken;
    BOOL _showsBorderOnBottom;
    BOOL _borderComesAndGoesBasedOnScrollPosition;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL borderComesAndGoesBasedOnScrollPosition; // @synthesize borderComesAndGoesBasedOnScrollPosition=_borderComesAndGoesBasedOnScrollPosition;
@property(nonatomic) BOOL showsBorderOnBottom; // @synthesize showsBorderOnBottom=_showsBorderOnBottom;
- (void)tile;
- (void)_defferedHandleBoundsOrFrameChanged;
- (void)_handleBoundsOrFrameChanged;
- (void)_conditionallyInstallOrRemoveNotificationObservers;
- (void)viewDidMoveToWindow;
- (void)_dvtScrollViewCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
