//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class IDEBatchFindAbstractQuery, IDEBatchFindAbstractResult, IDEBatchFindQuerySpecification, IDEFindNavigatorQueryResultsController, NSMenu, NSSet;

@protocol IDEFindNavigatorQueryResultsControllerDelegate
- (NSMenu *)queryResultsController:(IDEFindNavigatorQueryResultsController *)arg1 contextMenuForResultsFromQuery:(IDEBatchFindAbstractQuery *)arg2;
- (void)queryResultsController:(IDEFindNavigatorQueryResultsController *)arg1 openResult:(IDEBatchFindAbstractResult *)arg2 eventType:(unsigned long long)arg3;
- (void)queryResultsController:(IDEFindNavigatorQueryResultsController *)arg1 selectResults:(NSSet *)arg2;
- (void)queryResultsController:(IDEFindNavigatorQueryResultsController *)arg1 searchAgainWithSpecification:(IDEBatchFindQuerySpecification *)arg2;
- (void)queryResultsControllerExportedUserInterfaceStateDidChange:(IDEFindNavigatorQueryResultsController *)arg1;
@end
