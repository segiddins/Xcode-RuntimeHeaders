//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDENavigableItem, NSIndexSet, NSSet;

@protocol IDEStructureEditingGroupingTarget <NSObject>
- (IDENavigableItem *)actualNavigableItem;
- (long long)actualChildIndex;
- (void)structureEditingGroupSubitemsAtIndexes:(NSIndexSet *)arg1 completionBlock:(void (^)(BOOL, NSError *))arg2;
- (BOOL)structureEditingCanGroupSubitemsAtIndexes:(NSIndexSet *)arg1;
- (BOOL)structureEditingAddNewSubgroup;
- (BOOL)structureEditingCanAddNewSubgroup;
- (NSSet *)allowedFileTypesForNewFile;
@end

