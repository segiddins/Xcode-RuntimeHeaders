//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebuggerMTLSupport/NSObject-Protocol.h>

@class DYShaderAnalyzerResult, GPUTraceShaderDataItem, GPUTraceShaderSampleInfo, IDEEditorDocument, IDEIndex, IDEWorkspaceDocument, NSArray, NSDictionary, NSString;
@protocol DYPShaderSourceDocument, GPUTraceShaderDataProviderDelegate;

@protocol GPUTraceShaderDataProvider <NSObject>
@property(readonly, nonatomic) IDEIndex *index;
@property(readonly, nonatomic) IDEEditorDocument *editorDocument;
@property(nonatomic) __weak GPUTraceShaderDataItem *dataItem;
@property(nonatomic) __weak id <DYPShaderSourceDocument> document;
@property(nonatomic) __weak id <GPUTraceShaderDataProviderDelegate> delegate;
- (IDEEditorDocument *)retainedEditorDocumentWithWorkspaceDocument:(IDEWorkspaceDocument *)arg1;
- (void)shaderSourceChanged:(id <DYPShaderSourceDocument>)arg1;
- (NSString *)alertInfoKey;
- (NSString *)alertMessageKey;
- (NSArray *)remarks;
- (double)shaderTimingForShaderType:(unsigned int)arg1;
- (DYShaderAnalyzerResult *)shaderAnalyzerResultForShaderType:(unsigned int)arg1 baseData:(BOOL)arg2;
- (GPUTraceShaderSampleInfo *)sampleInfoForShaderType:(unsigned int)arg1 baseData:(BOOL)arg2;
- (NSArray *)allDiassemblyInfoForShaderType:(unsigned int)arg1 baseData:(BOOL)arg2;
- (NSDictionary *)perLineSourceInfoDictForShaderType:(unsigned int)arg1 baseData:(BOOL)arg2;
- (float)shaderBinaryCostForShaderType:(unsigned int)arg1;
- (NSArray *)shaderAnnotations;
- (void)requestWorkspaceIndex;
- (void)requestProfilerData;
- (BOOL)editable:(id *)arg1;
- (NSString *)languageIdentifier;
- (long long)lineNumber;
- (NSString *)sourcePath;
- (NSString *)sourceCode;
@end

