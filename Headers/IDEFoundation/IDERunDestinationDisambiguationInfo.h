//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/NSCopying-Protocol.h>

@class DVTPlatform, DVTSDK, DVTSDKVariant, NSString;

@interface IDERunDestinationDisambiguationInfo : NSObject <NSCopying>
{
    NSString *_deviceOperatingSystemVersion;
    NSString *_deviceOperatingSystemBuild;
    NSString *_deviceModelName;
    NSString *_deviceIdentifier;
    DVTPlatform *_devicePlatform;
    NSString *_targetArchitecture;
    DVTSDK *_targetSDK;
    DVTSDKVariant *_targetSDKVariant;
}

- (void).cxx_destruct;
@property(readonly) DVTSDKVariant *targetSDKVariant; // @synthesize targetSDKVariant=_targetSDKVariant;
@property(readonly) DVTSDK *targetSDK; // @synthesize targetSDK=_targetSDK;
@property(readonly) NSString *targetArchitecture; // @synthesize targetArchitecture=_targetArchitecture;
@property(readonly) DVTPlatform *devicePlatform; // @synthesize devicePlatform=_devicePlatform;
@property(readonly) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(readonly) NSString *deviceModelName; // @synthesize deviceModelName=_deviceModelName;
@property(readonly) NSString *deviceOperatingSystemBuild; // @synthesize deviceOperatingSystemBuild=_deviceOperatingSystemBuild;
@property(readonly) NSString *deviceOperatingSystemVersion; // @synthesize deviceOperatingSystemVersion=_deviceOperatingSystemVersion;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRunDestination:(id)arg1;
- (id)initWithDeviceOperatingSystemVersion:(id)arg1 deviceOperatingSystemBuild:(id)arg2 deviceModelName:(id)arg3 deviceIdentifier:(id)arg4 devicePlatform:(id)arg5 targetArchitecture:(id)arg6 targetSDK:(id)arg7 targetSDKVariant:(id)arg8;

@end

