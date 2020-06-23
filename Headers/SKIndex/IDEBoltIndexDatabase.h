//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDispatchLock, DVTFilePath, IDECoalescingInvocation, IDEIndexingEngine, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet;
@protocol IDEBoltIndexDatabaseProgressDelegate, IDEIndexDatabaseDelegate, IDEIndexGlobalQueryProvider, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface IDEBoltIndexDatabase : NSObject
{
    DVTFilePath *_path;
    DVTFilePath *_storePath;
    IDEIndexingEngine *_engine;
    BOOL _enableFullStoreVisibility;
    NSObject<IDEIndexGlobalQueryProvider> *_queryProvider;
    struct IndexSystemWrapper _boltDBWrap;
    _Atomic _Bool _isLoaded;
    DVTDispatchLock *_cacheLock;
    NSMutableDictionary *_targetsByMainFileURL;
    NSMutableDictionary *_indexablesByTarget;
    NSMutableDictionary *_pendingIndexedUnitOutputPathsBySession;
    NSMutableSet *_sessionsWaitingToEnd;
    NSMutableArray *_errors;
    struct map<std::__1::basic_string<char>, std::__1::pair<std::__1::set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::basic_string<char>>>, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000>>>>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::pair<std::__1::set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::basic_string<char>>>, std::__1::chrono::time_point<std::__1::chrono::system_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000>>>>>>> _outOfDateTriggerFilePaths;
    IDECoalescingInvocation *_handleOutOfDateFiles;
    NSObject<OS_dispatch_queue> *_outOfDateFilesProcessQueue;
    NSObject<IDEIndexDatabaseDelegate> *_delegate;
    NSObject<IDEBoltIndexDatabaseProgressDelegate> *_progressDelegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak NSObject<IDEBoltIndexDatabaseProgressDelegate> *progressDelegate; // @synthesize progressDelegate=_progressDelegate;
@property(nonatomic) __weak NSObject<IDEIndexDatabaseDelegate> *delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<IDEIndexGlobalQueryProvider> *queryProvider; // @synthesize queryProvider=_queryProvider;
@property(readonly, nonatomic) DVTFilePath *path; // @synthesize path=_path;
- (id)newImportSession;
- (void)_forceEndSession:(id)arg1;
- (void)didEndSession:(id)arg1;
- (void)sendDelegateDidEndImportSession:(id)arg1;
- (BOOL)isKnownFile:(id)arg1;
- (BOOL)isKnownMainFile:(id)arg1 target:(id)arg2;
- (id)mainFilesForFile:(id)arg1 crossLanguage:(BOOL)arg2;
- (id)_indexableForTarget:(id)arg1;
- (id)_targetsForMainFileURL:(id)arg1;
- (void)editorDidSaveFile:(id)arg1;
- (void)renameIndexableFile:(id)arg1 newFile:(id)arg2 indexable:(id)arg3;
- (void)removeIndexableFile:(id)arg1 indexable:(id)arg2;
- (void)addNewIndexableFile:(id)arg1 indexable:(id)arg2;
- (void)unregisterIndexable:(id)arg1;
- (void)registerIndexable:(id)arg1;
- (void)setRootPaths:(id)arg1;
- (void)registerHotFile:(id)arg1;
- (id)filesForMainFile:(id)arg1 target:(id)arg2 followPCH:(BOOL)arg3 crossLanguage:(BOOL)arg4;
- (id)filesForMainFile:(id)arg1 target:(id)arg2;
- (void)purgeStaleData:(id)arg1;
- (void)_processedUnitOutputPath:(id)arg1;
- (void)_removePendingIndexedUnitOutputPathFromSessions:(id)arg1;
- (void)removePendingIndexedUnitOutputPath:(id)arg1 forSession:(id)arg2;
- (void)addPendingIndexedUnitOutputPath:(id)arg1 forSession:(id)arg2;
- (BOOL)isUnitOutOfDateWithOutputPath:(id)arg1 outOfDateModTime:(struct IndexModificationTime)arg2;
- (BOOL)isUnitOutOfDateWithOutputPath:(id)arg1 dirtyFiles:(id)arg2;
- (void)_processOutOfDateFiles;
- (void)_unitIsOutOfDate:(basic_string_a1f69cfb)arg1 mainFilePath:(struct CanonicalFilePath)arg2 outOfDateModTime:(time_point_246828ed)arg3 triggerHint:(shared_ptr_c8050cd8)arg4;
- (void)close;
- (void)openReadOnly:(BOOL)arg1 initialDBSize:(unsigned long long)arg2 index:(id)arg3;
- (void)didLoadWithIndex:(id)arg1;
- (shared_ptr_971d954e)_getBoltDB;
@property(readonly, nonatomic) NSArray *errors;
- (id)init;
- (id)initWithDatabasePath:(id)arg1 storePath:(id)arg2 engine:(id)arg3 enableFullStoreVisibility:(BOOL)arg4;

@end

