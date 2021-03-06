//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUDebugger/IDEDebuggingAdditionUIController-Protocol.h>

@class DVTExtension, DVTStackBacktrace, GPUDebuggingAddition, GPUTraceFPSTrayCell, GPUTraceSession, IDEBreakpointManager, IDEEditorArea, IDEWorkspaceDocument, IDEWorkspaceTabController, NSString;
@protocol DVTInvalidation, IDEOpenRequest;

@interface GPUDebuggingAdditionUIController : NSObject <IDEDebuggingAdditionUIController>
{
    DVTExtension *_extension;
    id <IDEOpenRequest> _documentOpenRequestToken;
    IDEBreakpointManager *_breakpointsManager;
    IDEEditorArea *_editorArea;
    GPUTraceFPSTrayCell *_trayFPSCell;
    BOOL _captureDoneAlerted;
    id <DVTInvalidation> _gfxDebuggingAdditionObserver;
    IDEWorkspaceTabController *_workspaceTabController;
    GPUDebuggingAddition *_debuggingAddition;
    GPUTraceSession *_currentTraceSession;
}

+ (unsigned long long)referenceCountForTraceSession:(id)arg1;
+ (void)removeTraceSessionReference:(id)arg1 forTraceSession:(id)arg2;
+ (void)addTraceSessionReference:(id)arg1 forTraceSession:(id)arg2;
+ (void)setGPUDebuggingAdditionUIControllerIdentifier:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) __weak GPUTraceSession *currentTraceSession; // @synthesize currentTraceSession=_currentTraceSession;
@property(retain) GPUDebuggingAddition *debuggingAddition; // @synthesize debuggingAddition=_debuggingAddition;
@property(readonly) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
- (BOOL)validateMenuItem:(id)arg1;
- (void)stepToNextCall:(id)arg1;
- (void)stepToPreviousCall:(id)arg1;
- (void)stepToNextDisplayableCall:(id)arg1;
- (void)stepToPreviousDisplayableCall:(id)arg1;
- (unsigned long long)_currentMarkerIndex;
- (unsigned long long)_currentCallIndex;
- (unsigned long long)_currentDisplayableItemIndex;
- (id)_currentMainTraceItem;
- (void)updateShaders:(id)arg1;
- (void)runInvestigatorWithExistingCapture:(id)arg1;
- (void)ReleaseGPUFrame:(id)arg1;
- (void)openLocation:(id)arg1 withEventType:(unsigned long long)arg2;
- (void)_openTraceItem:(id)arg1 withEventType:(unsigned long long)arg2;
- (void)_setTargetFPS:(unsigned int)arg1;
- (id)dataSourceForNavigationProcessHeader;
- (id)debugSubmenu;
- (BOOL)shouldReplaceDebugSubmenu;
- (void)primitiveInvalidate;
- (void)setupPerformanceDataSource:(id)arg1;
- (id)extension;
- (id)initWithWorkspaceTabController:(id)arg1 withDebuggingAddition:(id)arg2 forExtension:(id)arg3;
- (void)createTabStateAndAddGauge:(id)arg1;
- (void)_activateGPUDebuggerUI;
- (BOOL)_hasSingleTraceSessionReference;
- (void)_traceSessionComplete;
- (void)_removeGaugeWithScheme:(id)arg1 launchSession:(id)arg2;
- (void)fakeSessionComplete;
- (void)_reopenStandaloneTraceDocument;
- (void)_closeAllDocuments;
- (void)_openEditorDocumentWithURL:(id)arg1;
@property(readonly) IDEWorkspaceDocument *workspaceDocument;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

