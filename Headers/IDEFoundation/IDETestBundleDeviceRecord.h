//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface IDETestBundleDeviceRecord : NSObject
{
    NSString *_platformIdentifier;
    NSString *_modelCode;
    NSString *_cpuKind;
    NSNumber *_cpuCount;
    NSNumber *_cpuSpeedInMHz;
    NSNumber *_busSpeedInMHz;
    NSNumber *_physicalCPUCoresPerPackage;
    NSNumber *_logicalCPUCoresPerPackage;
}

- (void).cxx_destruct;
@property(copy) NSNumber *logicalCPUCoresPerPackage; // @synthesize logicalCPUCoresPerPackage=_logicalCPUCoresPerPackage;
@property(copy) NSNumber *physicalCPUCoresPerPackage; // @synthesize physicalCPUCoresPerPackage=_physicalCPUCoresPerPackage;
@property(copy) NSNumber *busSpeedInMHz; // @synthesize busSpeedInMHz=_busSpeedInMHz;
@property(copy) NSNumber *cpuSpeedInMHz; // @synthesize cpuSpeedInMHz=_cpuSpeedInMHz;
@property(copy) NSNumber *cpuCount; // @synthesize cpuCount=_cpuCount;
@property(copy) NSString *cpuKind; // @synthesize cpuKind=_cpuKind;
@property(copy) NSString *modelCode; // @synthesize modelCode=_modelCode;
@property(copy) NSString *platformIdentifier; // @synthesize platformIdentifier=_platformIdentifier;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDeviceRecord:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)initWithPlatformIdentifier:(id)arg1 modelCode:(id)arg2 cpuKind:(id)arg3 cpuCount:(id)arg4 cpuSpeedInMHz:(id)arg5 busSpeedInMHz:(id)arg6 physicalCPUCoresPerPackage:(id)arg7 logicalCPUCoresPerPackage:(id)arg8;
- (id)init;

@end

