//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol IDEAppIDFeatureCoordination, IDEBuildSettingsCoordination, IDEEntitlementsCoordination, IDEInfoPlistCoordination, IDELinkedFrameworksCoordination;

@interface _TtC13IDEFoundation21CoordinatorCollection : NSObject
{
    MISSING_TYPE *infoPlistCoordinator;
    MISSING_TYPE *entitlementsCoordinator;
    MISSING_TYPE *appIDFeatureCoordinator;
    MISSING_TYPE *buildSettingsCoordinator;
    MISSING_TYPE *linkedFrameworksCoordinator;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithGenerator:(id)arg1 configuration:(id)arg2;
@property(nonatomic, readonly) NSObject<IDELinkedFrameworksCoordination> *linkedFrameworksCoordinator; // @synthesize linkedFrameworksCoordinator;
@property(nonatomic, readonly) NSObject<IDEBuildSettingsCoordination> *buildSettingsCoordinator; // @synthesize buildSettingsCoordinator;
@property(nonatomic, readonly) NSObject<IDEAppIDFeatureCoordination> *appIDFeatureCoordinator; // @synthesize appIDFeatureCoordinator;
@property(nonatomic, readonly) NSObject<IDEEntitlementsCoordination> *entitlementsCoordinator; // @synthesize entitlementsCoordinator;
@property(nonatomic, readonly) NSObject<IDEInfoPlistCoordination> *infoPlistCoordinator; // @synthesize infoPlistCoordinator;

@end

