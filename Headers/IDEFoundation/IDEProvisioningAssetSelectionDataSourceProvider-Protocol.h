//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEProvisioningTeamsDataSource-Protocol.h>

@class DVTSDK, NSArray, NSSet, NSString;
@protocol IDEProvisioningBasicProfile, IDEProvisioningBasicTeam, IDEProvisioningTeamsDataSourceDelegate;

@protocol IDEProvisioningAssetSelectionDataSourceProvider <IDEProvisioningTeamsDataSource>
- (void)refreshFromPortal;
- (void)setProvisioningStyle:(long long)arg1 forConfigurationsNamed:(NSSet *)arg2 secondarySDK:(DVTSDK *)arg3;
- (void)setProvisioningProfile:(id <IDEProvisioningBasicProfile>)arg1 forConfigurationsNamed:(NSSet *)arg2 sdk:(DVTSDK *)arg3;
- (void)setSigningCertificateIdentifier:(NSString *)arg1 forConfigurationsNamed:(NSSet *)arg2 sdk:(DVTSDK *)arg3;
- (void)setTeam:(id <IDEProvisioningBasicTeam>)arg1 forConfigurationsNamed:(NSSet *)arg2;
- (void)setBundleIdentifier:(NSString *)arg1 forConfigurationsNamed:(NSSet *)arg2 sdk:(DVTSDK *)arg3;
@property(nonatomic) __weak id <IDEProvisioningTeamsDataSourceDelegate> delegate;
@property(nonatomic, readonly) NSArray *provisioningSelectionDataSources;
- (BOOL)isFinishedLoading;

// Remaining properties
@property(nonatomic, readonly) BOOL finishedLoading;
@end

