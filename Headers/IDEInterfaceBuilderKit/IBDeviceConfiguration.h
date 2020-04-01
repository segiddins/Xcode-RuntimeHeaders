//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBDeviceAdaptation, IBDeviceAppearance, IBDeviceLayout, IBDeviceOrientation, IBDeviceSubtype, IBMemberConfiguration, NSArray, NSString;

@interface IBDeviceConfiguration : NSObject
{
    NSString *_accessibilityIdentifier;
    NSString *_displayName;
    IBDeviceSubtype *_subtype;
    IBDeviceAdaptation *_adaptation;
    NSArray *_stateSavingTuple;
}

+ (id)deviceConfigurationWithDeviceSubtype:(id)arg1 adaptation:(id)arg2;
+ (id)deviceConfigurationWithPropertyList:(id)arg1;
@property(readonly, nonatomic) NSArray *stateSavingTuple; // @synthesize stateSavingTuple=_stateSavingTuple;
@property(readonly, nonatomic) IBDeviceAdaptation *adaptation; // @synthesize adaptation=_adaptation;
@property(readonly, nonatomic) IBDeviceSubtype *subtype; // @synthesize subtype=_subtype;
- (void).cxx_destruct;
- (id)configurationByRotatingToOrientation:(id)arg1;
- (long long)compareAdaptationDisplayOrderSizesByReverseHeightReverseWidth:(id)arg1;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSString *accessibilityIdentifier;
@property(readonly, nonatomic) IBMemberConfiguration *memberConfiguration;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)propertyListRepresentation;
@property(readonly, nonatomic) IBDeviceAppearance *appearance;
@property(readonly, nonatomic) IBDeviceLayout *layout;
@property(readonly, nonatomic) IBDeviceOrientation *orientation;
- (id)initWithDeviceSubtype:(id)arg1 adaptation:(id)arg2;

@end

