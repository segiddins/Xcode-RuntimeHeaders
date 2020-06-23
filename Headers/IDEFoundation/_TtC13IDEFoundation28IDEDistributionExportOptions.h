//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString, NSURL, _TtC13IDEFoundation36IDEDistributionExportOptionsManifest, _TtC13IDEFoundation41IDEDistributionExportOptionsUploadBitcode, _TtC13IDEFoundation48IDEDistributionExportOptionsProvisioningProfiles;

@interface _TtC13IDEFoundation28IDEDistributionExportOptions : NSObject
{
    MISSING_TYPE *teamID;
    MISSING_TYPE *method;
    MISSING_TYPE *destination;
    MISSING_TYPE *compileBitcode;
    MISSING_TYPE *uploadBitcode;
    MISSING_TYPE *generateAppStoreInformation;
    MISSING_TYPE *manifest;
    MISSING_TYPE *onDemandResourcesAssetPacksBaseURL;
    MISSING_TYPE *embedOnDemandResourcesAssetPacksInBundle;
    MISSING_TYPE *stripSwiftSymbols;
    MISSING_TYPE *uploadSymbols;
    MISSING_TYPE *thinning;
    MISSING_TYPE *iCloudContainerEnvironment;
    MISSING_TYPE *signingStyle;
    MISSING_TYPE *signingCertificate;
    MISSING_TYPE *installerSigningCertificate;
    MISSING_TYPE *provisioningProfiles;
    MISSING_TYPE *appStoreConnectAccountUsername;
    MISSING_TYPE *testDevices;
}

+ (id)loadFromURL:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithTeamID:(id)arg1 method:(id)arg2 destination:(id)arg3 compileBitcode:(BOOL)arg4 uploadBitcode:(id)arg5 generateAppStoreInformation:(BOOL)arg6 manifest:(id)arg7 onDemandResourcesAssetPacksBaseURL:(id)arg8 embedOnDemandResourcesAssetPacksInBundle:(BOOL)arg9 stripSwiftSymbols:(BOOL)arg10 uploadSymbols:(BOOL)arg11 thinning:(id)arg12 iCloudContainerEnvironment:(id)arg13 signingStyle:(id)arg14 signingCertificate:(id)arg15 installerSigningCertificate:(id)arg16 provisioningProfiles:(id)arg17 appStoreConnectAccountUsername:(id)arg18 testDevices:(id)arg19;
@property(nonatomic, readonly) NSArray *testDevices;
@property(nonatomic, readonly) NSString *appStoreConnectAccountUsername;
@property(nonatomic, readonly) _TtC13IDEFoundation48IDEDistributionExportOptionsProvisioningProfiles *provisioningProfiles; // @synthesize provisioningProfiles;
@property(nonatomic, readonly) NSString *installerSigningCertificate;
@property(nonatomic, readonly) NSString *signingCertificate;
@property(nonatomic, readonly) NSString *signingStyle;
@property(nonatomic, readonly) NSString *iCloudContainerEnvironment;
@property(nonatomic, readonly) NSString *thinning;
@property(nonatomic, readonly) BOOL uploadSymbols; // @synthesize uploadSymbols;
@property(nonatomic, readonly) BOOL stripSwiftSymbols; // @synthesize stripSwiftSymbols;
@property(nonatomic, readonly) BOOL embedOnDemandResourcesAssetPacksInBundle; // @synthesize embedOnDemandResourcesAssetPacksInBundle;
@property(nonatomic, readonly) NSURL *onDemandResourcesAssetPacksBaseURL;
@property(nonatomic, readonly) _TtC13IDEFoundation36IDEDistributionExportOptionsManifest *manifest; // @synthesize manifest;
@property(nonatomic, readonly) BOOL generateAppStoreInformation; // @synthesize generateAppStoreInformation;
@property(nonatomic, readonly) _TtC13IDEFoundation41IDEDistributionExportOptionsUploadBitcode *uploadBitcode; // @synthesize uploadBitcode;
@property(nonatomic, readonly) BOOL compileBitcode; // @synthesize compileBitcode;
@property(nonatomic, readonly) NSString *destination;
@property(nonatomic, readonly) NSString *method;
@property(nonatomic, readonly) NSString *teamID;

@end

