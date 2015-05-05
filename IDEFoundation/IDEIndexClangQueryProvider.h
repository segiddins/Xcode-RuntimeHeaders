//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEFoundation/IDEIndexGenericQueryProvider.h>

@class DVTDispatchLock, DVTTextDocumentLocation, NSArray, NSString;

@interface IDEIndexClangQueryProvider : IDEIndexGenericQueryProvider
{
    DVTDispatchLock *_clangLock;
    void *_cxIndex;
    struct CXTranslationUnitImpl *_cxTU;
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
    BOOL _throwOutCache;
}

+ (BOOL)supportsSymbolColoring;
+ (void)initialize;
- (void).cxx_destruct;
- (id)impliedHeadersForModuleImportLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)importedFileAtDocumentLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)importedFilesAtDocument:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)collectionElementTypeSymbolForSymbol:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)typeSymbolForSymbol:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)typeSymbolForCXType:(CDStruct_9b248d9b)arg1;
- (id)messageReceiverInContext:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)referencesToSymbolMatchingName:(id)arg1 inContext:(id)arg2 withCurrentFileContentDictionary:(id)arg3 forIndex:(id)arg4;
- (id)referencesToSymbol:(id)arg1 inContext:(id)arg2 withCurrentFileContentDictionary:(id)arg3 forIndex:(id)arg4;
- (id)symbolsUsedInContext:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)symbolsOccurrencesInContext:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (BOOL)_setOccurrenceForCursor:(CDStruct_a94d320b)arg1 symbol:(id)arg2 index:(id)arg3;
- (id)processedSymbolsInContext:(id)arg1 initFunction:(CDUnknownBlockType)arg2 visitorFunction:(CDUnknownBlockType)arg3 includeSymbolLocations:(BOOL)arg4 withCurrentFileContentDictionary:(id)arg5 forIndex:(id)arg6;
- (id)codeDiagnosticsAtLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)parsedCodeCommentAtLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)_diagnosticItemsFromDiagnosticSet:(void *)arg1 parentDiagnostic:(void *)arg2 location:(id)arg3 forIndex:(id)arg4;
- (id)codeCompletionsAtLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2 completionContext:(id *)arg3 forIndex:(id)arg4;
- (id)symbolsMatchingName:(id)arg1 inContext:(id)arg2 withCurrentFileContentDictionary:(id)arg3 forIndex:(id)arg4;
- (id)_symbolsMatchingName:(id)arg1 inContext:(id)arg2 cxTU:(struct CXTranslationUnitImpl *)arg3 forIndex:(id)arg4;
- (id)symbolsMatchingName:(id)arg1 inContext:(id)arg2 forIndex:(id)arg3;
- (id)_resolutionForCursor:(CDStruct_a94d320b)arg1;
- (void)_createSharedTranslationUnitWithCurrentFileContentDictionary:(id)arg1 index:(id)arg2;
- (id)_canonicalPathForFile:(void *)arg1 index:(id)arg2;
- (id)_canonicalPathForPath:(id)arg1 index:(id)arg2;
- (void)_logClangInvocationWithArguments:(id)arg1;
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
- (id)initWithSettings:(id)arg1 database:(id)arg2;

@end

