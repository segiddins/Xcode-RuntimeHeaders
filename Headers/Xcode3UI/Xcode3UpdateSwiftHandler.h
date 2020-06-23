//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Xcode3UI/IDEUpgradeTaskHandler-Protocol.h>

@class NSString;

@interface Xcode3UpdateSwiftHandler : NSObject <IDEUpgradeTaskHandler>
{
}

+ (id)sharedInstance;
- (void)_showTargetsNeedUpgradeAlertForProjects:(id)arg1 targetNamesByProjectName:(id)arg2 workspace:(id)arg3;
- (void)_showUnsupportedTargetsAlertForProjects:(id)arg1 targetNamesByProjectName:(id)arg2 workspace:(id)arg3;
- (void)upgradeWorkspace:(id)arg1 withTasks:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

