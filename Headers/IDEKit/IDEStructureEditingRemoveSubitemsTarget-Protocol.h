//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDEGroup, NSIndexSet, NSSet;

@protocol IDEStructureEditingRemoveSubitemsTarget <NSObject>
@property(readonly) IDEGroup *targetGroup;
- (BOOL)structureEditingRemoveSubitemsAtIndexes:(NSIndexSet *)arg1 error:(id *)arg2;
- (NSSet *)structureEditingFilePathsForGroupSubitemsFilteringOutNonProjectItemsAtIndexes:(NSIndexSet *)arg1;
- (NSSet *)structureEditingFileURLsForSubitemsAtIndexes:(NSIndexSet *)arg1;
- (BOOL)structureEditingCanRemoveSubitemsAtIndexes:(NSIndexSet *)arg1;
@end

