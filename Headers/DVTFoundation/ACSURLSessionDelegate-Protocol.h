//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/NSObject-Protocol.h>

@class ACSURLSession, NSError, NSURLAuthenticationChallenge;

@protocol ACSURLSessionDelegate <NSObject>

@optional
- (void)URLSession:(ACSURLSession *)arg1 didReceiveChallenge:(NSURLAuthenticationChallenge *)arg2 completionHandler:(void (^)(long long, NSURLCredential *))arg3;
- (void)URLSession:(ACSURLSession *)arg1 didBecomeInvalidWithError:(NSError *)arg2;
@end

