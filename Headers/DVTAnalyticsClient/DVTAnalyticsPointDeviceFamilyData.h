//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTAnalyticsClient/DVTServicesJSONSerialization-Protocol.h>

@class NSNumber, NSString;

@interface DVTAnalyticsPointDeviceFamilyData : NSObject <DVTServicesJSONSerialization>
{
    NSString *_deviceFamily;
    NSNumber *_value;
}

+ (id)objectFromJSONRepresentation:(id)arg1 error:(id *)arg2;
@property(readonly) NSNumber *value; // @synthesize value=_value;
@property(readonly) NSString *deviceFamily; // @synthesize deviceFamily=_deviceFamily;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)JSONRepresentation;
- (id)initWithDeviceFamily:(id)arg1 value:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

