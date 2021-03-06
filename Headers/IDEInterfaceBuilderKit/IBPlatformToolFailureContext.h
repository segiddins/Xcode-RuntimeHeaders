//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/IBDiagnosticsHandlerConfigurator-Protocol.h>

@class IBAbstractInterfaceBuilderPlatformToolManager, IBAbstractPlatformToolExecutionContext, IBAbstractPlatformToolProxy, IBPlatformToolDescription, IBPlatformToolLaunchContext, NSString;

@interface IBPlatformToolFailureContext : NSObject <IBDiagnosticsHandlerConfigurator>
{
    IBAbstractPlatformToolProxy *_tool;
    IBPlatformToolDescription *_toolDescription;
    IBPlatformToolLaunchContext *_launchContext;
    IBAbstractPlatformToolExecutionContext *_executionContext;
    IBAbstractInterfaceBuilderPlatformToolManager *_manager;
}

+ (id)contextWithTool:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) IBAbstractInterfaceBuilderPlatformToolManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) IBAbstractPlatformToolExecutionContext *executionContext; // @synthesize executionContext=_executionContext;
@property(retain, nonatomic) IBPlatformToolLaunchContext *launchContext; // @synthesize launchContext=_launchContext;
@property(retain, nonatomic) IBPlatformToolDescription *toolDescription; // @synthesize toolDescription=_toolDescription;
@property(retain, nonatomic) IBAbstractPlatformToolProxy *tool; // @synthesize tool=_tool;
- (void)configureDiagnosticsHandler:(id)arg1;
- (id)effectiveToolName;
- (id)initWithTool:(id)arg1 toolDescription:(id)arg2 launchContext:(id)arg3 executionContext:(id)arg4 toolProxyManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

