//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEUpgradeBlueprintContext.h>

#import <DevToolsCore/Xcode3UpgradeContext-Protocol.h>

@class NSString, Xcode3BuildSettingsContext, Xcode3Target;

@interface Xcode3UpgradeTargetContext : IDEUpgradeBlueprintContext <Xcode3UpgradeContext>
{
    Xcode3BuildSettingsContext *_buildSettings;
}

- (void).cxx_destruct;
@property(readonly) Xcode3BuildSettingsContext *buildSettings; // @synthesize buildSettings=_buildSettings;
@property(readonly, copy) NSString *description;
@property(readonly) Xcode3Target *target;
- (id)initWithBlueprint:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
