//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface _TtC18DVTAnalyticsClient44AnalyticsMetricsDeviceFamilyCriteriaResponse : NSObject
{
    // Error parsing type: , name: familyIdentifier
    // Error parsing type: , name: displayName
    // Error parsing type: , name: devices
    // Error parsing type: , name: isRepresented
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)dvt_servicesTypeInstanceDidFinishLoadingWithContext:(id)arg1 error:(id *)arg2;
@property(nonatomic, copy) NSString *isRepresented;
@property(nonatomic, copy) NSArray *devices;
@property(nonatomic, copy) NSString *displayName;
@property(nonatomic, copy) NSString *familyIdentifier;

@end

