//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEProvisioningBundleIdentifierDataSource-Protocol.h>
#import <IDEFoundation/IDEProvisioningIssuesDataSource-Protocol.h>
#import <IDEFoundation/IDEProvisioningProfileSelectionDataSource-Protocol.h>
#import <IDEFoundation/IDEProvisioningRepairBusyReasonDataSource-Protocol.h>
#import <IDEFoundation/IDEProvisioningRepairDataSource-Protocol.h>
#import <IDEFoundation/IDEProvisioningSigningCertificateSelectionDataSource-Protocol.h>
#import <IDEFoundation/IDEProvisioningStyleSelectionDataSource-Protocol.h>
#import <IDEFoundation/IDEProvisioningTeamSelectionDataSource-Protocol.h>

@class NSString;
@protocol IDEProvisioningProfileSelectionDataSource><IDEProvisioningSigningCertificateSelectionDataSource><IDEProvisioningiOSMacBundleIdentifierDataSource;

@protocol IDEProvisioningAssetSelectionDataSource <IDEProvisioningStyleSelectionDataSource, IDEProvisioningSigningCertificateSelectionDataSource, IDEProvisioningProfileSelectionDataSource, IDEProvisioningBundleIdentifierDataSource, IDEProvisioningTeamSelectionDataSource, IDEProvisioningIssuesDataSource, IDEProvisioningRepairBusyReasonDataSource, IDEProvisioningRepairDataSource>
@property(nonatomic, readonly) id <IDEProvisioningProfileSelectionDataSource><IDEProvisioningSigningCertificateSelectionDataSource><IDEProvisioningiOSMacBundleIdentifierDataSource> iOSMacDataSource;
@property(nonatomic, readonly) NSString *configurationName;
@end
