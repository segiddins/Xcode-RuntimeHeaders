//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTStructuredLayoutKit/DVTStructuredLayoutView.h>

#import <IDEKit/DVTActiveStateAware-Protocol.h>
#import <IDEKit/DVTWindowContentLayoutRectObserver-Protocol.h>

@class DVTActiveStateAwareToken, IDEEditorAreaSplit, NSString;
@protocol DVTCancellable;

@interface IDEEditorAreaSplitView : DVTStructuredLayoutView <DVTActiveStateAware, DVTWindowContentLayoutRectObserver>
{
    id <DVTCancellable> _contentLayoutRectObserverToken;
    DVTActiveStateAwareToken *_activeStateAwareToken;
    BOOL _inActiveContext;
    IDEEditorAreaSplit *_editorAreaSplit;
}

- (void).cxx_destruct;
@property __weak IDEEditorAreaSplit *editorAreaSplit; // @synthesize editorAreaSplit=_editorAreaSplit;
@property(nonatomic, getter=isInActiveContext) BOOL inActiveContext; // @synthesize inActiveContext=_inActiveContext;
- (void)dvt_positionSubviewsAndSizeSelfAfterSubviewLayout;
- (void)dvt_configureSubviewsBeforeSubviewLayout;
- (double)_contentLayoutRectInset;
- (void)window:(id)arg1 didChangeContentLayoutRect:(struct CGRect)arg2;
- (void)viewDidMoveToWindow;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

