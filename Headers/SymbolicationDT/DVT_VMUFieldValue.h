//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVT_VMUFieldInfo;

__attribute__((visibility("hidden")))
@interface DVT_VMUFieldValue : NSObject
{
    DVT_VMUFieldInfo *_field;
    unsigned long long _value;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long value;
@property(readonly, nonatomic) DVT_VMUFieldInfo *field;
- (id)initWithField:(id)arg1 value:(unsigned long long)arg2;

@end

