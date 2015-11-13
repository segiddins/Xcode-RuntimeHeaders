//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYDeviceInfo, DYGPUToolsVersionInfo, NSArray, NSError, NSString;

@interface DYDevice : NSObject
{
    DYDeviceInfo *_deviceInfo;
}

+ (id)replayerAppIdentifier;
+ (Class)controlStrategyClass;
+ (Class)deferredLaunchStrategyClass;
+ (Class)launchStrategyClass;
@property(readonly, retain, nonatomic) DYDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
- (void).cxx_destruct;
- (BOOL)supportsPlaybackOfCaptureWithInfo:(id)arg1 limitBackwardsCompatibility:(BOOL)arg2 isInternal:(BOOL)arg3;
- (BOOL)versionIsOlderThan:(id)arg1;
- (id)iconDataForApplicationIdentifiers:(id)arg1;
- (id)createTransport;
@property(readonly, retain, nonatomic) NSString *standardTitle; // @dynamic standardTitle;
@property(readonly, retain, nonatomic) NSArray *supportedGraphicsAPIInfos; // @dynamic supportedGraphicsAPIInfos;
@property(readonly, nonatomic) CDStruct_fc1d2ed0 mainScreenDescriptor; // @dynamic mainScreenDescriptor;
@property(readonly, retain, nonatomic) DYGPUToolsVersionInfo *gputoolsVersionInfo; // @dynamic gputoolsVersionInfo;
@property(readonly, nonatomic) NSError *gputoolsServiceAvailabilityError; // @dynamic gputoolsServiceAvailabilityError;
@property(readonly, nonatomic) BOOL gputoolsServiceAvailable; // @dynamic gputoolsServiceAvailable;
@property(readonly, nonatomic) unsigned int nativePointerSize;
@property(readonly, retain, nonatomic) NSString *productType; // @dynamic productType;
@property(readonly, retain, nonatomic) NSString *build; // @dynamic build;
@property(readonly, retain, nonatomic) NSString *version; // @dynamic version;
@property(readonly, retain, nonatomic) NSString *name; // @dynamic name;
@property(readonly, nonatomic) BOOL sharedPermanentIdentifier; // @dynamic sharedPermanentIdentifier;
@property(readonly, retain, nonatomic) NSString *permanentIdentifier; // @dynamic permanentIdentifier;
@property(readonly, nonatomic) unsigned long long runtimeIdentifier; // @dynamic runtimeIdentifier;
@property(readonly, nonatomic) int platform; // @dynamic platform;
- (id)init;

@end

