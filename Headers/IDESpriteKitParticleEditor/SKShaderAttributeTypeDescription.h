//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SKShaderAttributeTypeDescription : NSObject
{
    id _defaultValue;
    NSString *_name;
    long long _uniformType;
}

+ (id)customAttributeType:(long long)arg1 name:(id)arg2 defaultValue:(id)arg3;
- (void).cxx_destruct;
@property(readonly) long long uniformType; // @synthesize uniformType=_uniformType;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
- (id)initWithType:(long long)arg1 name:(id)arg2 defaultValue:(id)arg3;

@end

