//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (IBMutableDictionaryAdditions)
+ (Class)ib_mutableClass;
- (void)ib_setOrClearObject:(id)arg1 forKey:(id)arg2;
- (void)ib_mapValues:(CDUnknownBlockType)arg1;
- (void)ib_overrideObject:(id)arg1 forKey:(id)arg2 during:(CDUnknownBlockType)arg3;
- (void)ib_setObject:(id)arg1 forClassKey:(Class)arg2;
- (void)ib_setObject:(id)arg1 forKeys:(id)arg2;
- (void)ib_setObjectIfNonNil:(id)arg1 forKey:(id)arg2;
- (void)ib_decrementIntegerForKey:(id)arg1;
- (void)ib_incrementIntegerForKey:(id)arg1;
- (void)ib_setDouble:(double)arg1 forKey:(id)arg2;
- (void)ib_setInteger:(long long)arg1 forKey:(id)arg2;
- (void)ib_setObject:(id)arg1 forKey:(id)arg2 inDictionaryForKey:(id)arg3 inDictionaryForKey:(id)arg4 inDictionaryForKey:(id)arg5 subDictionaryClass:(Class)arg6;
- (void)ib_setObject:(id)arg1 forKey:(id)arg2 inDictionaryForKey:(id)arg3 inDictionaryForKey:(id)arg4 inDictionaryForKey:(id)arg5;
- (void)ib_setObject:(id)arg1 forKey:(id)arg2 inDictionaryForKey:(id)arg3 inDictionaryForKey:(id)arg4 subDictionaryClass:(Class)arg5;
- (void)ib_setObject:(id)arg1 forKey:(id)arg2 inDictionaryForKey:(id)arg3 inDictionaryForKey:(id)arg4;
- (void)ib_setObject:(id)arg1 forKey:(id)arg2 inDictionaryForKey:(id)arg3 subDictionaryClass:(Class)arg4;
- (void)ib_setObject:(id)arg1 forKey:(id)arg2 inDictionaryForKey:(id)arg3;
- (void)ib_setObjectIfNonNil:(id)arg1 forKey:(id)arg2 inDictionaryForKey:(id)arg3;
- (void)ib_removeLastObjectFromArrayForKey:(id)arg1;
- (void)ib_removeObjectsForKeys:(id)arg1;
- (id)ib_removeAndReturnObjectForKey:(id)arg1;
- (void)ib_removeObject:(id)arg1 fromSetForKey:(id)arg2;
- (void)ib_removeObject:(id)arg1 fromSetForKey:(id)arg2 inDictionaryForKey:(id)arg3;
- (void)ib_removeObjectForKey:(id)arg1 inDictionaryForKey:(id)arg2 inDictionaryForKey:(id)arg3;
- (void)ib_removeObjectForKey:(id)arg1 inDictionaryForKey:(id)arg2;
- (id)ib_objectForKey:(id)arg1 inDictionaryForKey:(id)arg2 inDictionaryForKey:(id)arg3 creatingIfNecessaryWithBlock:(CDUnknownBlockType)arg4;
- (id)ib_objectForKey:(id)arg1 inDictionaryForKey:(id)arg2 creatingIfNecessaryWithBlock:(CDUnknownBlockType)arg3;
- (id)ib_objectForKey:(id)arg1 creatingIfNecessaryWithBlock:(CDUnknownBlockType)arg2;
- (void)ib_insertObject:(id)arg1 intoArrayForKey:(id)arg2 atIndex:(long long)arg3;
- (void)ib_addObject:(id)arg1 toCountedSetForKey:(id)arg2 inDictionaryForKey:(id)arg3;
- (void)ib_addObject:(id)arg1 toCountedSetForKey:(id)arg2;
- (void)ib_addObject:(id)arg1 toSetForKey:(id)arg2 inDictionaryForKey:(id)arg3 subDictionaryClass:(Class)arg4;
- (void)ib_addObject:(id)arg1 toSetForKey:(id)arg2 inDictionaryForKey:(id)arg3;
- (void)ib_addObject:(id)arg1 toSetForKey:(id)arg2;
- (void)ib_addObject:(id)arg1 toArrayForKey:(id)arg2 inDictionaryForKey:(id)arg3 inDictionaryForKey:(id)arg4 subDictionaryClass:(Class)arg5;
- (void)ib_addObject:(id)arg1 toArrayForKey:(id)arg2 inDictionaryForKey:(id)arg3 subDictionaryClass:(Class)arg4;
- (void)ib_addObjects:(id)arg1 toSetForKey:(id)arg2 inDictionaryForKey:(id)arg3 inDictionaryForKey:(id)arg4;
- (void)ib_addObjectsFromSet:(id)arg1 toSetForKey:(id)arg2 inDictionaryForKey:(id)arg3;
- (void)ib_addObjects:(id)arg1 toSetForKey:(id)arg2 inDictionaryForKey:(id)arg3;
- (void)ib_addObject:(id)arg1 toSetForKey:(id)arg2 inDictionaryForKey:(id)arg3 inDictionaryForKey:(id)arg4;
- (void)ib_addObject:(id)arg1 toArrayForKey:(id)arg2 inDictionaryForKey:(id)arg3 inDictionaryForKey:(id)arg4;
- (void)ib_addObject:(id)arg1 toArrayForKey:(id)arg2 inDictionaryForKey:(id)arg3;
- (void)ib_addObject:(id)arg1 toArrayForKey:(id)arg2;
- (void)ib_addObjectsFromSet:(id)arg1 toSetForKey:(id)arg2;
- (void)ib_addObjects:(id)arg1 toSetForKey:(id)arg2;
- (void)ib_addObjects:(id)arg1 toArrayForKey:(id)arg2;
- (id)ib_collectionOfClass:(Class)arg1 forKey:(id)arg2;
- (void)ib_setObject:(id)arg1 forKey:(id)arg2 inIdentityDictionaryForKey:(id)arg3;
@end

