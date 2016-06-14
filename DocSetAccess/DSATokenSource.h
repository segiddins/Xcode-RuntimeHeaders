//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DocSetAccess/DSAResultSource.h>

@class DSABackgroundThreadQueue, DSADocSet, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSPredicate;

__attribute__((visibility("hidden")))
@interface DSATokenSource : DSAResultSource
{
    DSADocSet *_docSet;
    NSDictionary *_query;
    DSABackgroundThreadQueue *_backgroundQueue;
    NSPredicate *_predicate;
    NSArray *_rationalizedSortDescriptors;
    int _batchType;
    BOOL _ascending;
    NSMutableDictionary *_batchInfo;
    NSMutableArray *_searchResultIDs;
    NSMutableArray *_cachedResults;
    BOOL _cancelSearch;
    BOOL _backgroundIsFinished;
    BOOL _sortOnMainThread;
    BOOL _hasReturnedResults;
}

- (id)nextResultsInTime:(double)arg1;
- (id)remainingResults;
- (BOOL)hasMoreResults;
- (id)_convertNextIDsToObjectsInTime:(double)arg1;
- (void)cancel;
- (void)dealloc;
- (id)initWithQuery:(id)arg1 forDocSet:(id)arg2 withSortDescriptor:(id)arg3;
- (id)_performNextFetch;
- (void)_initBatchInfo;
- (void)_configureFetchesForQuery:(id)arg1 andSortDescriptor:(id)arg2;
- (void)performFetch;

@end

