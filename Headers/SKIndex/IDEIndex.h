//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SKIndex/DVTInvalidation-Protocol.h>
#import <SKIndex/IDEBoltIndexDatabaseProgressDelegate-Protocol.h>
#import <SKIndex/IDEIndexDatabaseDelegate-Protocol.h>
#import <SKIndex/SKScanIndexDelegate-Protocol.h>

@class DVTDispatchLock, DVTFilePath, DVTNotificationToken, DVTStackBacktrace, IDEBoltIndexDatabase, IDECoalescingInvocation, IDEIndexQPManager, IDEIndexingEngine, IDEWorkspace, NSDate, NSDictionary, NSMutableDictionary, NSString, SKToolchainResolver, SKUnitTestsIndex;
@protocol OS_dispatch_queue;

@interface IDEIndex : NSObject <IDEBoltIndexDatabaseProgressDelegate, IDEIndexDatabaseDelegate, SKScanIndexDelegate, DVTInvalidation>
{
    IDEWorkspace *_workspace;
    SKToolchainResolver *_toolchainResolver;
    DVTFilePath *_databaseFile;
    DVTFilePath *_datastoreFolder;
    DVTFilePath *_folder;
    DVTFilePath *_pchFolder;
    DVTFilePath *_toolchainInvocationLoggingPath;
    BOOL _enableBackgroundIndexer;
    BOOL _enableExplicitOutputUnits;
    BOOL _enableFullStoreVisibility;
    BOOL _enablePCHCreation;
    BOOL _dumpIndexables;
    IDEIndexingEngine *_engine;
    IDEIndexQPManager *_qpManager;
    SKUnitTestsIndex *_unitTestsIndex;
    NSMutableDictionary *_identifiersToIndexables;
    NSMutableDictionary *_indexablesToProductHeaders;
    NSMutableDictionary *_copiedHeadersToSources;
    NSMutableDictionary *_sourceHeadersToIndexables;
    NSDictionary *_preferredTargets;
    IDEBoltIndexDatabase *_workspaceDatabase;
    DVTDispatchLock *_stateLock;
    DVTDispatchLock *_pchCreationLock;
    NSMutableDictionary *_pchFiles;
    NSDate *_lastErrorTime;
    BOOL _isCancelled;
    BOOL _isInErrorRecoveryMode;
    BOOL _isReadOnly;
    unsigned long long _initialDBSize;
    DVTDispatchLock *_findFilesLock;
    long long _nextFindFilesToken;
    NSMutableDictionary *_findFilesCallbacks;
    NSObject<OS_dispatch_queue> *_editorFileUpdateQueue;
    DVTNotificationToken *_indexableFileWasAddedNotificationObservingToken;
    DVTNotificationToken *_indexableFileWillBeRemovedNotificationObservingToken;
    DVTNotificationToken *_indexableDidRenameFileNotificationObservingToken;
    DVTNotificationToken *_buildablesDidChangeNotificationObservingToken;
    DVTNotificationToken *_buildSettingsDidChangeNotificationObservingToken;
    DVTNotificationToken *_buildOperationDidStopNotificationObservingToken;
    unsigned long long _timeSinceLastProcessingUnitsPost;
    IDECoalescingInvocation *_didChangeStateInvocation;
    NSMutableDictionary *_buildSettingsForFile;
    NSObject<OS_dispatch_queue> *_buildSettingsForFileQueryQueue;
    BOOL _avoidDelaysForTesting;
    DVTFilePath *_workspaceFile;
    unsigned long long _indexerToken;
}

+ (void)logCompilerInvocationWithArguments:(id)arg1 tool:(int)arg2 toolchain:(id)arg3;
+ (void)logCompilerInvocationImpl_uncovered_:(id)arg1 tool:(int)arg2 toolchain:(id)arg3;
+ (id)_dataSourceExtensionForFile:(id)arg1 withLanguage:(id)arg2;
+ (id)dataSourceExtensionForFile:(id)arg1 withLanguage:(id)arg2;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (BOOL)supportsInvalidationPrevention;
+ (void)dumpIndexableAsPropertyList:(id)arg1 settings:(id)arg2;
+ (id)createIndexForWorkspace:(id)arg1 toolchainResolver:(id)arg2 datastoreFolder:(id)arg3 toolchainInvocationLoggingPath:(id)arg4 enableBackgroundIndexer:(BOOL)arg5 enableExplicitOutputUnits:(BOOL)arg6 enableFullStoreVisibility:(BOOL)arg7 enablePCHCreation:(id)arg8 dumpIndexables:(BOOL)arg9 initialDBSize:(unsigned long long)arg10;
+ (id)_pchFolderForWorkspace:(id)arg1;
+ (id)_databaseFolderForWorkspace:(id)arg1;
+ (void)initialize;
+ (id)schedulingLogAspect;
+ (id)compilerInvocationLogAspect;
+ (id)metricLogAspect;
+ (id)logAspect;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long indexerToken; // @synthesize indexerToken=_indexerToken;
@property(readonly, nonatomic) DVTFilePath *databaseFile; // @synthesize databaseFile=_databaseFile;
@property(readonly, nonatomic) DVTFilePath *workspaceFile; // @synthesize workspaceFile=_workspaceFile;
@property(readonly, nonatomic) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property BOOL avoidDelaysForTesting; // @synthesize avoidDelaysForTesting=_avoidDelaysForTesting;
@property(readonly, nonatomic) IDEBoltIndexDatabase *database; // @synthesize database=_workspaceDatabase;
- (void)_filesContainingWordUpdate:(long long)arg1 results:(id)arg2 isFinished:(BOOL)arg3;
- (void)cancelFindFiles:(long long)arg1;
- (BOOL)filesContainingWord:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)targetIdentifiersForFile:(id)arg1;
- (id)mainFilesForFile:(id)arg1 crossLanguage:(BOOL)arg2;
- (void)_buildOperationDidStop:(id)arg1;
- (void)_buildSettingsDidChange:(id)arg1;
- (void)indexableChangedLinkedIndexables:(id)arg1 linkedIndexableIds:(id)arg2;
- (void)_resetQueryProviderStateForDocuments;
- (void)activeRunDestinationDidChange;
- (void)_clearAllCachedBuildSettings;
- (BOOL)isTargetMatchingActiveDestinationPlatform:(id)arg1;
- (BOOL)isPreferredTarget:(id)arg1 isBuiltForRun:(char *)arg2 isImplicitDependency:(char *)arg3;
- (BOOL)isPreferredTarget:(id)arg1;
- (id)databaseQueryProvider;
- (id)queryProviderForLocation:(id)arg1 highPriority:(BOOL)arg2;
- (void)registerHotFile:(id)arg1;
- (id)queryProviderForFileNoBuildSettings:(id)arg1;
- (id)queryProviderForFileNoFallback:(id)arg1 highPriority:(BOOL)arg2;
- (id)queryProviderForFile:(id)arg1 highPriority:(BOOL)arg2;
- (id)indexableForCopiedHeader:(id)arg1;
- (id)effectivePathForHeader:(id)arg1;
- (void)_initCopiedHeaders;
- (void)scanIndexDidFinishScanning:(id)arg1;
- (void)scanIndexIsScanning:(id)arg1 completed:(long long)arg2 remaining:(long long)arg3;
- (void)scanIndexStartedScanning:(id)arg1;
- (void)storeProcessedUnitOutputPath:(id)arg1 hasTestSymbols:(BOOL)arg2;
- (void)storeCompletedProcessingUnits;
- (void)finishedProcessingUnits;
- (void)processingUnitsCompleted:(long long)arg1 remaining:(long long)arg2;
- (void)startedProcessingUnits;
- (void)databaseDidLoad:(id)arg1;
- (void)databaseDidOpen:(id)arg1;
- (void)database:(id)arg1 didEndImportSession:(id)arg2;
- (void)databaseDidChangeMainFiles:(id)arg1;
- (void)databaseDidIndexHotFile:(id)arg1;
- (void)_respondToFileChangeNotification:(id)arg1;
@property(readonly, nonatomic) NSString *workspaceName;
- (id)dataSourceExtensionForFile:(id)arg1 settings:(id)arg2;
- (id)_dataSourceExtensionForFile:(id)arg1 withSettings:(id)arg2;
- (id)settingsForFile:(id)arg1 indexable:(id)arg2;
- (id)_waitForSettingsForFile:(id)arg1 object:(id)arg2;
- (id)_waitForSettingsFromObject:(id)arg1;
- (void)waitForBuildSystem:(id)arg1;
- (void)gatherProductHeadersForIndexable:(id)arg1;
- (void)primitiveInvalidate;
- (void)updateIndexForFiles:(id)arg1;
- (void)_inferBuildSettingsForFileAndNotifyAsync:(id)arg1 settingsInfo:(id)arg2;
- (void)_tryInferringBuildSettingsForUnresolvedFiles;
- (void)unregisterFileForBuildSettingsNotifications:(id)arg1;
- (void)registerFileForBuildSettingsNotifications:(id)arg1;
- (void)editorDidSaveFile:(id)arg1;
- (void)editorWillSaveFile:(id)arg1;
- (void)_stopIndexing;
- (BOOL)delayToBatchChanges;
- (void)setDelayToBatchChanges:(BOOL)arg1;
- (void)setThrottleFactor:(double)arg1;
- (void)resumeIndexing;
- (void)suspendIndexing;
@property(readonly, nonatomic) BOOL isPaused;
@property(readonly, nonatomic) BOOL isQuiescent;
@property(readonly) BOOL isPCHCreationEnabled;
@property(readonly) BOOL isBackgroundIndexingEnabled;
- (id)indexableForIdentifier:(id)arg1;
- (void)removeUnitOutFilePaths:(id)arg1 waitForProcessing:(BOOL)arg2;
- (void)addUnitOutFilePaths:(id)arg1 waitForProcessing:(BOOL)arg2;
- (void)updatePreferredTargets:(id)arg1;
- (void)unregisterObject:(id)arg1;
- (void)registerObject:(id)arg1;
- (void)postNotificationName:(id)arg1;
- (void)postNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)_onFinalDidChangeStateEvent;
- (void)_didChangeState;
@property(readonly, copy) NSString *description;
@property(readonly) DVTFilePath *headerMapFilePath;
- (id)unitTestsIndex;
- (id)defaultToolchain;
- (id)toolchainForSettings:(id)arg1 tool:(int)arg2;
- (id)toolchainInvocationLoggingPath;
- (id)pchFolder;
- (id)datastoreFolder;
- (BOOL)openDatabase;
- (id)initWithFolder:(id)arg1 datastoreFolder:(id)arg2 toolchainInvocationLoggingPath:(id)arg3 enableBackgroundIndexer:(BOOL)arg4 enableExplicitOutputUnits:(BOOL)arg5 enableFullStoreVisibility:(BOOL)arg6 enablePCHCreation:(id)arg7 readonly:(BOOL)arg8 initialDBSize:(unsigned long long)arg9;
- (id)initWithFolder:(id)arg1 forWorkspace:(id)arg2 toolchainResolver:(id)arg3 datastoreFolder:(id)arg4 toolchainInvocationLoggingPath:(id)arg5 enableBackgroundIndexer:(BOOL)arg6 enableExplicitOutputUnits:(BOOL)arg7 enableFullStoreVisibility:(BOOL)arg8 enablePCHCreation:(id)arg9 dumpIndexables:(BOOL)arg10 readonly:(BOOL)arg11 initialDBSize:(unsigned long long)arg12;
- (id)_databaseFileURLForFolder:(id)arg1;
- (void)_setupObservers;
- (id)translateName:(id)arg1 ofSymbol:(id)arg2 toLanguageOfRef:(id)arg3 withCurrentFileContentDictionary:(id)arg4;
- (BOOL)renameAtLocation:(id)arg1 toName:(id)arg2 withCurrentFileContentDictionary:(id)arg3 error:(id *)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (BOOL)renameIndexedSymbols:(id)arg1 inFile:(id)arg2 withCurrentFileContentDictionary:(id)arg3 error:(id *)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (BOOL)localRefactoring:(void *)arg1 atSelection:(id)arg2 withCurrentFileContentDictionary:(id)arg3 error:(id *)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (BOOL)findLocalRenameRangesAtLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2 error:(id *)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)findRenameRangesForIndexedSymbols:(id)arg1 inFile:(id)arg2 withCurrentFileContentDictionary:(id)arg3 error:(id *)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)availableRefactorings:(id)arg1 includeSymbol:(BOOL)arg2 withCurrentFileContentDictionary:(id)arg3;
- (void)allSymbolNames:(CDUnknownBlockType)arg1;
- (id)collectTestMethodsPerTestTargets;
- (id)allMethodsMatchingMethod:(id)arg1 forReceiver:(id)arg2;
- (id)parametersForCallable:(id)arg1;
- (id)membersMatchingKinds:(id)arg1 forInterfaces:(id)arg2;
- (id)symbolsForResolutions:(id)arg1;
- (id)parsedCodeCommentAtLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2;
- (id)codeDiagnosticsAtLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2;
- (void)libclangCompletionsAtLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2 receiver:(CDUnknownBlockType)arg3;
- (id)allParentsOfSymbols:(id)arg1 cancelWhen:(CDUnknownBlockType)arg2;
- (unsigned long long)countOfSymbolsMatchingKind:(id)arg1 workspaceOnly:(BOOL)arg2;
- (id)allSymbolsMatchingKind:(id)arg1 workspaceOnly:(BOOL)arg2;
- (id)testMethodsForClasses:(id)arg1;
- (id)testCaseBaseClasses;
- (id)allSubClassesForClasses:(id)arg1;
- (id)allSymbolsMatchingNames:(id)arg1 kind:(id)arg2;
- (id)allSymbolsMatchingName:(id)arg1 kind:(id)arg2;
- (id)allClassesMatchingName:(id)arg1;
- (id)impliedHeadersForModuleImportLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2;
- (id)importedFileAtDocumentLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2;
- (id)importedFilesAtDocument:(id)arg1 withCurrentFileContentDictionary:(id)arg2;
- (id)typeSymbolForSymbol:(id)arg1 withCurrentFileContentDictionary:(id)arg2;
- (id)messageReceiverInContext:(id)arg1 withCurrentFileContentDictionary:(id)arg2;
- (id)referencesToSymbolMatchingName:(id)arg1 inContext:(id)arg2 withCurrentFileContentDictionary:(id)arg3;
- (id)symbolsOccurrencesInContext:(id)arg1 withCurrentFileContentDictionary:(id)arg2;
- (id)symbolsMatchingName:(id)arg1 inContext:(id)arg2 withCurrentFileContentDictionary:(id)arg3;
- (id)symbolsContaining:(id)arg1 anchorStart:(BOOL)arg2 anchorEnd:(BOOL)arg3 subsequence:(BOOL)arg4 ignoreCase:(BOOL)arg5 cancelWhen:(CDUnknownBlockType)arg6;
- (id)symbolsContaining:(id)arg1 anchorStart:(BOOL)arg2 anchorEnd:(BOOL)arg3 subsequence:(BOOL)arg4 ignoreCase:(BOOL)arg5;
- (id)filesContaining:(id)arg1 anchorStart:(BOOL)arg2 anchorEnd:(BOOL)arg3 subsequence:(BOOL)arg4 ignoreCase:(BOOL)arg5 cancelWhen:(CDUnknownBlockType)arg6;
- (id)filesIncludedByFile:(id)arg1;
- (id)includesOfFile:(id)arg1;
- (id)filesIncludingFile:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

