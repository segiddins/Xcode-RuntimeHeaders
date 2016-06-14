//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableSet.h>

@interface DTMutableOrderedSet : NSMutableSet
{
    CDStruct_f2932e27 callbacks;
    struct DTBucketTag *freelist;
    struct DTBucketTag **buckets;
    struct DTBucketTag *head;
    long long breadth;
    long long count;
    unsigned long long changeCount;
}

+ (CDStruct_f2932e27)cocoaSetCallbacks;
+ (CDStruct_f2932e27)pointerSetCallbacks;
- (id)description;
- (id)firstObject;
- (id)lastObject;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectEnumerator;
- (id)member:(id)arg1;
- (long long)indexOfObject:(id)arg1;
- (unsigned long long)count;
- (short)changeCount;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(long long)arg2;
- (void)insertObject:(id)arg1 after:(struct DTBucketTag *)arg2;
- (void)setSet:(id)arg1;
- (void)unionSet:(id)arg1;
- (void)minusSet:(id)arg1;
- (void)intersectSet:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)resize:(long long)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;
- (id)initWithCallBacks:(CDStruct_f2932e27)arg1;
- (Class)classForCoder;

@end

