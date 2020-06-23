//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEDebugGaugeReportDocument.h>

@class DVTObservingToken, GPUReportEditor, GPUReportResults, GPUSharedTabUIState;

@interface GPUReportDocument : IDEDebugGaugeReportDocument
{
    DVTObservingToken *_activeDebuggerControllerObserverToken;
    GPUSharedTabUIState *_sharedTabUIState;
    GPUReportResults *_reportResults;
    GPUReportEditor *_editor;
}

+ (BOOL)autosavesInPlace;
- (void).cxx_destruct;
@property(nonatomic) __weak GPUReportEditor *editor; // @synthesize editor=_editor;
@property(retain, nonatomic) GPUReportResults *reportResults; // @synthesize reportResults=_reportResults;
@property(nonatomic) __weak GPUSharedTabUIState *sharedTabUIState; // @synthesize sharedTabUIState=_sharedTabUIState;
- (id)displayName;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)printOperationWithSettings:(id)arg1 error:(id *)arg2;
- (id)writableTypesForSaveOperation:(unsigned long long)arg1;
- (BOOL)canExportDocument;
- (BOOL)prepareSavePanel:(id)arg1;
- (BOOL)writeSafelyToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id *)arg4;
- (void)editorDocumentWillClose;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)_teardown;
- (void)_setup;

@end
