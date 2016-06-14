//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBDeviceAdaptationType, IBDeviceOrientation, IBMemberConfiguration, NSBundle, NSString;

@interface IBDeviceAdaptation : NSObject
{
    IBDeviceAdaptationType *_type;
    IBDeviceOrientation *_orientation;
    IBMemberConfiguration *_memberConfiguration;
    NSBundle *_bundle;
    NSString *_imageName;
    NSString *_legacySimulatedMetricsIdentifier;
    struct CGSize _size;
}

@property(readonly, nonatomic) NSString *legacySimulatedMetricsIdentifier; // @synthesize legacySimulatedMetricsIdentifier=_legacySimulatedMetricsIdentifier;
@property(readonly, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) IBMemberConfiguration *memberConfiguration; // @synthesize memberConfiguration=_memberConfiguration;
@property(readonly, nonatomic) IBDeviceOrientation *orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) IBDeviceAdaptationType *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(id)arg1 orientation:(id)arg2 extensionParameter:(id)arg3;
- (id)initWithType:(id)arg1 orientation:(id)arg2 memberConfiguration:(id)arg3 size:(struct CGSize)arg4 bundle:(id)arg5 imageName:(id)arg6 legacySimulatedMetricsIdentifier:(id)arg7;

@end

