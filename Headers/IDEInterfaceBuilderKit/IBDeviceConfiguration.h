//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IBDeviceAdaptation, IBDeviceAppearance, IBDeviceLayout, IBDeviceOrientation, IBDeviceRenderMode, IBDeviceSubtype, IBMemberConfiguration, NSArray, NSString;

@interface IBDeviceConfiguration : NSObject
{
    NSString *_accessibilityIdentifier;
    NSString *_displayName;
    IBDeviceSubtype *_subtype;
    IBDeviceAdaptation *_adaptation;
    NSArray *_stateSavingTuple;
}

+ (id)deviceConfigurationWithDeviceSubtype:(id)arg1 adaptation:(id)arg2;
+ (id)deviceConfigurationForSubtypeArchivingName:(id)arg1 orientationArchivingName:(id)arg2 layoutArchivingName:(id)arg3 appearanceArchivingName:(id)arg4 renderModeArchivingName:(id)arg5;
+ (id)deviceConfigurationWithPropertyListUsingArchivingNames:(id)arg1;
+ (id)deviceConfigurationWithPropertyListUsingIdentifiers:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *stateSavingTuple; // @synthesize stateSavingTuple=_stateSavingTuple;
@property(readonly, nonatomic) IBDeviceAdaptation *adaptation; // @synthesize adaptation=_adaptation;
@property(readonly, nonatomic) IBDeviceSubtype *subtype; // @synthesize subtype=_subtype;
- (id)configurationBySwitchingToRenderMode:(id)arg1;
- (id)configurationByRotatingToOrientation:(id)arg1;
- (long long)compareAdaptationDisplayOrderSizesByReverseHeightReverseWidth:(id)arg1;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSString *accessibilityIdentifier;
@property(readonly, nonatomic) IBMemberConfiguration *memberConfiguration;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)propertyListRepresentationUsingIdentifiers;
@property(readonly, nonatomic) IBDeviceRenderMode *renderMode;
@property(readonly, nonatomic) IBDeviceAppearance *appearance;
@property(readonly, nonatomic) IBDeviceLayout *layout;
@property(readonly, nonatomic) IBDeviceOrientation *orientation;
- (id)initWithDeviceSubtype:(id)arg1 adaptation:(id)arg2;

@end

