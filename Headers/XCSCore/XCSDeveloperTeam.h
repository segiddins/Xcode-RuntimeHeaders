//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSString, XCSCertificate;

@interface XCSDeveloperTeam : XCSObject
{
    XCSCertificate *_certificate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) XCSCertificate *certificate; // @synthesize certificate=_certificate;
- (id)dictionaryRepresentation;
- (BOOL)_validateTeamID:(id)arg1 name:(id)arg2 type:(id)arg3 status:(id)arg4 appleID:(id)arg5 validationErrors:(id *)arg6;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithTeamID:(id)arg1 name:(id)arg2 type:(id)arg3 status:(id)arg4 appleID:(id)arg5 certificate:(id)arg6 validationErrors:(id *)arg7;
- (id)initWithTeamID:(id)arg1 name:(id)arg2 type:(id)arg3 appleID:(id)arg4 validationErrors:(id *)arg5;

// Remaining properties
@property(copy, nonatomic) NSString *appleID; // @dynamic appleID;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *status; // @dynamic status;
@property(copy, nonatomic) NSString *teamID; // @dynamic teamID;
@property(copy, nonatomic) NSString *type; // @dynamic type;

@end

