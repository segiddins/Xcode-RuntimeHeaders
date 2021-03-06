//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/IDEProvisionableProvider-Protocol.h>

@class DVTLogAspect, DVTPlatform, DVTStackBacktrace, IDEDistributionMethod, IDEDistributionProvisioningEvaluation, IDEDistributionProvisioningManualSigningMap, IDEProvisioningContext, IDEProvisioningManager, NSArray, NSDictionary, NSSet, NSString, _TtC13IDEFoundation32IDEProvisioningDeviceRequirement, _TtC13IDEFoundation41IDEDistributionProvisioningLedgerDelegate;
@protocol IDEProvisioningBasicTeam;

@interface IDEDistributionProvisioningEvaluator : NSObject <DVTInvalidation, IDEProvisionableProvider>
{
    DVTPlatform *_fallbackPlatform;
    IDEProvisioningContext *_context;
    CDUnknownBlockType _callback;
    IDEDistributionMethod *_distributionMethod;
    _TtC13IDEFoundation32IDEProvisioningDeviceRequirement *_deviceRequirement;
    NSSet *_distributionItemProvisionables;
    IDEProvisioningManager *_provisioningManager;
    IDEDistributionProvisioningEvaluation *_evaluation;
    long long _provisioningStyle;
    IDEDistributionProvisioningManualSigningMap *_signingAssetMap;
    NSDictionary *_entitlementsProcessorsMap;
    id <IDEProvisioningBasicTeam> _team;
    NSArray *_topLevelDistributionItems;
    DVTLogAspect *_logAspect;
    _TtC13IDEFoundation41IDEDistributionProvisioningLedgerDelegate *_ledgerDelegate;
}

+ (id)evaluationForTopLevelDistributionItems:(id)arg1 withItemParameters:(id)arg2 method:(id)arg3 provisioningStyle:(long long)arg4 logAspect:(id)arg5;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) _TtC13IDEFoundation41IDEDistributionProvisioningLedgerDelegate *ledgerDelegate; // @synthesize ledgerDelegate=_ledgerDelegate;
@property(readonly, nonatomic) DVTLogAspect *logAspect; // @synthesize logAspect=_logAspect;
@property(readonly, nonatomic) NSArray *topLevelDistributionItems; // @synthesize topLevelDistributionItems=_topLevelDistributionItems;
@property(readonly, nonatomic) id <IDEProvisioningBasicTeam> team; // @synthesize team=_team;
@property(readonly, nonatomic) NSDictionary *entitlementsProcessorsMap; // @synthesize entitlementsProcessorsMap=_entitlementsProcessorsMap;
@property(readonly, nonatomic) IDEDistributionProvisioningManualSigningMap *signingAssetMap; // @synthesize signingAssetMap=_signingAssetMap;
@property(readonly, nonatomic) long long provisioningStyle; // @synthesize provisioningStyle=_provisioningStyle;
@property(readonly, nonatomic) IDEDistributionProvisioningEvaluation *evaluation; // @synthesize evaluation=_evaluation;
@property(retain, nonatomic) IDEProvisioningManager *provisioningManager; // @synthesize provisioningManager=_provisioningManager;
@property(retain, nonatomic) NSSet *distributionItemProvisionables; // @synthesize distributionItemProvisionables=_distributionItemProvisionables;
@property(readonly, nonatomic) _TtC13IDEFoundation32IDEProvisioningDeviceRequirement *deviceRequirement; // @synthesize deviceRequirement=_deviceRequirement;
@property(readonly, nonatomic) IDEDistributionMethod *distributionMethod; // @synthesize distributionMethod=_distributionMethod;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) IDEProvisioningContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSSet *provisionableDevices;
@property(readonly, nonatomic) NSSet *provisionables;
@property(readonly, nonatomic) BOOL finishedLoading;
- (void)_evaluateProvisionables;
- (id)_evaluationOverridesForProvisionableManager:(id)arg1;
- (id)_fallbackPlatform;
- (void)_startEvaluating;
- (id)init;
- (id)initForManualSigningWithDistributionContext:(id)arg1 deviceRequirement:(id)arg2 signingAssetMap:(id)arg3 evaluationCallback:(CDUnknownBlockType)arg4;
- (id)initForAutomaticSigningWithDistributionContext:(id)arg1 deviceRequirement:(id)arg2 evaluationCallback:(CDUnknownBlockType)arg3;
- (id)configuredProvisioningContextWithStyle:(long long)arg1 method:(id)arg2;
- (id)initWithTopLevelDistributionItems:(id)arg1 method:(id)arg2 team:(id)arg3 deviceRequirement:(id)arg4 provisioningStyle:(long long)arg5 signingAssetsMap:(id)arg6 entitlementsProcessorsMap:(id)arg7 context:(id)arg8 logAspect:(id)arg9 logging:(id)arg10 evaluationCallback:(CDUnknownBlockType)arg11;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

