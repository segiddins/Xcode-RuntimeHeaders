//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <IDELanguageSupportUI/DVTInvalidation-Protocol.h>
#import <IDELanguageSupportUI/WebDownloadDelegate-Protocol.h>
#import <IDELanguageSupportUI/WebFrameLoadDelegate-Protocol.h>
#import <IDELanguageSupportUI/WebPolicyDelegate-Protocol.h>
#import <IDELanguageSupportUI/WebResourceLoadDelegate-Protocol.h>
#import <IDELanguageSupportUI/WebUIDelegate-Protocol.h>

@class DVTNotificationToken, DVTObservingToken, DVTStackBacktrace, IDEPlaygroundEditor, NSString, WebView;

@interface IDEDocumentationPlaygroundWebViewController : NSViewController <WebUIDelegate, WebResourceLoadDelegate, WebDownloadDelegate, WebFrameLoadDelegate, WebPolicyDelegate, DVTInvalidation>
{
    BOOL _sizingToContent;
    IDEPlaygroundEditor *_playgroundEditor;
    DVTNotificationToken *_webHTMLViewFrameChangeNotificationToken;
    DVTNotificationToken *_webViewFrameChangeNotificationToken;
    DVTNotificationToken *_fontAndColorSettingsChangedNotificationToken;
    DVTObservingToken *_accessoryAnnotationWidthObservingToken;
    DVTObservingToken *_quarantinedDocumentObservingToken;
}

+ (void)initialize;
@property BOOL sizingToContent; // @synthesize sizingToContent=_sizingToContent;
@property(retain) DVTObservingToken *quarantinedDocumentObservingToken; // @synthesize quarantinedDocumentObservingToken=_quarantinedDocumentObservingToken;
@property(retain) DVTObservingToken *accessoryAnnotationWidthObservingToken; // @synthesize accessoryAnnotationWidthObservingToken=_accessoryAnnotationWidthObservingToken;
@property(retain) DVTNotificationToken *fontAndColorSettingsChangedNotificationToken; // @synthesize fontAndColorSettingsChangedNotificationToken=_fontAndColorSettingsChangedNotificationToken;
@property(retain) DVTNotificationToken *webViewFrameChangeNotificationToken; // @synthesize webViewFrameChangeNotificationToken=_webViewFrameChangeNotificationToken;
@property(retain) DVTNotificationToken *webHTMLViewFrameChangeNotificationToken; // @synthesize webHTMLViewFrameChangeNotificationToken=_webHTMLViewFrameChangeNotificationToken;
@property(retain) IDEPlaygroundEditor *playgroundEditor; // @synthesize playgroundEditor=_playgroundEditor;
- (void).cxx_destruct;
- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)navigateToPageContext:(id)arg1;
- (void)navigateToPageWithIdentifier:(id)arg1;
- (void)navigateToPreviousPage;
- (void)navigateToNextPage;
- (void)navigateToLastPage;
- (void)navigateToFirstPage;
- (id)webView:(id)arg1 contextMenuItemsForElement:(id)arg2 defaultMenuItems:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)loadMarkdownString:(id)arg1 baseURL:(id)arg2;
- (void)loadView;
- (id)_htmlPostamble;
- (id)_htmlPreamble;
- (void)_sizeToDoc;
- (id)_styleRulesForTheme;
- (id)playgroundContext;
- (id)playgroundDocument;
- (void)primitiveInvalidate;
- (id)initWithPlaygroundEditor:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
@property(retain) WebView *view; // @dynamic view;

@end

