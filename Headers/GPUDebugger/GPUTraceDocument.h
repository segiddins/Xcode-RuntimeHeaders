//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/GPUGaugeDocument.h>

#import <GPUDebugger/IDEDocumentStructureProviding-Protocol.h>

@class DYCaptureSessionInfo, GPUDebuggingAdditionUIController, GPUTraceProcessItem, GPUTraceSession, GPUTraceStorage, NSArray, NSString;

@interface GPUTraceDocument : GPUGaugeDocument <IDEDocumentStructureProviding>
{
    GPUTraceStorage *_storage;
    BOOL _editorWasInstalled;
    GPUTraceSession *_traceSession;
    GPUDebuggingAdditionUIController *_debuggingAdditionUIController;
}

@property(nonatomic) BOOL editorWasInstalled; // @synthesize editorWasInstalled=_editorWasInstalled;
@property(retain, nonatomic) GPUDebuggingAdditionUIController *debuggingAdditionUIController; // @synthesize debuggingAdditionUIController=_debuggingAdditionUIController;
@property(retain, nonatomic) GPUTraceSession *traceSession; // @synthesize traceSession=_traceSession;
- (void).cxx_destruct;
@property(readonly) NSArray *ideTopLevelStructureObjects;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)editorDocumentDidClose;
@property(readonly, nonatomic) DYCaptureSessionInfo *captureSessionInfo;
@property(readonly, nonatomic) GPUTraceStorage *storage;
- (id)captureArchive;
@property(readonly, nonatomic) GPUTraceProcessItem *rootItem;
- (void)dealloc;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)initForURL:(id)arg1 withContentsOfURL:(id)arg2 ofType:(id)arg3 error:(id *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

