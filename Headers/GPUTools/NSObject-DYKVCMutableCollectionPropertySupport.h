//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (DYKVCMutableCollectionPropertySupport)
+ (void)dy_synthesizeMutableSetProperty:(id)arg1 withInstanceVariable:(id)arg2;
+ (void)dy_synthesizeMutableArrayProperty:(id)arg1 withInstanceVariable:(id)arg2;
+ (id)_dy_mutableCollectionPropertyInfo;
- (id)dy_mutableSetPrimitiveMember:(id)arg1 forProperty:(id)arg2;
- (id)dy_mutableSetPrimitiveObjectEnumeratorForProperty:(id)arg1;
- (unsigned long long)dy_mutableSetPrimitiveCountForProperty:(id)arg1;
- (void)dy_mutableSetPrimitiveIntersectObjects:(id)arg1 forProperty:(id)arg2;
- (void)dy_mutableSetPrimitiveRemoveObjects:(id)arg1 forProperty:(id)arg2;
- (void)dy_mutableSetPrimitiveAddObjects:(id)arg1 forProperty:(id)arg2;
- (void)dy_mutableSetPrimitiveRemoveObject:(id)arg1 forProperty:(id)arg2;
- (void)dy_mutableSetPrimitiveAddObject:(id)arg1 forProperty:(id)arg2;
- (void)dy_mutableSetPrimitiveSetValue:(id)arg1 forProperty:(id)arg2;
- (id)dy_mutableSetPrimitiveGetValueForProperty:(id)arg1;
- (id)dy_mutableSetPrimitiveGetMutableValueForProperty:(id)arg1;
- (void)dy_mutableArrayPrimitiveGetObjects:(id *)arg1 range:(struct _NSRange)arg2 forProperty:(id)arg3;
- (id)dy_mutableArrayPrimitiveObjectsAtIndexes:(id)arg1 forProperty:(id)arg2;
- (id)dy_mutableArrayPrimitiveObjectAtIndex:(unsigned long long)arg1 forProperty:(id)arg2;
- (unsigned long long)dy_mutableArrayPrimitiveCountForProperty:(id)arg1;
- (void)dy_mutableArrayPrimitiveReplaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2 forProperty:(id)arg3;
- (void)dy_mutableArrayPrimitiveRemoveObjectsAtIndexes:(id)arg1 forProperty:(id)arg2;
- (void)dy_mutableArrayPrimitiveInsertObjects:(id)arg1 atIndexes:(id)arg2 forProperty:(id)arg3;
- (void)dy_mutableArrayPrimitiveReplaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 forProperty:(id)arg3;
- (void)dy_mutableArrayPrimitiveRemoveObjectAtIndex:(unsigned long long)arg1 forProperty:(id)arg2;
- (void)dy_mutableArrayPrimitiveInsertObject:(id)arg1 atIndex:(unsigned long long)arg2 forProperty:(id)arg3;
- (void)dy_mutableArrayPrimitiveSetValue:(id)arg1 forProperty:(id)arg2;
- (id)dy_mutableArrayPrimitiveGetValueForProperty:(id)arg1;
- (id)dy_mutableArrayPrimitiveGetMutableValueForProperty:(id)arg1;
- (id)_dy_mutableCollectionPropertyInfo;
@end

