//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEDocViewer/NSObject-Protocol.h>

@class NSString, WKWebView;

@protocol _WKFindDelegate <NSObject>

@optional
- (void)_webView:(WKWebView *)arg1 didFailToFindString:(NSString *)arg2;
- (void)_webView:(WKWebView *)arg1 didFindMatches:(unsigned long long)arg2 forString:(NSString *)arg3 withMatchIndex:(long long)arg4;
- (void)_webView:(WKWebView *)arg1 didCountMatches:(unsigned long long)arg2 forString:(NSString *)arg3;
@end

