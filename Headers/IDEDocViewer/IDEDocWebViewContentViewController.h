//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

#import <IDEDocViewer/DOMEventListener-Protocol.h>
#import <IDEDocViewer/IDEDocContentView-Protocol.h>
#import <IDEDocViewer/NSPopoverDelegate-Protocol.h>
#import <IDEDocViewer/WebFrameLoadDelegate-Protocol.h>
#import <IDEDocViewer/WebPolicyDelegate-Protocol.h>
#import <IDEDocViewer/WebResourceLoadDelegate-Protocol.h>
#import <IDEDocViewer/WebUIDelegate-Protocol.h>
#import <IDEDocViewer/_TtP6IDEKit38IDEExplorableJumpBarControllerDelegate_-Protocol.h>

@class DVTBorderedView, DVTNotificationToken, DVTObservingToken, DVTStackBacktrace, IDEDocContentAreaViewController, IDEExplorableJumpBarController, IDENavBar, NSArray, NSString, NSURL, NSView, NSVisualEffectView, WKWebView, WebView, _TtC12IDEDocViewer44IDEDocCoreDocumentationWebViewViewController, _TtC16DVTExplorableKit23DVTExplorableIdentifier;

@interface IDEDocWebViewContentViewController : DVTViewController <NSPopoverDelegate, WebFrameLoadDelegate, WebPolicyDelegate, WebUIDelegate, WebResourceLoadDelegate, _TtP6IDEKit38IDEExplorableJumpBarControllerDelegate_, DOMEventListener, IDEDocContentView>
{
    NSView *_wrapperView;
    IDENavBar *_navBar;
    DVTObservingToken *_mainFrameURLObservingToken;
    DVTObservingToken *_allDocsSourceObservingToken;
    NSURL *_referenceURLOverride;
    double _cumulativeMagnifyDelta;
    short _stickyTextMagnifyGestureDirection;
    float _textSizeMultiplierAtGestureStart;
    _TtC16DVTExplorableKit23DVTExplorableIdentifier *_targetExplorableIdentifier;
    _TtC16DVTExplorableKit23DVTExplorableIdentifier *_selectedJumpBarExplorableIdentifier;
    BOOL _hasPendingJumpBarNavigation;
    _TtC12IDEDocViewer44IDEDocCoreDocumentationWebViewViewController *_coreDocWebViewController;
    DVTNotificationToken *_fontAndColorThemeChangedObserver;
    IDEDocContentAreaViewController *_hostContentAreaViewController;
    WebView *_webView;
    NSVisualEffectView *_webViewVisualEffectView;
    DVTBorderedView *_webViewBorderedView;
    IDEExplorableJumpBarController *_jumpBarController;
    NSArray *_pathControlBindingTokens;
}

+ (void)initialize;
+ (id)webViewLoadingLogAspect;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *pathControlBindingTokens; // @synthesize pathControlBindingTokens=_pathControlBindingTokens;
@property(readonly, nonatomic) IDEExplorableJumpBarController *jumpBarController; // @synthesize jumpBarController=_jumpBarController;
@property(retain) DVTBorderedView *webViewBorderedView; // @synthesize webViewBorderedView=_webViewBorderedView;
@property(retain) NSVisualEffectView *webViewVisualEffectView; // @synthesize webViewVisualEffectView=_webViewVisualEffectView;
@property(retain) WebView *webView; // @synthesize webView=_webView;
@property __weak IDEDocContentAreaViewController *hostContentAreaViewController; // @synthesize hostContentAreaViewController=_hostContentAreaViewController;
- (void)coreDocViewControllerLoaded:(id)arg1 with:(id)arg2;
- (void)_updateCoreDocViewController:(id)arg1;
@property(readonly) BOOL isRenderingCoreDocContent;
@property(readonly, nonatomic) WKWebView *wkWebView;
@property(readonly, nonatomic) _TtC12IDEDocViewer44IDEDocCoreDocumentationWebViewViewController *coreDocWebViewController;
- (void)handleEvent:(id)arg1;
@property int webViewScrollPosition;
- (id)_bodyElementWithScrollHeight;
- (void)setZoomMultiplier:(float)arg1;
- (float)zoomMultiplier;
- (void)magnifyWithEvent:(id)arg1;
- (void)beginGestureWithEvent:(id)arg1;
- (void)haveWorkspaceOpenOrRevealURL:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5;
- (void)_downloadAndOpenSampleCodeWithRequest:(id)arg1;
- (BOOL)_allowURLRequest:(id)arg1 webView:(id)arg2;
- (void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;
- (void)_significantPageChangeOccurred;
- (void)webViewContextMenu_openLinkInNewTab:(id)arg1;
- (void)webViewContextMenu_copyLink:(id)arg1;
- (void)webViewContextMenu_findText:(id)arg1;
- (id)webView:(id)arg1 contextMenuItemsForElement:(id)arg2 defaultMenuItems:(id)arg3;
- (unsigned long long)webView:(id)arg1 dragDestinationActionMaskForDraggingInfo:(id)arg2;
@property(readonly) NSString *selectedStringInWebView;
- (void)loadURL:(id)arg1 explorableIdentifier:(id)arg2;
- (id)webViewURLString;
- (BOOL)hidesFirstLevelOfTreeForJumpBarController:(id)arg1;
- (id)selectedJumpBarExplorableIdentifier;
- (id)_documentationURLForIdentifier:(id)arg1;
- (void)jumpBarController:(id)arg1 userDidSelectIdentifier:(id)arg2;
- (void)showDocumentItemsMenu:(id)arg1;
- (void)_updateJumpBar;
- (id)_parentTabController;
- (void)primitiveInvalidate;
- (void)_installFullSizeContentViewConstraintsIfNeeded;
- (void)viewDidInstall;
- (void)loadView;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

