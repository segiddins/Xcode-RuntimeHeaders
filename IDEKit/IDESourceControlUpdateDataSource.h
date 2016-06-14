//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDESourceControlReviewFilesDataSource.h>

@class NSArray;

@interface IDESourceControlUpdateDataSource : IDESourceControlReviewFilesDataSource
{
    NSArray *_operationInfo;
}

@property(copy) NSArray *operationInfo; // @synthesize operationInfo=_operationInfo;
- (void).cxx_destruct;
- (void)reviewFilesNavigator:(id)arg1 outlineView:(id)arg2 willDisplayCell:(id)arg3 forNavigableItem:(id)arg4;
- (id)localStatusForNavigableItem:(id)arg1;
- (id)reviewFilesNavigator:(id)arg1 documentLocationForNavigableItem:(id)arg2;
- (id)operationInfoForWorkingTree:(id)arg1;
- (id)statusCellsForCategoryName:(id)arg1 representedObject:(id)arg2;
- (id)conflictCategoryStatusCellsWithRepresentedObject:(id)arg1;
- (id)sourceControlCategoryStatusCellsWithRepresentedObject:(id)arg1;
- (id)init;

@end

