//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/GPUTraceGroupItem.h>

@class NSMutableDictionary;

@interface GPUTraceCommandEncoderGroupItem : GPUTraceGroupItem
{
    NSMutableDictionary *_wrappedDependencyResourcesMap;
}

+ (id)keyPathsForValuesAffectingNavigableItem_childRepresentedObjects;
+ (id)keyPathsForValuesAffectingNavigableItem_isLeaf;
- (void).cxx_destruct;
- (id)wrappedResourceForId:(id)arg1 slotIndex:(unsigned long long)arg2 ofType:(unsigned int)arg3;
- (id)initWithController:(id)arg1 parent:(id)arg2 identifier:(id)arg3 groupType:(unsigned int)arg4 functionIndex:(int)arg5 descText:(id)arg6;
- (id)navigableItem_childRepresentedObjects;

@end

