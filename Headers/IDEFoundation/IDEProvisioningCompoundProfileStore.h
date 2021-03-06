//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTLogAspect, NSDictionary, NSMutableDictionary;

@interface IDEProvisioningCompoundProfileStore : NSObject
{
    NSDictionary *_compoundProfiles;
    DVTLogAspect *_logAspect;
    NSMutableDictionary *_mutableCompoundProfiles;
    NSMutableDictionary *_teamToIdentifiers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *teamToIdentifiers; // @synthesize teamToIdentifiers=_teamToIdentifiers;
@property(retain, nonatomic) NSMutableDictionary *mutableCompoundProfiles; // @synthesize mutableCompoundProfiles=_mutableCompoundProfiles;
@property(retain, nonatomic) DVTLogAspect *logAspect; // @synthesize logAspect=_logAspect;
@property(copy, nonatomic) NSDictionary *compoundProfiles; // @synthesize compoundProfiles=_compoundProfiles;
- (id)profilesForTeam:(id)arg1;
- (void)updateWithProvisioningProfiles:(id)arg1;
- (void)removeProvisioningProfiles:(id)arg1;
- (void)updateWithPortalProfiles:(id)arg1;
- (void)updateTeamsToIdentifierWithIdentifier:(id)arg1;
- (id)initWithLogAspect:(id)arg1;

@end

