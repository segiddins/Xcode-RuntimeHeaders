//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SMSourceNodeTypes : NSObject
{
}

+ (BOOL)nodeType:(short)arg1 conformsToNodeTypesInList:(const long long *)arg2;
+ (long long *)nodeTypeListForTypeNames:(id)arg1;
+ (BOOL)nodeType:(short)arg1 conformsToNodeTypeNamed:(id)arg2;
+ (long long)nodeTypesCount;
+ (id)nodeTypeNameForId:(short)arg1;
+ (short)registerNodeTypeNamed:(id)arg1;
+ (void)initialize;

@end

