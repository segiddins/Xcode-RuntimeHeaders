//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

#import <IDEInterfaceBuilderKit/NSCoding-Protocol.h>

@class NSMapTable;

@interface IBMutableBijectiveDictionary : NSMutableDictionary <NSCoding>
{
    NSMapTable *_keyToObjectMap;
    NSMapTable *_objectToKeyMap;
}

- (void).cxx_destruct;
- (id)keyEnumerator;
- (id)keyForObject:(id)arg1;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;
- (void)removeKeyForObject:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;
- (void)_IBMutableBijectiveDictionary_commonInitWithCapacity:(unsigned long long)arg1;

@end

