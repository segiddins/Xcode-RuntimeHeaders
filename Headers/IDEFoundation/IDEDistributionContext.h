//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDeveloperAccount, DVTDeveloperAccountManager, DVTLogAspect, DVTMutableOrderedDictionary, DVTProvisioningProfileManager, DVTSigningCertificateManager, IDEAppStoreSubmissionConfiguration, IDEDistributionCoalescedThinningVariantAbstractClass, IDEDistributionLogging, IDEDistributionManifest, IDEDistributionMethod, IDEDistributionProcessingPipeline, IDEDistributionProvisioningEvaluation, IDEDistributionProvisioningManualSigningMap, IDEITunesConnect, IDEITunesConnectApplicationDescription, IDEITunesConnectConfigurationResponse, IDEProvisioningTeamManager, NSArray, NSDate, NSDictionary, NSMutableOrderedSet, NSMutableSet, NSNumber, NSSet, NSString, NSURL;
@protocol IDEDistributable, IDEProvisioningBasicTeam;

@interface IDEDistributionContext : NSObject
{
    IDEITunesConnect *_iTunesConnectProxy;
    IDEDistributionContext *_parent;
    NSDate *_startDate;
    id <IDEDistributable> _archive;
    DVTSigningCertificateManager *_certificateManager;
    DVTProvisioningProfileManager *_profileManager;
    IDEProvisioningTeamManager *_teamManager;
    DVTDeveloperAccountManager *_accountManager;
    IDEDistributionMethod *_distributionMethod;
    id <IDEProvisioningBasicTeam> _team;
    NSNumber *_distributionTask;
    NSNumber *_distributionDestination;
    IDEDistributionProvisioningEvaluation *_provisioningEvaluation;
    NSArray *_topLevelDistributionItems;
    IDEDistributionCoalescedThinningVariantAbstractClass *_firstProcessedDistributionCoalescedThinningVariant;
    NSDictionary *_processedTopLevelDistributionItems;
    IDEDistributionLogging *_logging;
    DVTLogAspect *_logAspect;
    NSNumber *_uploadSymbols;
    NSNumber *_uploadBitcode;
    NSNumber *_compileBitcode;
    NSNumber *_stripSwiftSymbols;
    NSNumber *_generateAppStoreInformation;
    IDEAppStoreSubmissionConfiguration *_appStoreSubmissionConfiguration;
    IDEITunesConnectConfigurationResponse *_appStoreSubmissionConfigurationResponse;
    NSArray *_distributionIssues;
    DVTMutableOrderedDictionary *_itemToEntitlementsProcessorsMap;
    IDEDistributionProcessingPipeline *_pipeline;
    IDEITunesConnectApplicationDescription *_applicationRecord;
    DVTDeveloperAccount *_iTunesConnectAccount;
    NSURL *_ODRAssetPackBaseURL;
    NSNumber *_includeODRAssetPackInBundle;
    IDEDistributionManifest *_distributionManifest;
    NSString *_thinningChoiceDisplayName;
    NSString *_thinningChoiceDeviceIdentifier;
    NSSet *_distributionCoalescedThinningVariants;
    NSNumber *_archivedProvisioningStyle;
    NSNumber *_provisioningStyle;
    IDEDistributionProvisioningManualSigningMap *_manualSigningAssetMap;
    NSMutableOrderedSet *_certificatesCreated;
    NSDictionary *_cachedDeviceDisplayNameToCoalescedThinningVariantSet;
    NSNumber *_registerRequiredDevices;
    NSSet *_allowedInputs;
    NSSet *_allowedOutputs;
    NSArray *_stepClasses;
    NSMutableSet *_itemsWithProfileSelection;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableSet *itemsWithProfileSelection; // @synthesize itemsWithProfileSelection=_itemsWithProfileSelection;
@property(readonly, nonatomic) NSArray *stepClasses; // @synthesize stepClasses=_stepClasses;
@property(readonly, nonatomic) NSSet *allowedOutputs; // @synthesize allowedOutputs=_allowedOutputs;
@property(readonly, nonatomic) NSSet *allowedInputs; // @synthesize allowedInputs=_allowedInputs;
@property(retain, nonatomic) NSNumber *registerRequiredDevices; // @synthesize registerRequiredDevices=_registerRequiredDevices;
@property(retain, nonatomic) NSDictionary *cachedDeviceDisplayNameToCoalescedThinningVariantSet; // @synthesize cachedDeviceDisplayNameToCoalescedThinningVariantSet=_cachedDeviceDisplayNameToCoalescedThinningVariantSet;
@property(retain, nonatomic) NSMutableOrderedSet *certificatesCreated; // @synthesize certificatesCreated=_certificatesCreated;
@property(retain, nonatomic) IDEDistributionProvisioningManualSigningMap *manualSigningAssetMap; // @synthesize manualSigningAssetMap=_manualSigningAssetMap;
@property(retain, nonatomic) NSNumber *provisioningStyle; // @synthesize provisioningStyle=_provisioningStyle;
@property(retain, nonatomic) NSNumber *archivedProvisioningStyle; // @synthesize archivedProvisioningStyle=_archivedProvisioningStyle;
@property(retain, nonatomic) NSSet *distributionCoalescedThinningVariants; // @synthesize distributionCoalescedThinningVariants=_distributionCoalescedThinningVariants;
@property(retain, nonatomic) NSString *thinningChoiceDeviceIdentifier; // @synthesize thinningChoiceDeviceIdentifier=_thinningChoiceDeviceIdentifier;
@property(retain, nonatomic) NSString *thinningChoiceDisplayName; // @synthesize thinningChoiceDisplayName=_thinningChoiceDisplayName;
@property(retain, nonatomic) IDEDistributionManifest *distributionManifest; // @synthesize distributionManifest=_distributionManifest;
@property(retain, nonatomic) NSNumber *includeODRAssetPackInBundle; // @synthesize includeODRAssetPackInBundle=_includeODRAssetPackInBundle;
@property(retain, nonatomic) NSURL *ODRAssetPackBaseURL; // @synthesize ODRAssetPackBaseURL=_ODRAssetPackBaseURL;
@property(retain, nonatomic) DVTDeveloperAccount *iTunesConnectAccount; // @synthesize iTunesConnectAccount=_iTunesConnectAccount;
@property(retain, nonatomic) IDEITunesConnectApplicationDescription *applicationRecord; // @synthesize applicationRecord=_applicationRecord;
@property(retain, nonatomic) IDEDistributionProcessingPipeline *pipeline; // @synthesize pipeline=_pipeline;
@property(retain, nonatomic) DVTMutableOrderedDictionary *itemToEntitlementsProcessorsMap; // @synthesize itemToEntitlementsProcessorsMap=_itemToEntitlementsProcessorsMap;
@property(retain, nonatomic) NSArray *distributionIssues; // @synthesize distributionIssues=_distributionIssues;
@property(retain, nonatomic) IDEITunesConnectConfigurationResponse *appStoreSubmissionConfigurationResponse; // @synthesize appStoreSubmissionConfigurationResponse=_appStoreSubmissionConfigurationResponse;
@property(retain, nonatomic) IDEAppStoreSubmissionConfiguration *appStoreSubmissionConfiguration; // @synthesize appStoreSubmissionConfiguration=_appStoreSubmissionConfiguration;
@property(retain, nonatomic) NSNumber *generateAppStoreInformation; // @synthesize generateAppStoreInformation=_generateAppStoreInformation;
@property(retain, nonatomic) NSNumber *stripSwiftSymbols; // @synthesize stripSwiftSymbols=_stripSwiftSymbols;
@property(retain, nonatomic) NSNumber *compileBitcode; // @synthesize compileBitcode=_compileBitcode;
@property(retain, nonatomic) NSNumber *uploadBitcode; // @synthesize uploadBitcode=_uploadBitcode;
@property(retain, nonatomic) NSNumber *uploadSymbols; // @synthesize uploadSymbols=_uploadSymbols;
@property(retain, nonatomic) DVTLogAspect *logAspect; // @synthesize logAspect=_logAspect;
@property(retain, nonatomic) IDEDistributionLogging *logging; // @synthesize logging=_logging;
@property(retain, nonatomic) NSDictionary *processedTopLevelDistributionItems; // @synthesize processedTopLevelDistributionItems=_processedTopLevelDistributionItems;
@property(retain, nonatomic) IDEDistributionCoalescedThinningVariantAbstractClass *firstProcessedDistributionCoalescedThinningVariant; // @synthesize firstProcessedDistributionCoalescedThinningVariant=_firstProcessedDistributionCoalescedThinningVariant;
@property(retain, nonatomic) NSArray *topLevelDistributionItems; // @synthesize topLevelDistributionItems=_topLevelDistributionItems;
@property(retain, nonatomic) IDEDistributionProvisioningEvaluation *provisioningEvaluation; // @synthesize provisioningEvaluation=_provisioningEvaluation;
@property(retain, nonatomic) NSNumber *distributionDestination; // @synthesize distributionDestination=_distributionDestination;
@property(retain, nonatomic) NSNumber *distributionTask; // @synthesize distributionTask=_distributionTask;
@property(retain, nonatomic) id <IDEProvisioningBasicTeam> team; // @synthesize team=_team;
@property(retain, nonatomic) IDEDistributionMethod *distributionMethod; // @synthesize distributionMethod=_distributionMethod;
@property(retain, nonatomic) DVTDeveloperAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(retain, nonatomic) IDEProvisioningTeamManager *teamManager; // @synthesize teamManager=_teamManager;
@property(retain, nonatomic) DVTProvisioningProfileManager *profileManager; // @synthesize profileManager=_profileManager;
@property(retain, nonatomic) DVTSigningCertificateManager *certificateManager; // @synthesize certificateManager=_certificateManager;
@property(retain, nonatomic) id <IDEDistributable> archive; // @synthesize archive=_archive;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) IDEDistributionContext *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (id)propertyListRepresentation;
- (BOOL)strictTeamIDMatch;
- (BOOL)isInAppContent;
- (id)flattenedDistributionItems;
- (id)nonChainedDescription;
- (id)description;
@property(retain, nonatomic) IDEITunesConnect *iTunesConnectProxy; // @synthesize iTunesConnectProxy=_iTunesConnectProxy;
- (id)initWithParent:(id)arg1 stepClass:(Class)arg2 allowedInputs:(id)arg3 allowedOutputs:(id)arg4;
- (id)init;
- (id)initWithParent:(id)arg1 allowedInputs:(id)arg2 allowedOutputs:(id)arg3;
- (id)initWithParent:(id)arg1 stepClass:(Class)arg2;
- (id)deviceRequirementWithDevices:(id)arg1;

@end

