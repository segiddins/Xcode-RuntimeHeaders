//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface DVTDeviceCapability : NSObject
{
    NSDictionary *_properties;
}

+ (id)deviceCapabilityWithProperties:(id)arg1;
@property(readonly, copy) NSDictionary *properties; // @synthesize properties=_properties;
- (void).cxx_destruct;
- (id)description;
- (BOOL)matchesCapability:(id)arg1;
- (id)initWithProperties:(id)arg1;

@end

