//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUDebugger/DVTInvalidation-Protocol.h>
#import <GPUDebugger/IDEVariablesViewContentProvider-Protocol.h>
#import <GPUDebugger/IDEVariablesViewContextMenuDelegate-Protocol.h>

@class DVTObservingToken, DVTStackBacktrace, GPUDebuggerController, GPUSharedTabUIState, GPUSharedWorkspaceUIState, IDEVariablesView, NSString;
@protocol IDEVariablesViewContextMenuDelegate, NSObject;

@interface GPUVariablesViewContentProvider : NSObject <IDEVariablesViewContextMenuDelegate, IDEVariablesViewContentProvider, DVTInvalidation>
{
    _Bool _isDrawCall;
    int _functionIndex;
    int _displayIndex;
    NSString *_comparisonModeKey;
    DVTObservingToken *_gpuTraceCurrentLocationObserverToken;
    DVTObservingToken *_uiModeObservation;
    DVTObservingToken *_shaderProfilerResultsObserverToken;
    DVTObservingToken *_selectedScopeTagObserverToken;
    DVTObservingToken *_comparisonModeObserverToken;
    DVTObservingToken *_textModeObserverToken;
    DVTObservingToken *_debugStateObserverToken;
    DVTObservingToken *_showRedundantCallIssuesToken;
    id <NSObject> _updateVariablesViewNotificationObserver;
    int _comparisonMode;
    int _objectFilterMode;
    int _textMode;
    GPUSharedWorkspaceUIState *_workspaceUIState;
    GPUDebuggerController *_debuggerController;
    GPUSharedTabUIState *_sharedUIStateObj;
    IDEVariablesView *_variablesView;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) int textMode; // @synthesize textMode=_textMode;
@property(nonatomic) int objectFilterMode; // @synthesize objectFilterMode=_objectFilterMode;
@property(nonatomic) int comparisonMode; // @synthesize comparisonMode=_comparisonMode;
@property(readonly, nonatomic) __weak IDEVariablesView *variablesView; // @synthesize variablesView=_variablesView;
@property(nonatomic) __weak GPUSharedTabUIState *sharedUIStateObj; // @synthesize sharedUIStateObj=_sharedUIStateObj;
@property(retain, nonatomic) GPUDebuggerController *debuggerController; // @synthesize debuggerController=_debuggerController;
@property(readonly, nonatomic) __weak GPUSharedWorkspaceUIState *workspaceUIState; // @synthesize workspaceUIState=_workspaceUIState;
- (void)_addIssues:(id)arg1 withResourceIdentifiers:(id)arg2 filterList:(id)arg3;
- (id)_createOptionsDictionaryFromOptionsElement:(id)arg1;
- (void)quickLookProviderForDataValue:(id)arg1 quickLookProviderHandler:(CDUnknownBlockType)arg2;
- (void)provideHelpMenuItem:(id)arg1;
- (void)providePrimaryMenuItems:(id)arg1;
- (void)_addVariableNodeFromDataValue:(id)arg1 type:(unsigned long long)arg2 recipientArray:(id)arg3;
- (void)_addVariableNodeFromDataValue:(id)arg1 type:(unsigned long long)arg2 recipientArray:(id)arg3 compareDetails:(BOOL)arg4;
- (void)bubbleUpChangeStatusHighlighting:(id)arg1;
- (id)contextNameForNode:(id)arg1;
- (id)imageToUseInDefaultQuickLookForNode:(id)arg1;
- (id)imageForNode:(id)arg1;
- (id)imageForIssueType:(unsigned long long)arg1;
- (BOOL)deleteNode:(id)arg1;
- (void)provideScopeChoices:(id)arg1;
- (void)providerWasInstalledForVariablesView:(id)arg1;
@property(readonly) BOOL supportsShowingRawValues;
@property(readonly) CDUnknownBlockType nodeSortComparator;
@property(readonly) id <IDEVariablesViewContextMenuDelegate> contextMenuDelegate;
- (id)_createVariableNodesFromDataValues:(id)arg1 type:(unsigned long long)arg2;
- (void)_setTextModeCompact:(id)arg1;
- (void)_setTextModeVerbose:(id)arg1;
- (void)_setCompareStateWithLastDraw:(id)arg1;
- (void)_setCompareStateWithDefault:(id)arg1;
- (void)addAnalyzerFindingContent:(id)arg1 toArray:(id)arg2;
- (void)updateCurrentLocation:(id)arg1;
- (void)updateFilteredList;
- (void)primitiveInvalidate;
- (id)initWithIdentifier:(id)arg1 andWorkspaceUIState:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) BOOL loadingNewVariablesInBackground;
@property(readonly) BOOL recordedStackFrameSelected;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

