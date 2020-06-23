//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEProjectItemModel.h>

@class NSSet;
@protocol IDEFlightChecking;

@interface IDEFontInstallationItemModel : IDEProjectItemModel
{
    id <IDEFlightChecking> _entitlementsFlightCheck;
    BOOL _fontEnumeration;
    NSSet *_fontInstallationValues;
}

+ (id)coalescableReadOnlyKeyPaths;
+ (id)keyPathsForValuesAffectingSystemInstallation;
+ (id)keyPathsForValuesAffectingAppUsage;
@property(retain, nonatomic) NSSet *fontInstallationValues; // @synthesize fontInstallationValues=_fontInstallationValues;
@property(nonatomic) BOOL fontEnumeration; // @synthesize fontEnumeration=_fontEnumeration;
- (void).cxx_destruct;
- (id)coalescableWriteableKeyPathToDataSource;
@property(nonatomic) BOOL systemInstallation; // @dynamic systemInstallation;
- (void)_setSystemInstallation:(BOOL)arg1;
@property(nonatomic) BOOL appUsage; // @dynamic appUsage;
- (void)_setAppUsage:(BOOL)arg1;
- (void)removeEnabledFontInstallationValue:(id)arg1;
- (void)addEnabledFontInstallationValue:(id)arg1;
- (BOOL)isEnabledFontInstallationValue:(id)arg1;
- (void)targetCoordinatorsChanged:(id)arg1;
- (BOOL)isEnabledUsingEducatedGuess;
- (id)flightChecks;
- (id)entitlementsFlightCheck;
- (void)readValuesFromEntitlements;
- (id)initWithCapabilitiesContext:(id)arg1 item:(id)arg2;

@end

