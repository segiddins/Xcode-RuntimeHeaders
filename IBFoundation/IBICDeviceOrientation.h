//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICSlotComponent.h>

@interface IBICDeviceOrientation : IBICSlotComponent
{
    long long _orientationValue;
}

+ (id)itemWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 orientationValue:(long long)arg4 displayOrder:(double)arg5;
+ (id)contentsJSONKey;
+ (void)setComponentID:(long long)arg1;
+ (long long)componentID;
@property(readonly) long long orientationValue; // @synthesize orientationValue=_orientationValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToSlotComponentCounterpartWithKnownEqualClass:(id)arg1;
- (id)initWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 orientationValue:(long long)arg4 displayOrder:(double)arg5;
- (long long)componentID;

@end

