//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSCopying-Protocol.h>
#import <IDEInterfaceBuilderKit/NSFastEnumeration-Protocol.h>
#import <IDEInterfaceBuilderKit/NSMutableCopying-Protocol.h>
#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class NSArray, NSEnumerator, NSMutableArray, NSMutableOrderedSet, NSMutableSet, NSSet, NSString, Protocol;
@protocol IBCollection;

@protocol IBCollection <NSObject, NSCopying, NSFastEnumeration, NSMutableCopying>
+ (id)ib_collectionWithObject:(id)arg1;
+ (id)ib_emptyCollection;
+ (Class)ib_mutableClass;
- (void)ib_getObjects:(id *)arg1;
- (void)ib_removeObjectsInReceiverFromArray:(NSMutableArray *)arg1;
- (void)ib_removeObjectsInReceiverFromOrderedSet:(NSMutableOrderedSet *)arg1;
- (void)ib_removeObjectsInReceiverFromSet:(NSMutableSet *)arg1;
- (id)ib_maximumObjectUsingComparator:(long long (^)(id, id))arg1;
- (id)ib_minimumObjectUsingComparator:(long long (^)(id, id))arg1;
- (long long)ib_numberOfObjectsPassingTest:(BOOL (^)(id))arg1;
- (NSArray *)ib_arrayByMappingBlock:(id (^)(id))arg1;
- (NSArray *)ib_arrayBySortingUsingComparator:(long long (^)(id, id))arg1;
- (NSArray *)ib_arrayBySortingUsingSelector:(SEL)arg1 onKeyPath:(NSString *)arg2;
- (NSArray *)ib_arrayBySortingUsingSelector:(SEL)arg1;
- (void)ib_enumerateObjectsUsingMutatingBlock:(void (^)(id))arg1;
- (void)ib_enumerateCopyOfObjectsUsingBlock:(void (^)(id))arg1;
- (void)ib_enumerateObjectsUsingBlock:(void (^)(id))arg1;
- (id <IBCollection>)ib_collectionByMappingAndFilteringWithBlock:(id (^)(id))arg1;
- (id <IBCollection>)ib_collectionByRemovingObject:(id)arg1;
- (id <IBCollection>)ib_collectionByAddingObject:(id)arg1;
- (id <IBCollection>)ib_collectionByRemovingObjectsInSet:(NSSet *)arg1;
- (id <IBCollection>)ib_collectionByAddingObjectsFromCollection:(id <IBCollection>)arg1;
- (id <IBCollection>)ib_collectionByRemovingObjectsFromCollection:(id <IBCollection>)arg1;
- (id <IBCollection>)ib_collectionByMappingBlock:(id (^)(id))arg1;
- (id <IBCollection>)ib_collectionByFilteringUsingBlock:(BOOL (^)(id))arg1;
- (id <IBCollection>)ib_collectionByRemovingNulls;
- (id)ib_onlyObjectPassingTest:(BOOL (^)(id))arg1;
- (id)ib_firstObjectPassingTest:(BOOL (^)(id))arg1;
- (BOOL)ib_objectsAreStrictlyContainedBySet:(NSSet *)arg1;
- (BOOL)ib_objectsAreContainedBySet:(NSSet *)arg1;
- (BOOL)ib_anyObjectsPassTest:(BOOL (^)(id))arg1;
- (BOOL)ib_allObjectsPassTest:(BOOL (^)(id))arg1;
- (id)mutableCopy;
- (id)copy;
- (Class)ib_mutableClass;
- (NSEnumerator *)objectEnumerator;
- (NSSet *)ib_uniqueObjects;
- (NSArray *)allObjects;
- (id <IBCollection>)ib_objectsConformingToProtocol:(Protocol *)arg1;
- (id <IBCollection>)ib_objectsOfClass:(Class)arg1;
- (unsigned long long)count;
- (BOOL)containsObject:(id)arg1;
- (id)ib_onlyObject;
- (id)anyObject;
@end
