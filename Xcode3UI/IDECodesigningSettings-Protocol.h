//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Xcode3UI/DVTInvalidation-Protocol.h>

@class DVTTeamRecord, NSDictionary, NSString;

@protocol IDECodesigningSettings <DVTInvalidation>
@property(readonly) BOOL needsResync;
@property BOOL automaticallySyncsWithPortal;
@property(readonly, nonatomic) NSString *profile;
@property(readonly, nonatomic) NSString *identity;
@property(readonly) NSString *developmentTeamID;
@property(retain, nonatomic) DVTTeamRecord *developmentTeam;
@property(nonatomic) int intent;
- (void)syncPortalWithFullRefresh:(BOOL)arg1;
- (void)syncBuildSettings;
- (NSDictionary *)developersAndTeams;
- (id)initWithTarget:(id)arg1;
@end

