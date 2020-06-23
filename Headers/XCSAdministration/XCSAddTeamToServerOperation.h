//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCSAdministration/XCSInitializationOperation.h>

@class DVTPortalTeam, NSData, NSString, NSURL, XCSDeveloperTeam;
@protocol XCSDataProvider, XCSPortalTeamProvider;

@interface XCSAddTeamToServerOperation : XCSInitializationOperation
{
    NSString *_appleID;
    id <XCSPortalTeamProvider> _teamProvider;
    id <XCSDataProvider> _identityDataProvider;
    XCSDeveloperTeam *_serverTeam;
    NSURL *_identityDataURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *identityDataURL; // @synthesize identityDataURL=_identityDataURL;
@property(retain, nonatomic) XCSDeveloperTeam *serverTeam; // @synthesize serverTeam=_serverTeam;
@property(retain, nonatomic) id <XCSDataProvider> identityDataProvider; // @synthesize identityDataProvider=_identityDataProvider;
@property(retain, nonatomic) id <XCSPortalTeamProvider> teamProvider; // @synthesize teamProvider=_teamProvider;
@property(copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(readonly) NSData *identityData;
@property(readonly) DVTPortalTeam *team;
- (void)removeIdentityFile;
- (BOOL)uploadIdentityWithError:(id *)arg1;
- (id)createTeamWithError:(id *)arg1;
- (id)findTeamWithError:(id *)arg1;
- (BOOL)writeIdentityToFileWithError:(id *)arg1;
- (void)failWithError:(id)arg1;
- (void)run;
- (id)statusDescription;

@end

