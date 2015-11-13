//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTDelayedInvocation, DVTStackBacktrace, NSArray, NSString, Xcode3TargetBuildSettingsCoordinator, Xcode3TargetEntitlementsCoordinator, Xcode3TargetInfoPlistCoordinator, Xcode3TargetLinkedFrameworksCoordinator, Xcode3TargetPortalEntitlementsCoordinator;
@protocol IDEAppIDFeatureDelegate, IDECapabilitiesContextProviding, IDEProjectItem;

@interface IDEProjectItemModel : NSObject <DVTInvalidation>
{
    NSArray *_flightChecks;
    BOOL _needToPublish;
    id <IDECapabilitiesContextProviding> _targetCapabilitiesContext;
    id <IDEProjectItem> _item;
    DVTDelayedInvocation *_delayedUpdateInvocation;
}

+ (void)initialize;
@property BOOL needToPublish; // @synthesize needToPublish=_needToPublish;
@property(readonly) DVTDelayedInvocation *delayedUpdateInvocation; // @synthesize delayedUpdateInvocation=_delayedUpdateInvocation;
@property(readonly) id <IDEProjectItem> item; // @synthesize item=_item;
@property(readonly) id <IDECapabilitiesContextProviding> targetCapabilitiesContext; // @synthesize targetCapabilitiesContext=_targetCapabilitiesContext;
@property(readonly, nonatomic) NSArray *flightChecks; // @synthesize flightChecks=_flightChecks;
- (void).cxx_destruct;
@property(readonly) Xcode3TargetInfoPlistCoordinator *infoPlistCoordinator;
@property(readonly) Xcode3TargetLinkedFrameworksCoordinator *linkedFrameworksCoordinator;
@property(readonly) Xcode3TargetPortalEntitlementsCoordinator<IDEAppIDFeatureDelegate> *portalEntitlementsCoordinator;
@property(readonly) Xcode3TargetEntitlementsCoordinator *entitlementsCoordinator;
@property(readonly) Xcode3TargetBuildSettingsCoordinator *buildSettingsCoordinator;
- (void)runFlightChecks;
@property(readonly) BOOL requiresAccountAndTeamSelection;
@property(readonly) BOOL isEnabledUsingEducatedGuess;
- (void)setEnabled:(BOOL)arg1 flightCheckContext:(id)arg2;
@property(readonly, getter=isEnabled) BOOL enabled;
- (void)publishStateWithContext:(id)arg1;
- (void)modelWasDisabled;
- (void)modelWasEnabledWithContext:(id)arg1;
- (void)updateWithContext:(id)arg1;
- (void)targetCoordinatorChanged:(id)arg1;
- (void)primitiveInvalidate;
- (id)init;
- (id)initWithCapabilitiesContext:(id)arg1 item:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

