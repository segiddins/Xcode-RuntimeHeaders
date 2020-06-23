//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface IBCLIOptionDescription : NSObject
{
    char *_longOptionName;
    BOOL _hasArgument;
    unsigned long long _type;
    NSNumber *_code;
    NSString *_keyPath;
    NSString *_extendedParametersKey;
}

+ (id)optionDescriptionsFromStaticDescriptions:(CDStruct_071f1a99 *)arg1 count:(long long)arg2;
- (void).cxx_destruct;
@property(readonly) NSString *extendedParametersKey; // @synthesize extendedParametersKey=_extendedParametersKey;
@property(readonly) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly) NSNumber *code; // @synthesize code=_code;
@property(readonly) unsigned long long type; // @synthesize type=_type;
@property(readonly) BOOL hasArgument; // @synthesize hasArgument=_hasArgument;
@property(readonly) const char *longOptionName; // @synthesize longOptionName=_longOptionName;
- (id)description;
- (void)dealloc;
- (id)initWithStaticOptionDescription:(CDStruct_071f1a99)arg1;

@end

