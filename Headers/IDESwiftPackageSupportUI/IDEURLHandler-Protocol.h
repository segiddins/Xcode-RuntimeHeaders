//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESwiftPackageSupportUI/NSObject-Protocol.h>

@class NSURL;

@protocol IDEURLHandler <NSObject>
+ (void)handleURL:(NSURL *)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;

@optional
+ (BOOL)shouldHandleURL:(NSURL *)arg1;
@end

