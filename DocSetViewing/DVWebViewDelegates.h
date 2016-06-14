//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVMainController, NSString, NSURL, NSWindow, WebDownload;

@interface DVWebViewDelegates : NSObject
{
    DVMainController *m_mainController;
    WebDownload *m_webDownload;
    NSURL *m_downloadDestinationDirectory;
    NSString *m_downloadDestinationFilePath;
    NSWindow *m_downloadOriginationWindow;
}

+ (void)initialize;
@property(retain, nonatomic) NSWindow *downloadOriginationWindow; // @synthesize downloadOriginationWindow=m_downloadOriginationWindow;
@property(retain, nonatomic) NSURL *downloadDestinationDirectory; // @synthesize downloadDestinationDirectory=m_downloadDestinationDirectory;
@property(retain, nonatomic) NSString *downloadDestinationFilePath; // @synthesize downloadDestinationFilePath=m_downloadDestinationFilePath;
@property(retain, nonatomic) WebDownload *webDownload; // @synthesize webDownload=m_webDownload;
@property(nonatomic) DVMainController *mainController; // @synthesize mainController=m_mainController;
- (BOOL)download:(id)arg1 shouldDecodeSourceDataOfMIMEType:(id)arg2;
- (void)download:(id)arg1 didFailWithError:(id)arg2;
- (void)downloadDidFinish:(id)arg1;
- (id)_moveExtractedContentInPath:(id)arg1;
- (id)_moveContentsOfDirectory:(id)arg1 toDirectory:(id)arg2;
- (void)_cleanUpDownloadState;
- (void)_openExtractedProjectInPath:(id)arg1;
- (void)_quarantineExtractedArchiveAtPath:(id)arg1 fromDownload:(id)arg2;
- (void)_quarantineFileAtPath:(id)arg1 quarantineDictionary:(id)arg2;
- (id)_fileNameFromPath:(id)arg1;
- (void)download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2;
- (void)downloadDidBegin:(id)arg1;
- (id)downloadWindowForAuthenticationSheet:(id)arg1;
- (id)webView:(id)arg1 createWebViewWithRequest:(id)arg2;
- (void)_findTextInDocumentation:(id)arg1;
- (id)webView:(id)arg1 contextMenuItemsForElement:(id)arg2 defaultMenuItems:(id)arg3;
- (void)webView:(id)arg1 mouseDidMoveOverElement:(id)arg2 modifierFlags:(unsigned long long)arg3;
- (void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (id)_textForLocalURLResourceLoadingFailure:(id)arg1;
- (id)_textForRemoteURLResourceLoadingFailure:(id)arg1;
- (id)webView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)resetResourceLoadCounters;
- (void)webView:(id)arg1 saveFrameView:(id)arg2 showingPanel:(BOOL)arg3;
- (void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (BOOL)_downloadAndExtractZipFilesUserDefault;
- (void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;

@end

