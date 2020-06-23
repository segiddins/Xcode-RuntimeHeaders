//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IBMemberConfiguration, IBMemberPropertyValue, NSString;

@interface IBMemberPropertyConfigurationValueRecord : NSObject
{
    NSObject *_member;
    NSString *_property;
    IBMemberConfiguration *_configuration;
    IBMemberPropertyValue *_value;
}

+ (id)recordWithMember:(id)arg1 property:(id)arg2 configuration:(id)arg3 value:(id)arg4;
@property(readonly) IBMemberPropertyValue *value; // @synthesize value=_value;
@property(readonly) IBMemberConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly) NSString *property; // @synthesize property=_property;
@property(readonly) NSObject *member; // @synthesize member=_member;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToMemberPropertyConfigurationValueRecord:(id)arg1;
- (unsigned long long)hash;
- (id)initWithMember:(id)arg1 property:(id)arg2 configuration:(id)arg3 value:(id)arg4;

@end

