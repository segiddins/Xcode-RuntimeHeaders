//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL, _TtC13IDEFoundation36IDEDistributionExportOptionsManifest, _TtC13IDEFoundation41IDEDistributionExportOptionsUploadBitcode, _TtC13IDEFoundation48IDEDistributionExportOptionsProvisioningProfiles;

@interface _TtC13IDEFoundation28IDEDistributionExportOptions : NSObject
{
    // Error parsing type: , name: teamID
    // Error parsing type: , name: method
    // Error parsing type: , name: destination
    // Error parsing type: , name: compileBitcode
    // Error parsing type: , name: uploadBitcode
    // Error parsing type: , name: generateAppStoreInformation
    // Error parsing type: , name: manifest
    // Error parsing type: , name: onDemandResourcesAssetPacksBaseURL
    // Error parsing type: , name: embedOnDemandResourcesAssetPacksInBundle
    // Error parsing type: , name: stripSwiftSymbols
    // Error parsing type: , name: uploadSymbols
    // Error parsing type: , name: thinning
    // Error parsing type: , name: iCloudContainerEnvironment
    // Error parsing type: , name: signingStyle
    // Error parsing type: , name: signingCertificate
    // Error parsing type: , name: installerSigningCertificate
    // Error parsing type: , name: provisioningProfiles
    // Error parsing type: , name: appStoreConnectAccountUsername
    // Error parsing type: , name: testDevices
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

