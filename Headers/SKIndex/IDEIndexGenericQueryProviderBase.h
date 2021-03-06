//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFilePath, IDEBoltIndexDatabase, NSDictionary, NSString;
@protocol IDEIndexGlobalQueryProvider;

__attribute__((visibility("hidden")))
@interface IDEIndexGenericQueryProviderBase : NSObject
{
    IDEBoltIndexDatabase *_db;
    NSDictionary *_settings;
    DVTFilePath *_mainFilePath;
    NSString *_target;
    NSDictionary *_coveredFiles;
    double _lastAccess;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *coveredFiles; // @synthesize coveredFiles=_coveredFiles;
@property(copy, nonatomic) NSString *target; // @synthesize target=_target;
@property(copy, nonatomic) DVTFilePath *mainFilePath; // @synthesize mainFilePath=_mainFilePath;
@property double lastAccess; // @synthesize lastAccess=_lastAccess;
@property(readonly, nonatomic) NSDictionary *settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) IDEBoltIndexDatabase *database; // @synthesize database=_db;
- (id)translateName:(id)arg1 ofSymbol:(id)arg2 atLocation:(id)arg3 toLanguageOfRef:(id)arg4 withCurrentFileContentDictionary:(id)arg5;
- (id)parsedCodeCommentAtLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)impliedHeadersForModuleImportLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)importedFileAtDocumentLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)importedFilesAtDocument:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)messageReceiverInContext:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)referencesToSymbolMatchingName:(id)arg1 inContext:(id)arg2 withCurrentFileContentDictionary:(id)arg3 forIndex:(id)arg4;
- (id)symbolsOccurrencesInContext:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (id)codeDiagnosticsAtLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2 forIndex:(id)arg3;
- (void)libclangCompletionsAtLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2 receiver:(CDUnknownBlockType)arg3 forIndex:(id)arg4;
- (id)symbolsMatchingName:(id)arg1 inContext:(id)arg2 withCurrentFileContentDictionary:(id)arg3 forIndex:(id)arg4;
@property(readonly, nonatomic) NSObject<IDEIndexGlobalQueryProvider> *databaseQueryProvider;
@property(readonly, nonatomic) BOOL hasAST; // @dynamic hasAST;
@property(readonly, nonatomic) NSString *mainFile;
- (id)initWithSettings:(id)arg1 database:(id)arg2 index:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) NSString *pchFile; // @dynamic pchFile;

@end

