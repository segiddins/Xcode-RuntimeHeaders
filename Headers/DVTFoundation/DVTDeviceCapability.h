//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface DVTDeviceCapability : NSObject
{
    NSDictionary *_properties;
}

+ (id)deviceCapabilityWithProperties:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy) NSDictionary *properties; // @synthesize properties=_properties;
- (id)description;
- (BOOL)matchesCapability:(id)arg1;
- (id)initWithProperties:(id)arg1;

@end

