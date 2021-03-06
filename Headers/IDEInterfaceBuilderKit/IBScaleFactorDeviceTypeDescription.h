//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBGenericDeviceTypeDescription.h>

@class IBDeviceRenderMode;

@interface IBScaleFactorDeviceTypeDescription : IBGenericDeviceTypeDescription
{
    double _scaleFactor;
    Class _preferredToolManagerClass;
    IBDeviceRenderMode *_renderMode;
}

+ (id)descriptionWithScaleFactor:(double)arg1 toolManagerClass:(Class)arg2 renderMode:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) IBDeviceRenderMode *renderMode; // @synthesize renderMode=_renderMode;
@property(readonly, nonatomic) Class preferredToolManagerClass; // @synthesize preferredToolManagerClass=_preferredToolManagerClass;
@property(readonly, nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqualToDescription:(id)arg1;
- (id)identifier;
- (id)initWithScaleFactor:(double)arg1 toolManagerClass:(Class)arg2 renderMode:(id)arg3;
- (void)populateEnvironment:(id)arg1 launchContext:(id)arg2;

@end

