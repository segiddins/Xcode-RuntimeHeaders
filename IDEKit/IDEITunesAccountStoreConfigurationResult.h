//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDeveloperAccount;
@protocol ITunesSoftwareServiceConfigurationResponse;

@interface IDEITunesAccountStoreConfigurationResult : NSObject
{
    DVTDeveloperAccount *_account;
    id <ITunesSoftwareServiceConfigurationResponse> _configurationResponse;
}

@property(retain, nonatomic) id <ITunesSoftwareServiceConfigurationResponse> configurationResponse; // @synthesize configurationResponse=_configurationResponse;
@property(retain, nonatomic) DVTDeveloperAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)initWithDeveloperAccount:(id)arg1 appStoreSubmissionConfigurationResponse:(id)arg2;

@end
