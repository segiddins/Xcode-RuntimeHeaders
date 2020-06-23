//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

@class NSMapTable, NSMutableOrderedSet;

@interface IBMutableOrderedDictionary : NSMutableDictionary
{
    NSMutableOrderedSet *_set;
    NSMapTable *_backingMapTable;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)allKeys;
- (id)lastValue;
- (id)lastKey;
- (id)firstValue;
- (id)firstKey;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (id)keyAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfKey:(id)arg1;
- (unsigned long long)count;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjects:(id)arg1 forKeys:(id)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

@end

