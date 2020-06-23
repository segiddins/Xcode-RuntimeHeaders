//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IBMemberConfiguration, IBMemberPropertyValue, NSString;

@interface IBPropertyConfigurationValueRecord : NSObject
{
    NSString *_property;
    IBMemberConfiguration *_configuration;
    IBMemberPropertyValue *_value;
}

+ (id)recordWithProperty:(id)arg1 configuration:(id)arg2 value:(id)arg3;
- (void).cxx_destruct;
@property(readonly) IBMemberPropertyValue *value; // @synthesize value=_value;
@property(readonly) IBMemberConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly) NSString *property; // @synthesize property=_property;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPropertyConfigurationValueRecord:(id)arg1;
- (unsigned long long)hash;
- (id)initWithProperty:(id)arg1 configuration:(id)arg2 value:(id)arg3;

@end

