//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface IBCLIOptionIndex : NSObject
{
    struct option *_longOptions;
    char *_shortOptions;
    NSDictionary *_optionDescriptionsByCode;
    NSArray *_descriptions;
    NSArray *_alternateNames;
    long long _alternatesCount;
}

- (void).cxx_destruct;
- (id)optionDescriptionForCode:(long long)arg1;
- (const char *)shortOptions;
- (struct option *)longOptions;
- (void)dealloc;
- (id)initWithDescriptions:(id)arg1 alternateNames:(id)arg2;

@end

