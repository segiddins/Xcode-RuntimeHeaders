//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IBiOSDeviceIconGenerator : NSObject
{
}

+ (id)imageForIconInstance:(id)arg1 explicitSize:(id)arg2 context:(id)arg3;
+ (id)contextForGeneratingProportionalImagesOfInstances:(id)arg1 withMaximumDimension:(double)arg2;
+ (id)_imageWithSize:(struct CGSize)arg1 forInstance:(id)arg2 deviceRect:(struct CGRect)arg3 pointsPerInch:(double)arg4;
+ (void)_drawState:(CDStruct_e4d56984)arg1 forInstance:(id)arg2 mask:(id)arg3;
+ (CDStruct_e4d56984)_updateState:(CDStruct_e4d56984)arg1 forCameraConfigurationForIcon:(id)arg2;
+ (CDStruct_e4d56984)_updateState:(CDStruct_e4d56984)arg1 forHomeButtonForIcon:(id)arg2;
+ (CDStruct_e4d56984)_updateState:(CDStruct_e4d56984)arg1 forScreenAndTopAndBottomBezelsForIcon:(id)arg2;
+ (CDStruct_e4d56984)_updateState:(CDStruct_e4d56984)arg1 forOuterBezelForIcon:(id)arg2;
+ (double)_pointsPerInchForInstance:(id)arg1 destinationSize:(struct CGSize)arg2;

@end

