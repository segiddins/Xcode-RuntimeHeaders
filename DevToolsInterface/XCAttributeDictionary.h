//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@interface XCAttributeDictionary : NSDictionary
{
    unsigned long long numElements;
    unsigned long long valuesSize;
    unsigned long long hash;
    id values[1];
}

+ (id)newWithDictionary:(id)arg1;
+ (id)newWithKeys:(id *)arg1 values:(id *)arg2 count:(unsigned long long)arg3;
+ (void)initialize;
- (unsigned long long)hash;
- (BOOL)isEqualToDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)release;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;
- (id)newWithKey:(id)arg1 object:(id)arg2;

@end

