//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DebugHierarchyObjectProtocolHelper : NSObject
{
}

+ (BOOL)v1_objectImplementsRequiredAdditionalGroupMethods:(id)arg1;
+ (BOOL)v1_objectImplementsRequiredChildGroupMethods:(id)arg1;
+ (void)enumerateAdditionalGroupsAndObjectsOfObject:(id)arg1 withType:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (id)childObjectsForObject:(id)arg1 withType:(id)arg2 outGroupingID:(id *)arg3 outOptions:(id *)arg4;
+ (void)updateDebugHierarchyValueForPropertyWithDescription:(id)arg1 onObject:(id)arg2;
+ (id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 vendingClass:(Class)arg3 outOptions:(id *)arg4 outError:(id *)arg5;
+ (id)debugHierarchyPropertyDescriptionsOfClass:(Class)arg1;
+ (id)debugHierarchyObjectsInGroupWithID:(id)arg1 outOptions:(id *)arg2 vendingClass:(Class)arg3 onObject:(id)arg4;
+ (id)debugHierarchyAdditionalGroupingIDsOfClass:(Class)arg1;
+ (id)debugHierarchyChildGroupingIDOfClass:(Class)arg1;
+ (long long)debugHierarchyVisibilityOfObject:(id)arg1;
+ (BOOL)objectImplements_debugHierarchyVisibility:(id)arg1;
+ (BOOL)classOverrides_debugHierarchyPropertyDescriptions:(Class)arg1;
+ (BOOL)classImplements_debugHierarchyValueForPropertyWithName:(Class)arg1;
+ (BOOL)classImplementsRequiredAdditionalGroupMethods:(Class)arg1;
+ (BOOL)classImplementsRequiredChildGroupMethods:(Class)arg1;

@end

