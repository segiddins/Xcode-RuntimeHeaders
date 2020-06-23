//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTSourceControl/DVTSourceControlHostedAccount.h>

#import <IDESourceControlUI/IDEAccountPrefsPaneAccount-Protocol.h>

@class NSImage, NSString;

@interface DVTSourceControlHostedAccount (AccountPreferences) <IDEAccountPrefsPaneAccount>
+ (id)keyPathsForValuesAffectingAccountTitle;
@property(readonly, nonatomic) long long accountReachability;
@property(readonly, nonatomic) BOOL accountEnabled;
@property(readonly, nonatomic) NSImage *accountImage;
@property(readonly, nonatomic) NSString *accountSubTitle;
@property(readonly, nonatomic) NSString *accountTitle;
@end
