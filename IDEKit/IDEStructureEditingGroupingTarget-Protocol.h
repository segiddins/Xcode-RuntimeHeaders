//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDENavigableItem, NSIndexSet;

@protocol IDEStructureEditingGroupingTarget <NSObject>
- (IDENavigableItem *)actualNavigableItem;
- (long long)actualChildIndex;
- (BOOL)structureEditingGroupSubitemsAtIndexes:(NSIndexSet *)arg1 groupIndex:(long long *)arg2;
- (BOOL)structureEditingCanGroupSubitemsAtIndexes:(NSIndexSet *)arg1;
- (BOOL)structureEditingAddNewSubgroup;
- (BOOL)structureEditingCanAddNewSubgroup;
@end

