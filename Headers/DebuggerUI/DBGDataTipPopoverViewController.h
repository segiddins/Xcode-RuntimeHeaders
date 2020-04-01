//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <DebuggerUI/NSPopoverDelegate-Protocol.h>

@class DBGDataTipVariablesViewContentProvider, DVTReplacementView, IDEVariablesView, NSPopover, NSString;

@interface DBGDataTipPopoverViewController : IDEViewController <NSPopoverDelegate>
{
    IDEVariablesView *_variablesView;
    DBGDataTipVariablesViewContentProvider *_contentProvider;
    BOOL _isInMiddleOfShowingPopover;
    BOOL _pendingDelayedCallToUpdatePopoverSize;
    id _outlineViewItemDidCollapseObserver;
    id _outlineViewItemDidExpandObserver;
    id _outlineViewWasReloadedObserver;
    id _outlineViewItemWasReloadedObserver;
    id _outlineViewEndedUpdatesObserver;
    unsigned long long _datatipEdge;
    NSPopover *_popover;
    DVTReplacementView *_replacementView;
    struct CGRect _screenAnchorRect;
}

@property(retain) DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property(retain) NSPopover *popover; // @synthesize popover=_popover;
@property unsigned long long datatipEdge; // @synthesize datatipEdge=_datatipEdge;
@property struct CGRect screenAnchorRect; // @synthesize screenAnchorRect=_screenAnchorRect;
@property(retain) IDEVariablesView *variablesView; // @synthesize variablesView=_variablesView;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)popoverDidClose:(id)arg1;
- (void)popoverDidShow:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (void)_removeFromSuperviewAndInvalidate;
- (void)closePopoverAndInvalidate;
- (double)_widthToFit;
- (double)_clipHeightToScreen:(double)arg1;
- (void)_updatePopoverSize;
- (void)_updatePopoverSizeAfterDelay;
- (void)loadView;
- (id)initWithDataValue:(id)arg1 imageToUseInDefaultQuickLook:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

