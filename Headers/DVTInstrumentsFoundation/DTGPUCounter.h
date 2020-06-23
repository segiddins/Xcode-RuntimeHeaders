//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface DTGPUCounter : NSObject
{
    unsigned int _groupIndex;
    unsigned int _multiplier;
    NSString *_name;
    unsigned long long _maxValue;
    NSArray *_rawCounters;
    NSString *_counterDescription;
    NSString *_type;
    NSString *_functionName;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int multiplier; // @synthesize multiplier=_multiplier;
@property(retain, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *counterDescription; // @synthesize counterDescription=_counterDescription;
@property(retain, nonatomic) NSArray *rawCounters; // @synthesize rawCounters=_rawCounters;
@property(nonatomic) unsigned int groupIndex; // @synthesize groupIndex=_groupIndex;
@property(nonatomic) unsigned long long maxValue; // @synthesize maxValue=_maxValue;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)infoArray;
- (id)initWithName:(id)arg1 maxValue:(unsigned long long)arg2;

@end
