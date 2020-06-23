//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@interface XCSProvisioningConfiguration : XCSObject
{
    BOOL _manageCertsAndProfiles;
    BOOL _addMissingDevicesToTeams;
}

+ (id)provisioningConfigurationWithManageCertsAndProfiles:(BOOL)arg1 addMissingDevicesToTeams:(BOOL)arg2 validationErrors:(id *)arg3;
@property(nonatomic) BOOL addMissingDevicesToTeams; // @synthesize addMissingDevicesToTeams=_addMissingDevicesToTeams;
@property(nonatomic) BOOL manageCertsAndProfiles; // @synthesize manageCertsAndProfiles=_manageCertsAndProfiles;
- (id)description;
- (id)saveRepresentationHumanReadable:(BOOL)arg1;
- (id)saveRepresentation;
- (id)dictionaryRepresentation;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithManageCertsAndProfiles:(BOOL)arg1 addMissingDevicesToTeams:(BOOL)arg2 validationErrors:(id *)arg3;

@end
