//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SKUserDataTypeDescription : NSObject
{
    id _defaultValue;
    NSString *_name;
    unsigned long long _type;
}

+ (id)customUserDataType:(unsigned long long)arg1 name:(id)arg2 defaultValue:(id)arg3;
- (void).cxx_destruct;
@property(readonly) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
- (id)initWithType:(unsigned long long)arg1 name:(id)arg2 defaultValue:(id)arg3;

@end

