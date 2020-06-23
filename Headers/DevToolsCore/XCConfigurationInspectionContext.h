//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, XCPlatformSpecification, XCPropertyInfoContext, XCSDKPackage;
@protocol XCConfigurationInspectables;

@interface XCConfigurationInspectionContext : NSObject
{
    id <XCConfigurationInspectables> _inspectable;
    NSString *_configName;
    NSString *_baseDirectoryPath;
    XCPropertyInfoContext *_propertyInfoContext;
    XCSDKPackage *_sdkPackage;
    XCPlatformSpecification *_platform;
}

- (void).cxx_destruct;
- (id)description;
- (void)willBeDiscarded;
- (id)platform;
- (id)sdkPackage;
- (id)propertyInfoContext;
- (id)baseDirectoryPath;
- (id)configurationName;
- (id)inspectable;
- (id)initWithInspectable:(id)arg1 forConfigurationNamed:(id)arg2 baseDirectoryPath:(id)arg3;

@end

