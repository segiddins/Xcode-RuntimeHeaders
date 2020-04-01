//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/ITunesSoftwareServiceAuthenticationDelegate-Protocol.h>

@class DVTDeveloperAccountCredentials, DVTLogAspect, NSString;

@interface IDEITunesSoftwareServiceAuthenticationDelegate : NSObject <ITunesSoftwareServiceAuthenticationDelegate>
{
    DVTDeveloperAccountCredentials *_credentials;
    DVTLogAspect *_logAspect;
}

@property(readonly) DVTLogAspect *logAspect; // @synthesize logAspect=_logAspect;
@property(readonly) DVTDeveloperAccountCredentials *credentials; // @synthesize credentials=_credentials;
- (void).cxx_destruct;
- (void)willAuthenticateWithContext:(id)arg1;
- (id)initWithAccountCredentials:(id)arg1 logAspect:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

