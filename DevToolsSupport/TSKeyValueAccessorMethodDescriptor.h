//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TSKeyValueAccessorMethodDescriptor : NSObject
{
    NSString *_methodName;
    int _keyStyle;
    unsigned long long _indexOfKey;
}

+ (id)keyValueAccessorMethodDescriptorWithMethodName:(id)arg1 keyStyle:(int)arg2 indexOfKey:(unsigned long long)arg3;
+ (void)initialize;
- (unsigned long long)indexOfKey;
- (int)keyStyle;
- (id)methodName;
- (void)dealloc;
- (id)initWithMethodName:(id)arg1 keyStyle:(int)arg2 indexOfKey:(unsigned long long)arg3;

@end

