//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class DVTSourceControlAuthenticationStrategy, NSDictionary, NSString, NSURL;

@protocol DVTSourceControlAccount <NSObject>
- (id)initWithDictionary:(NSDictionary *)arg1;
- (void)setAuthenticationStrategy:(DVTSourceControlAuthenticationStrategy *)arg1 forURL:(NSURL *)arg2;
- (DVTSourceControlAuthenticationStrategy *)authenticationStrategyForURL:(NSURL *)arg1;
- (NSDictionary *)dictionaryRepresentation;
@property(nonatomic) BOOL savingDisabled;
@property(nonatomic, readonly) NSURL *hostURL;
@property(nonatomic, copy) NSString *accountName;
@end

