//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDETestPlanEditor/NSObject-Protocol.h>

@class IDETestTargetsOutlineViewController, NSArray, NSMenu;

@protocol IDETestTargetsOutlineViewControllerDelegate <NSObject>
- (void)testTargetsViewController:(IDETestTargetsOutlineViewController *)arg1 changedTestableReferences:(NSArray *)arg2;

@optional
- (void)presentUpgradeToTestPlansUIForTestTargetsViewController:(IDETestTargetsOutlineViewController *)arg1;
- (NSMenu *)baseContextMenuForTestTargetsViewController:(IDETestTargetsOutlineViewController *)arg1;
- (unsigned long long)permittedOptionsForTestTargetsViewController:(IDETestTargetsOutlineViewController *)arg1;
@end

