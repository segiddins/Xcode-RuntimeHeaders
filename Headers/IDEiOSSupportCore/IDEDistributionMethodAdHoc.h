//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEDistributionMethodExport.h>

@class DVTPlatform;

@interface IDEDistributionMethodAdHoc : IDEDistributionMethodExport
{
}

- (id)summaryPaneNextButtonTitleOverride;
- (BOOL)supportsManifestDistribution;
- (id)packagingStepIdentifier;
- (id)exportStepName;
- (unsigned long long)provisioningProfilePurpose;
- (id)provisioningProfilePlatform;
- (BOOL)wantsProvisioningProfiles;
- (id)installerCertificateKind;
- (id)certificateKind;
- (id)orderedDistributionStepClassNames;
- (id)subtitle;
- (id)shortTitle;
- (id)title;
- (id)commandLineName;
@property(readonly) DVTPlatform *supportedPlatform;
- (id)appStoreName;
- (_Bool)supportsDistributionOfArchive:(id)arg1;
- (double)sortOrder;

@end
