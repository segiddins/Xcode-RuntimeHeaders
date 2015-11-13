//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTVersion;

@interface IDEPlaygroundVersion : NSObject
{
    BOOL _requiresUserPermissionForUpgrade;
    BOOL _supportsExecutionInFullSimulator;
    BOOL _supportsAuxiliarySources;
    BOOL _supportsDisplayModeToggle;
    BOOL _supportsPlaygroundPages;
    BOOL _supportsOrganizationMetadata;
    BOOL _usesLegacyXMLFormat;
    BOOL _usesDiscreteFilesForSections;
    BOOL _usesTimelineElement;
    DVTVersion *_version;
}

+ (BOOL)_readBoolForKey:(id)arg1 fromExtension:(id)arg2;
+ (id)_playgroundVersionFromExtension:(id)arg1;
+ (id)_documentVersionsExtensionPoint;
+ (id)playgroundVersionForVersion:(id)arg1;
+ (id)latestPlaygroundVersion;
+ (id)knownPlaygroundVersions;
@property BOOL usesTimelineElement; // @synthesize usesTimelineElement=_usesTimelineElement;
@property BOOL usesDiscreteFilesForSections; // @synthesize usesDiscreteFilesForSections=_usesDiscreteFilesForSections;
@property BOOL usesLegacyXMLFormat; // @synthesize usesLegacyXMLFormat=_usesLegacyXMLFormat;
@property BOOL supportsOrganizationMetadata; // @synthesize supportsOrganizationMetadata=_supportsOrganizationMetadata;
@property BOOL supportsPlaygroundPages; // @synthesize supportsPlaygroundPages=_supportsPlaygroundPages;
@property BOOL supportsDisplayModeToggle; // @synthesize supportsDisplayModeToggle=_supportsDisplayModeToggle;
@property BOOL supportsAuxiliarySources; // @synthesize supportsAuxiliarySources=_supportsAuxiliarySources;
@property BOOL supportsExecutionInFullSimulator; // @synthesize supportsExecutionInFullSimulator=_supportsExecutionInFullSimulator;
@property BOOL requiresUserPermissionForUpgrade; // @synthesize requiresUserPermissionForUpgrade=_requiresUserPermissionForUpgrade;
@property(retain) DVTVersion *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)description;
@property(readonly) BOOL canSupportOrganizationalMetadataWithImplicitUpgrade;
@property(readonly) BOOL canBeImplicitlyUpgraded;
@property(readonly) BOOL canBeMigrated;
@property(readonly) BOOL canBeUpgraded;

@end

