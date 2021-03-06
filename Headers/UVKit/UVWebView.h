//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKit/WebView.h>

#import <UVKit/UVWebViewProtocol-Protocol.h>
#import <UVKit/WebPolicyDelegate-Protocol.h>

@class NSString;

@interface UVWebView : WebView <WebPolicyDelegate, UVWebViewProtocol>
{
}

- (void)loadMainFrameHTML:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

