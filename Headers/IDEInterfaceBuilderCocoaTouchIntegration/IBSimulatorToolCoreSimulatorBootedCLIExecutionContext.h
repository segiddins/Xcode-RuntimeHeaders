//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBSimulatorToolCoreSimulatorCLIExecutionContext.h>

@interface IBSimulatorToolCoreSimulatorBootedCLIExecutionContext : IBSimulatorToolCoreSimulatorCLIExecutionContext
{
}

+ (long long)bootingSessionType;
- (id)launchAndConnectToToolWithLaunchContext:(id)arg1 toolProxyClass:(Class)arg2 proxyDelegate:(id)arg3 shouldRaiseOnFailures:(BOOL)arg4 error:(id *)arg5;
- (BOOL)populateEnvironment:(id)arg1 launchContext:(id)arg2 error:(id *)arg3;
- (BOOL)spawnsToolWithBootedSimulator;

@end

