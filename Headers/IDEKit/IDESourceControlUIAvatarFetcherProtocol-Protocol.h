//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class DVTSourceControlHostedAccount, NSString, NSURL;

@protocol IDESourceControlUIAvatarFetcherProtocol <NSObject>
- (void)avatarForEmail:(NSString *)arg1 username:(NSString *)arg2 url:(NSURL *)arg3 hostedAccount:(DVTSourceControlHostedAccount *)arg4 completion:(void (^)(NSImage *, NSError *))arg5;
@end

