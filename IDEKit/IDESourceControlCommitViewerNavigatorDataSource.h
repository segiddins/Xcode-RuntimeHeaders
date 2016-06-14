//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/IDEReviewFilesDataSource-Protocol.h>

@class DVTStackBacktrace, IDENavigatorDataCell, IDESourceControlCommitViewerComparisonEditorDataSource, NSArray, NSMutableSet, NSString;

@interface IDESourceControlCommitViewerNavigatorDataSource : NSObject <IDEReviewFilesDataSource, DVTInvalidation>
{
    IDENavigatorDataCell *_cachedSourceTreeItemCell;
    IDENavigatorDataCell *_cachedRepositoryContainerCell;
    NSArray *_navigableItems;
    NSMutableSet *_bindingTokens;
    IDESourceControlCommitViewerComparisonEditorDataSource *_comparisonEditorDataSource;
}

+ (void)initialize;
@property __weak IDESourceControlCommitViewerComparisonEditorDataSource *comparisonEditorDataSource; // @synthesize comparisonEditorDataSource=_comparisonEditorDataSource;
@property(retain) NSArray *navigableItems; // @synthesize navigableItems=_navigableItems;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)reviewFilesNavigator:(id)arg1 documentLocationForNavigableItem:(id)arg2;
- (id)reviewFilesNavigator:(id)arg1 outlineView:(id)arg2 dataCellForNavigableItem:(id)arg3;
- (id)repositoryContainerCell;
- (id)sourceTreeItemCell;
- (id)sourceControlCategoryStatusCellsWithRepresentedObject:(id)arg1;
- (id)issueNavigableItems;
- (id)flatNavigableItems;
- (id)fileSystemNavigableItems;
- (id)workspaceNavigableItems;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

