//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IDEAppIDFeatureCoordination, IDEBuildSettingsCoordination, IDEEntitlementsCoordination, IDEInfoPlistCoordination, IDELinkedFrameworksCoordination;

@interface _TtC13IDEFoundation21CoordinatorCollection : NSObject
{
    // Error parsing type: , name: infoPlistCoordinator
    // Error parsing type: , name: entitlementsCoordinator
    // Error parsing type: , name: appIDFeatureCoordinator
    // Error parsing type: , name: buildSettingsCoordinator
    // Error parsing type: , name: linkedFrameworksCoordinator
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

