//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/DVTAnalyticsLogProtocol-Protocol.h>

@class DVTCrashLogThread, NSArray;
@protocol DVTToolchainRegistrySupplyingSwiftDemangle;

@protocol DVTAnalyticsLogProtocol_IDEAdditions <DVTAnalyticsLogProtocol>
@property(readonly) DVTCrashLogThread *crashingThread;
- (void)demangleUsingToolchains:(NSArray *)arg1 toolchainRegistry:(id <DVTToolchainRegistrySupplyingSwiftDemangle>)arg2 callback:(void (^)(id <DVTAnalyticsLogProtocol_IDEAdditions>, NSError *))arg3;
@end

