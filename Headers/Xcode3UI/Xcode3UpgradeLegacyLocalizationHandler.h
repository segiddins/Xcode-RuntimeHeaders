//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Xcode3UI/IDEUpgradeTaskHandler-Protocol.h>

@class DVTLocale, IDEUpgradeContext, NSString;
@protocol Xcode3UpgradeContext;

@interface Xcode3UpgradeLegacyLocalizationHandler : NSObject <IDEUpgradeTaskHandler>
{
    IDEUpgradeContext<Xcode3UpgradeContext> *_context;
    DVTLocale *_legacyLocalization;
}

- (void).cxx_destruct;
@property(readonly, copy) DVTLocale *legacyLocalization; // @synthesize legacyLocalization=_legacyLocalization;
@property(readonly) IDEUpgradeContext<Xcode3UpgradeContext> *context; // @synthesize context=_context;
- (void)_presentErrors:(id)arg1;
- (void)_ugpradeLegacyLocalizationForProject:(id)arg1 workspaceTabController:(id)arg2 task:(id)arg3;
- (void)upgradeWorkspace:(id)arg1 withTasks:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContext:(id)arg1 legacyLocalization:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

