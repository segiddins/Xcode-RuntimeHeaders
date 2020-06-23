//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IDESourceFileBuildInfo : NSObject
{
    BOOL _isForSourceGeneration;
    NSString *_outputFile;
    NSString *_languageName;
    NSArray *_toolchainIdents;
    NSArray *_swiftCommandLine;
    NSString *_swiftBuiltProductsDir;
    NSString *_swiftModuleName;
    NSArray *_clangCommandLine;
    NSString *_clangBuiltProductsDir;
    NSString *_clangPrefixFilePath;
    NSString *_clangPCHFilePath;
    NSString *_clangPCHHashCriteria;
    NSArray *_clangPCHCommandLine;
    NSArray *_coremlcGeneratedFilePaths;
    NSString *_coremlcLanguageToGenerate;
    NSString *_coremlcNotice;
    NSString *_coremlcError;
    NSArray *_rcProjectGeneratedFilePaths;
    NSString *_rcProjectLanguageToGenerate;
    NSString *_rcProjectNotice;
    NSString *_rcProjectError;
    NSArray *_ibGeneratedFilePaths;
    NSArray *_intentsGeneratedFilePaths;
    NSArray *_metalCommandLine;
    NSString *_metalBuiltProductsDir;
}

+ (id)sourceFileBuildInfoFromLegacyASTBuildInfoDictionaryRepresentation:(id)arg1;
@property(readonly) NSString *metalBuiltProductsDir; // @synthesize metalBuiltProductsDir=_metalBuiltProductsDir;
@property(readonly) NSArray *metalCommandLine; // @synthesize metalCommandLine=_metalCommandLine;
@property(readonly) NSArray *intentsGeneratedFilePaths; // @synthesize intentsGeneratedFilePaths=_intentsGeneratedFilePaths;
@property(readonly) NSArray *ibGeneratedFilePaths; // @synthesize ibGeneratedFilePaths=_ibGeneratedFilePaths;
@property(readonly) NSString *rcProjectError; // @synthesize rcProjectError=_rcProjectError;
@property(readonly) NSString *rcProjectNotice; // @synthesize rcProjectNotice=_rcProjectNotice;
@property(readonly) NSString *rcProjectLanguageToGenerate; // @synthesize rcProjectLanguageToGenerate=_rcProjectLanguageToGenerate;
@property(readonly) NSArray *rcProjectGeneratedFilePaths; // @synthesize rcProjectGeneratedFilePaths=_rcProjectGeneratedFilePaths;
@property(readonly) NSString *coremlcError; // @synthesize coremlcError=_coremlcError;
@property(readonly) NSString *coremlcNotice; // @synthesize coremlcNotice=_coremlcNotice;
@property(readonly) NSString *coremlcLanguageToGenerate; // @synthesize coremlcLanguageToGenerate=_coremlcLanguageToGenerate;
@property(readonly) NSArray *coremlcGeneratedFilePaths; // @synthesize coremlcGeneratedFilePaths=_coremlcGeneratedFilePaths;
@property(readonly) BOOL isForSourceGeneration; // @synthesize isForSourceGeneration=_isForSourceGeneration;
@property(readonly) NSArray *clangPCHCommandLine; // @synthesize clangPCHCommandLine=_clangPCHCommandLine;
@property(readonly) NSString *clangPCHHashCriteria; // @synthesize clangPCHHashCriteria=_clangPCHHashCriteria;
@property(readonly) NSString *clangPCHFilePath; // @synthesize clangPCHFilePath=_clangPCHFilePath;
@property(readonly) NSString *clangPrefixFilePath; // @synthesize clangPrefixFilePath=_clangPrefixFilePath;
@property(readonly) NSString *clangBuiltProductsDir; // @synthesize clangBuiltProductsDir=_clangBuiltProductsDir;
@property(readonly) NSArray *clangCommandLine; // @synthesize clangCommandLine=_clangCommandLine;
@property(readonly) NSString *swiftModuleName; // @synthesize swiftModuleName=_swiftModuleName;
@property(readonly) NSString *swiftBuiltProductsDir; // @synthesize swiftBuiltProductsDir=_swiftBuiltProductsDir;
@property(readonly) NSArray *swiftCommandLine; // @synthesize swiftCommandLine=_swiftCommandLine;
@property(readonly) NSArray *toolchainIdents; // @synthesize toolchainIdents=_toolchainIdents;
@property(readonly) NSString *languageName; // @synthesize languageName=_languageName;
@property(readonly) NSString *outputFile; // @synthesize outputFile=_outputFile;
- (void).cxx_destruct;
- (id)legacyDictionaryASTBuildInfoRepresentation;
- (id)initFromLegacyASTBuildInfoDictionaryRepresentation:(id)arg1;

@end

