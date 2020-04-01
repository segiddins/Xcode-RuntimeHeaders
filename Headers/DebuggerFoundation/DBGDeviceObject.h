//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerFoundation/DBGViewObject.h>

@class NSString;

@interface DBGDeviceObject : DBGViewObject
{
    BOOL _generatesDeviceOrientationNotifications;
    BOOL _multitaskingSupported;
    float _batteryLevel;
    NSString *_deviceDebugDescription;
    NSString *_hardwareType;
    NSString *_localizedModel;
    NSString *_model;
    NSString *_name;
    long long _orientation;
    NSString *_systemName;
    NSString *_systemVersion;
}

@property(copy) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(copy) NSString *systemName; // @synthesize systemName=_systemName;
@property long long orientation; // @synthesize orientation=_orientation;
@property(copy) NSString *name; // @synthesize name=_name;
@property BOOL multitaskingSupported; // @synthesize multitaskingSupported=_multitaskingSupported;
@property(copy) NSString *model; // @synthesize model=_model;
@property(copy) NSString *localizedModel; // @synthesize localizedModel=_localizedModel;
@property(copy) NSString *hardwareType; // @synthesize hardwareType=_hardwareType;
@property BOOL generatesDeviceOrientationNotifications; // @synthesize generatesDeviceOrientationNotifications=_generatesDeviceOrientationNotifications;
@property(copy) NSString *deviceDebugDescription; // @synthesize deviceDebugDescription=_deviceDebugDescription;
@property float batteryLevel; // @synthesize batteryLevel=_batteryLevel;
- (void).cxx_destruct;
- (id)description;
- (void)_updatePropertiesWithSnapshotNode:(id)arg1 forRequest:(id)arg2;

@end

