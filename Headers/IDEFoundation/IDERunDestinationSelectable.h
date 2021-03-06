//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTSDK, DVTSDKVariant, NSString, NSURL;

@interface IDERunDestinationSelectable : NSObject
{
    BOOL _targetDeviceIsConcrete;
    BOOL _targetDeviceIsWireless;
    BOOL _isEligible;
    NSURL *_targetDeviceLocation;
    NSString *_targetDeviceModelCode;
    NSString *_targetDeviceFamily;
    DVTSDK *_targetSDK;
    DVTSDKVariant *_targetSDKVariant;
    NSString *_targetArchitecture;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isEligible; // @synthesize isEligible=_isEligible;
@property(readonly, nonatomic) NSString *targetArchitecture; // @synthesize targetArchitecture=_targetArchitecture;
@property(readonly, nonatomic) DVTSDKVariant *targetSDKVariant; // @synthesize targetSDKVariant=_targetSDKVariant;
@property(readonly, nonatomic) DVTSDK *targetSDK; // @synthesize targetSDK=_targetSDK;
@property(readonly, nonatomic) BOOL targetDeviceIsWireless; // @synthesize targetDeviceIsWireless=_targetDeviceIsWireless;
@property(readonly, nonatomic) BOOL targetDeviceIsConcrete; // @synthesize targetDeviceIsConcrete=_targetDeviceIsConcrete;
@property(readonly, nonatomic) NSString *targetDeviceFamily; // @synthesize targetDeviceFamily=_targetDeviceFamily;
@property(readonly, nonatomic) NSString *targetDeviceModelCode; // @synthesize targetDeviceModelCode=_targetDeviceModelCode;
@property(readonly, nonatomic) NSURL *targetDeviceLocation; // @synthesize targetDeviceLocation=_targetDeviceLocation;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)plistRepresentation;
- (id)initWithPlistRepresentation:(id)arg1;
- (id)initWithRunDestination:(id)arg1;
- (id)initWithTargetDeviceLocation:(id)arg1 targetDeviceFamily:(id)arg2 targetDeviceModelCode:(id)arg3 targetDeviceIsConcrete:(BOOL)arg4 targetDeviceIsWireless:(BOOL)arg5 targetSDK:(id)arg6 targetSDKVariant:(id)arg7 targetArchitecture:(id)arg8 isEligible:(BOOL)arg9;

@end

