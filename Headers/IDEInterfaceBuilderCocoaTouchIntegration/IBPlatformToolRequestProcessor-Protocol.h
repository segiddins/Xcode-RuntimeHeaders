//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/NSObject-Protocol.h>

@class IBAbstractInterfaceBuilderPlatformToolProxy, IBGenericDeviceTypeDescription, IBMarshallingResult, IBPlatformToolDescription, IBTargetRuntime, NSArray;

@protocol IBPlatformToolRequestProcessor <NSObject>
- (NSArray *)resultsAfterFailingToLaunchPlatformToolWithResult:(IBMarshallingResult *)arg1 forRequests:(NSArray *)arg2;
- (IBPlatformToolDescription *)toolDescriptionForProcessingRequestsWithTargetRuntime:(IBTargetRuntime *)arg1 role:(long long)arg2 deviceTypeDescription:(IBGenericDeviceTypeDescription *)arg3;
- (NSArray *)performRequestOnBackgroundThreadWithData:(NSArray *)arg1 diagnosticsBlock:(void (^)(IBDiagnosticsHandler *))arg2 platformTool:(IBAbstractInterfaceBuilderPlatformToolProxy *)arg3;
@end

