//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/DVTDynamicTableViewDataSource-Protocol.h>
#import <IDEKit/DVTDynamicTableViewDelegate-Protocol.h>
#import <IDEKit/NSCacheDelegate-Protocol.h>
#import <IDEKit/NSSplitViewDelegate-Protocol.h>

@class DVTBorderedView, DVTDynamicTableView, DVTObservingToken, DVTPerformanceMetric, DVTReplacementView, IDEBatchFindNavigator, IDEBatchFindResultSet, IDEBatchFindResultsOutlineController, NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSSet, NSString;

@interface IDEBatchFindReplacePreviewController : IDEViewController <DVTDynamicTableViewDataSource, DVTDynamicTableViewDelegate, NSSplitViewDelegate, NSCacheDelegate>
{
    DVTReplacementView *_resultsReplacementView;
    NSArray *_orderedGroupNavigables;
    NSMapTable *_previewProviderByGroupNavigable;
    NSMutableArray *_rowViewObserverTokens;
    NSMutableArray *_bindingTokens;
    NSMutableDictionary *_rowViewCache;
    NSMutableArray *_rowViews;
    NSString *_replaceString;
    DVTDynamicTableView *_dynamicTableView;
    DVTBorderedView *_bottomBorder;
    NSMapTable *_disclosedTokenMapTable;
    DVTObservingToken *_resultSetWatcher;
    DVTObservingToken *_selectionWatcher;
    BOOL _hasSelectedItems;
    BOOL _hasCheckedItems;
    BOOL _executingCheckedResultNavigablesObserver;
    BOOL _isViewReadyToPopulateTable;
    IDEBatchFindNavigator *_findNavigator;
    DVTPerformanceMetric *_rebuildSectionsPerfMetric;
    IDEBatchFindResultSet *_resultSetToInstallWhenViewIsReady;
}

+ (id)logAspect;
+ (Class)_previewClassForType:(id)arg1;
+ (id)_orderedPreviewExtensionsSupportingType:(id)arg1;
+ (id)_allPreviewExtensions;
+ (void)initialize;
@property(retain) IDEBatchFindResultSet *resultSetToInstallWhenViewIsReady; // @synthesize resultSetToInstallWhenViewIsReady=_resultSetToInstallWhenViewIsReady;
@property BOOL hasCheckedItems; // @synthesize hasCheckedItems=_hasCheckedItems;
@property(retain) IDEBatchFindNavigator *findNavigator; // @synthesize findNavigator=_findNavigator;
@property BOOL hasSelectedItems; // @synthesize hasSelectedItems=_hasSelectedItems;
@property(retain) NSMapTable *disclosedTokenMapTable; // @synthesize disclosedTokenMapTable=_disclosedTokenMapTable;
@property(retain) DVTBorderedView *bottomBorder; // @synthesize bottomBorder=_bottomBorder;
@property(retain) DVTDynamicTableView *dynamicTableView; // @synthesize dynamicTableView=_dynamicTableView;
@property(retain) DVTReplacementView *resultsReplacementView; // @synthesize resultsReplacementView=_resultsReplacementView;
@property(retain) NSString *replaceString; // @synthesize replaceString=_replaceString;
- (void).cxx_destruct;
- (long long)dynamicTableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInDynamicTableView:(id)arg1;
- (void)_udpateHasCheckedItems;
- (double)dynamicTableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)dynamicTableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)dynamicTableView:(id)arg1 heightForRow:(long long)arg2 inSection:(long long)arg3;
- (id)dynamicTableView:(id)arg1 viewForRow:(long long)arg2 inSection:(long long)arg3;
- (id)_dynamicTableView:(id)arg1 viewForRow:(long long)arg2 inSection:(long long)arg3 createIfNeeded:(BOOL)arg4;
- (void)_updatePreviewsSelection;
- (void)_updatePreviewSelection:(id)arg1;
- (void)_rebuildSections;
- (void)_updateRowSelectionForProvider:(id)arg1 forSectionIndex:(long long)arg2;
- (void)updateBoundReplaceString;
- (id)dvtExtraBindings;
- (void)_scrollNavigableVisible:(id)arg1;
@property(readonly, copy) NSSet *resultNavigablesToReplace;
@property(retain) IDEBatchFindResultSet *resultSet;
@property(readonly) IDEBatchFindResultsOutlineController *resultsOutlineController;
@property(getter=isViewReadyToPopulateTable) BOOL viewIsReadyToPopulateTable;
- (void)primitiveInvalidate;
- (void)viewDidInstall;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

