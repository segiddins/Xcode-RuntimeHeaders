//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUDebuggerMTLSupport/GPUTraceShaderDataProvider-Protocol.h>

@class GPUTraceShaderDataItem, GPUTraceShaderItem, IDEEditorDocument, IDEIndex, NSMutableArray, NSMutableDictionary, NSString;
@protocol DYPShaderSourceDocument, GPUTraceShaderDataProviderDelegate, NSObject;

__attribute__((visibility("hidden")))
@interface GPUMTLShaderDataProvider : NSObject <GPUTraceShaderDataProvider>
{
    GPUTraceShaderItem *_shaderItem;
    GPUTraceShaderDataItem *_dataItem;
    NSString *_sourceCode;
    NSMutableArray *_mutableAnnotations;
    NSMutableDictionary *_shaderBinaryCost;
    id <NSObject> _libraryUpdateAttemptedObserver;
    id <NSObject> _shaderProfilerDidEndObserver;
    id <GPUTraceShaderDataProviderDelegate> delegate;
    id <DYPShaderSourceDocument> document;
    IDEIndex *_index;
    IDEEditorDocument *_editorDocument;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GPUTraceShaderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(readonly, nonatomic) IDEEditorDocument *editorDocument; // @synthesize editorDocument=_editorDocument;
@property(readonly, nonatomic) IDEIndex *index; // @synthesize index=_index;
@property(nonatomic) __weak id <DYPShaderSourceDocument> document; // @synthesize document;
@property(nonatomic) __weak id <GPUTraceShaderDataProviderDelegate> delegate; // @synthesize delegate;
- (id)irSourceForShaderType:(unsigned int)arg1;
- (double)shaderTimingForShaderType:(unsigned int)arg1;
- (id)retainedEditorDocumentWithWorkspaceDocument:(id)arg1;
- (id)remarks;
- (float)shaderBinaryCostForShaderType:(unsigned int)arg1;
- (id)allDiassemblyInfoForShaderType:(unsigned int)arg1 baseData:(BOOL)arg2;
- (id)perLineSourceInfoDictForShaderType:(unsigned int)arg1 baseData:(BOOL)arg2;
- (id)sampleInfoForShaderType:(unsigned int)arg1 baseData:(BOOL)arg2;
- (id)shaderAnalyzerResultForShaderType:(unsigned int)arg1 baseData:(BOOL)arg2;
- (void)_handleProfilerData:(id)arg1;
- (void)_storeBinaryPercentageOfShaderItem:(id)arg1;
- (void)_handleLibraryUpdate:(id)arg1;
- (void)_addAnnotation:(id)arg1 tooltip:(id)arg2 lineRange:(struct _NSRange)arg3 severity:(unsigned int)arg4 percentage:(float)arg5;
- (void)dealloc;
- (id)initWithDataItem:(id)arg1;
- (void)requestWorkspaceIndex;
- (void)requestProfilerData;
- (void)shaderSourceChanged:(id)arg1;
- (BOOL)editable:(id *)arg1;
- (id)alertInfoKey;
- (id)alertMessageKey;
- (id)languageIdentifier;
- (long long)lineNumber;
- (id)sourcePath;
- (id)sourceCode;
- (id)shaderAnnotations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

