//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEFolderRootGroup.h>

@interface _IDEPlaygroundCommonRootGroup : IDEFolderRootGroup
{
}

- (BOOL)canStructureEditRemoveSubitemsAtIndexes:(id)arg1;
- (id)_indexesOfSubitemsThatExistAtIndexes:(id)arg1;
- (BOOL)canStructureEditInsertFileURLs:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)canStructureEditInsertSubitems:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)allowedFileTypesOfChildItems;
- (BOOL)allowUserModificationOfSubitems;
- (id)computedSubitemsWithOldSubitems:(id)arg1;
- (BOOL)subitemsAreEditable;
- (BOOL)subitemsAreComputed;

@end

