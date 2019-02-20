//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/IBDiagnosticsHandlerConfigurator-Protocol.h>
#import <IDEInterfaceBuilderKit/IBVerboseDescriptionProvider-Protocol.h>

@class NSString;

@interface IBAbstractPlatformToolExecutionContext : NSObject <IBDiagnosticsHandlerConfigurator, IBVerboseDescriptionProvider>
{
}

- (id)registerSceneUpdateRenderingDelegate:(id)arg1 returningSceneIdentifier:(long long *)arg2;
- (id)ib_verboseDescription;
- (void)configureDiagnosticsHandler:(id)arg1;
- (void)toolProxyWillDispatchMessage:(id)arg1;
- (BOOL)populateEnvironment:(id)arg1 launchContext:(id)arg2 error:(id *)arg3;
- (void)populateDYLDFrameworkSearchPaths:(id)arg1 launchContext:(id)arg2;
- (id)environmentWithLaunchContext:(id)arg1 error:(id *)arg2;
- (id)launchAndConnectToToolWithLaunchContext:(id)arg1 toolProxyClass:(Class)arg2 shouldRaiseOnFailures:(BOOL)arg3 error:(id *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
