//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class DVTFilePath, NSString;
@protocol _TtP13DVTFoundation17DVTTeamCredential_;

@protocol _TtP13DVTFoundation25DVTTeamCredentialProvider_
- (id <_TtP13DVTFoundation17DVTTeamCredential_>)credentialAndReturnError:(id *)arg1;
- (id)initWithTeamID:(NSString *)arg1 keyID:(NSString *)arg2 keyFile:(DVTFilePath *)arg3;
@end
