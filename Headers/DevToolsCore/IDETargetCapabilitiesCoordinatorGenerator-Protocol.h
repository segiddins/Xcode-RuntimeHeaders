//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSObject, NSString;
@protocol IDEAppIDFeatureCoordination, IDEBuildSettingsCoordination, IDEEntitlementsCoordination, IDEInfoPlistCoordination, IDELinkedFrameworksCoordination;

@protocol IDETargetCapabilitiesCoordinatorGenerator
- (NSObject<IDELinkedFrameworksCoordination> *)generateLinkedFrameworksCoordinatorForConfiguration:(NSString *)arg1;
- (NSObject<IDEBuildSettingsCoordination> *)generateBuildSettingsCoordinatorForConfiguration:(NSString *)arg1;
- (NSObject<IDEAppIDFeatureCoordination> *)generateAppIDFeatureCoordinatorForConfiguration:(NSString *)arg1;
- (NSObject<IDEEntitlementsCoordination> *)generateEntitlementsCoordinatorForConfiguration:(NSString *)arg1;
- (NSObject<IDEInfoPlistCoordination> *)generateInfoPlistCoordinatorForConfiguration:(NSString *)arg1;
@end
