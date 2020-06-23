//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SKIndex/IDEIndexGenericQueryProviderBase.h>

#import <SKIndex/IDEIndexQueryProvider-Protocol.h>

@class DVTDispatchLock, DVTFilePath, DVTTextDocumentLocation, IDEBoltIndexDatabase, NSArray, NSDictionary, NSString, SKToolchainService;

__attribute__((visibility("hidden")))
@interface IDEIndexClangQueryProvider : IDEIndexGenericQueryProviderBase <IDEIndexQueryProvider>
{
    BOOL _isMetal;
    int _toolKind;
    SKToolchainService *_toolchain;
    struct libclang_functions_s *_clangAPI;
    DVTDispatchLock *_clangLock;
    void *_cxIndex;
    _Atomic struct CXTranslationUnitImpl *_cxTU;
    long long _filePurgeCount;
    NSArray *_astArgs;
    NSString *_workingDirectory;
    struct {
        unsigned int _field1[4];
        void *_field2;
    } *_tokens;
    CDStruct_a94d320b *_cursors;
    DVTTextDocumentLocation *_processedLocation;
    DVTDispatchLock *_completionLock;
    CDUnknownBlockType _completionBlock;
    unsigned int _numTokens;
    _Atomic char _throwOutCache;
    DVTFilePath *_invocationLoggingPath;
}

+ (void)initialize;
- (void).cxx_destruct;
- (BOOL)renameAtLocation:(id)arg1 toName:(id)arg2 withCurrentFileContentDictionary:(id)arg3 forIndex:(id)arg4 error:(id *)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (BOOL)renameIndexedSymbols:(id)arg1 inFile:(id)arg2 withCurrentFileContentDictionary:(id)arg3 error:(id *)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (BOOL)findLocalRenameRangesAtLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3 error:(id *)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (BOOL)findRenameRangesForIndexedSymbols:(id)arg1 inFile:(id)arg2 withCurrentFileContentDictionary:(id)arg3 error:(id *)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)addUnsavedFiles:(struct CXUnsavedFile *)arg1 fromCurrentFileContentsDictionary:(id)arg2 numUnsavedFiles:(unsigned long long *)arg3;
- (BOOL)getRenameRanges:(struct IDEIndexRenameRangeGroup *)arg1 allRanges:(struct IDEIndexRenameRange *)arg2 forFileRename:(CDStruct_e39de028)arg3 renameBySymbolIndex:(id)arg4 withCurrentFileContentDictionary:(id)arg5 error:(id *)arg6;
- (void)countRenameRanges:(CDStruct_e39de028)arg1 numGroups:(unsigned int *)arg2 numRanges:(unsigned int *)arg3;
- (BOOL)getEdits:(struct IDEIndexRefactoringEdit *)arg1 forFileRename:(CDStruct_e39de028)arg2 withCurrentFileContentDictionary:(id)arg3 error:(id *)arg4;
- (void)getCXIndexedSymbols:(CDStruct_905ef993 *)arg1 forRenames:(id)arg2 renameBySymbolIndex:(id)arg3;
- (void)getCXRenamedIndexedSymbols:(CDStruct_bbf6ae9b *)arg1 forRenames:(id)arg2;
- (id)processCommandLineArgsForRename:(id)arg1 inFile:(id)arg2;
- (void)getEdits:(struct IDEIndexRefactoringEdit *)arg1 forRefactoringReplacements_Old:(const CDStruct_1efc0dff *)arg2 numReplacements:(unsigned int)arg3 kind:(int)arg4;
- (void)getEdits:(struct IDEIndexRefactoringEdit *)arg1 groups:(struct IDEIndexRenameRangeGroup *)arg2 ranges:(struct IDEIndexRenameRange *)arg3 forRefactoringReplacements:(const CDStruct_2d9ce012 *)arg4 numReplacements:(unsigned int)arg5 kind:(int)arg6;
- (BOOL)localRefactoring:(void *)arg1 atSelection:(id)arg2 withCurrentFileContentDictionary:(id)arg3 forIndex:(id)arg4 error:(id *)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (BOOL)runRefactoringContinuation:(void *)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3 error:(id *)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)evaluateRefactoringContinuation:(void *)arg1 forIndex:(id)arg2;
- (id)fileForImplementationOf:(CDStruct_a94d320b)arg1 withSymbol:(id)arg2 cxTU:(struct CXTranslationUnitImpl *)arg3 forIndex:(id)arg4;
- (void)handleResultReplacements:(void *)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)availableRefactorings:(id)arg1 includeSymbol:(BOOL)arg2 withCurrentFileContentDictionary:(id)arg3 forIndex:(id)arg4;
- (id)impliedHeadersForModuleImportLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)importedFileAtDocumentLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)importedFilesAtDocument:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)typeSymbolForSymbol:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)typeSymbolForCXType:(CDStruct_9b248d9b)arg1;
- (id)messageReceiverInContext:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)referencesToSymbolMatchingName:(id)arg1 inContext:(id)arg2 withCurrentFileContentDictionary:(id)arg3 forIndex:(id)arg4;
- (id)symbolsOccurrencesInContext:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (BOOL)_setOccurrenceForCursor:(CDStruct_a94d320b)arg1 originalCursor:(CDStruct_a94d320b)arg2 symbol:(id)arg3 index:(id)arg4;
- (id)processedSymbolsInContext:(id)arg1 initFunction:(CDUnknownBlockType)arg2 visitorFunction:(CDUnknownBlockType)arg3 includeSymbolLocations:(BOOL)arg4 withCurrentFileContentDictionary:(id)arg5 forIndex:(id)arg6;
- (id)codeDiagnosticsAtLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)parsedCodeCommentAtLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)_diagnosticItemsFromDiagnosticSet:(void *)arg1 parentDiagnostic:(void *)arg2 location:(id)arg3 forIndex:(id)arg4;
- (void)libclangCompletionsAtLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2 receiver:(CDUnknownBlockType)arg3 forIndex:(id)arg4;
- (id)symbolsMatchingName:(id)arg1 inContext:(id)arg2 withCurrentFileContentDictionary:(id)arg3 forIndex:(id)arg4;
- (id)_symbolsMatchingName:(id)arg1 forCXCursor:(CDStruct_a94d320b)arg2 cxTU:(struct CXTranslationUnitImpl *)arg3 checkLocation:(id)arg4 forIndex:(id)arg5;
- (id)_symbolsMatchingName:(id)arg1 inContext:(id)arg2 cxTU:(struct CXTranslationUnitImpl *)arg3 forIndex:(id)arg4;
- (id)_resolutionForCursor:(CDStruct_a94d320b)arg1;
- (void)_createSharedTranslationUnitWithCurrentFileContentDictionary:(id)arg1 index:(id)arg2;
- (id)diagnosticsFromTU:(struct CXTranslationUnitImpl *)arg1 index:(id)arg2;
- (BOOL)needToBuildASTForCurrentFileContent:(id)arg1;
- (id)_canonicalPathForFile:(void *)arg1 index:(id)arg2;
- (id)_canonicalPathForPath:(id)arg1 index:(id)arg2;
- (id)compilerASTBuiltProductsDir;
- (id)compilerASTCommandArguments;
- (id)pchFile;
- (id)pchFileAsPassedInArgs;
- (void)purgeCaches;
- (BOOL)hasAST;
- (void)dealloc;
- (void)disposeCIndexAndTU;
- (void)disposeTokensAndCursors;
- (void)performCompletion:(CDUnknownBlockType)arg1;
- (void)asyncPerformClang:(CDUnknownBlockType)arg1;
- (void)performClang:(CDUnknownBlockType)arg1;
- (void)processCompletions;
- (void)postCrashNotification:(id)arg1;
- (id)initWithSettings:(id)arg1 database:(id)arg2 index:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) IDEBoltIndexDatabase *database;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSDictionary *settings;
@property(readonly) Class superclass;

@end

