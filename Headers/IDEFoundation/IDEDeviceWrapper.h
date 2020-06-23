//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol DVTBasicDevice;

@interface IDEDeviceWrapper : NSObject
{
    id <DVTBasicDevice> _device;
    id _container;
    NSString *_accessor;
}

+ (id)deviceWrapperForDevice:(id)arg1 forContainer:(id)arg2 andAccessor:(id)arg3;
@property(readonly, copy) NSString *accessor; // @synthesize accessor=_accessor;
@property(readonly) id container; // @synthesize container=_container;
@property(readonly) id <DVTBasicDevice> device; // @synthesize device=_device;
- (void).cxx_destruct;
- (id)deviceModel;
- (id)operatingSystemVersion;
- (id)deviceIdentifier;
- (BOOL)generic;
- (id)name;
- (id)objectSpecifier;

@end

