//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObject.h>

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

- (id)description;
- (void)willBeDiscarded;
- (id)platform;
- (id)sdkPackage;
- (id)propertyInfoContext;
- (id)baseDirectoryPath;
- (id)configurationName;
- (id)inspectable;
- (void)dealloc;
- (id)initWithInspectable:(id)arg1 forConfigurationNamed:(id)arg2 baseDirectoryPath:(id)arg3;

@end

