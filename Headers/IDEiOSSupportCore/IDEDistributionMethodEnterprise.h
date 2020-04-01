//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEDistributionMethodExport.h>

@class DVTPlatform;

@interface IDEDistributionMethodEnterprise : IDEDistributionMethodExport
{
    DVTPlatform *_supportedPlatform;
}

@property(readonly) DVTPlatform *supportedPlatform; // @synthesize supportedPlatform=_supportedPlatform;
- (void).cxx_destruct;
- (id)distributionOptionIdentifiers;
- (BOOL)supportsManifestDistribution;
- (id)packagingStepIdentifierForDestination:(long long)arg1;
- (id)exportStepName;
- (id)provisioningProfilePurpose;
- (id)provisioningProfilePlatform;
- (long long)wantsProvisioningProfiles;
- (id)installerCertificateKind;
- (id)certificateKind;
- (id)orderedDistributionStepClassNamesForDestination:(long long)arg1;
- (id)subtitle;
- (id)shortTitle;
- (id)title;
- (id)commandLineName;
- (id)appStoreName;
- (_Bool)supportsDistributionOfArchive:(id)arg1;
- (double)sortOrder;

@end

