//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IBCLIOptionAlternateName : NSObject
{
    char *_longOptionName;
    long long _code;
}

+ (id)optionAlternateNamesFromStaticDescriptions:(CDStruct_ac8ae556 *)arg1 count:(long long)arg2;
@property(readonly) long long code; // @synthesize code=_code;
@property(readonly) const char *longOptionName; // @synthesize longOptionName=_longOptionName;
- (id)description;
- (void)dealloc;
- (id)initWithStaticAlternateName:(CDStruct_ac8ae556)arg1;

@end

