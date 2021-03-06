//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/GPUTraceSubEditor.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC11GPUDebugger23GPUTraceSourceSubEditor : GPUTraceSubEditor
{
    MISSING_TYPE *dataSource;
    MISSING_TYPE *editorView;
    MISSING_TYPE *shaderSourceDocument;
    MISSING_TYPE *dataProvider;
    MISSING_TYPE *sidebar;
    MISSING_TYPE *shaderProfilerContext;
    MISSING_TYPE *userInfo;
    MISSING_TYPE *fileIssueObservingToken;
    MISSING_TYPE *codeCompletionPrefsObservingToken;
    MISSING_TYPE *fileIssueAnnotations;
    MISSING_TYPE *fontAndColorThemeDidChangeObserver;
    MISSING_TYPE *iterationViewControllerIdentifier;
    MISSING_TYPE *variableSnapshotsViewControllerIdentifier;
    MISSING_TYPE *shaderDebuggerSessionDidChangeObserver;
    MISSING_TYPE *shaderDebuggerSelectedThreadDidChangeObserver;
    MISSING_TYPE *selectedSourceRangeChangedObserver;
    MISSING_TYPE *shaderDebuggerQuicklookPopover;
    MISSING_TYPE *shaderDebuggerDataTipPopover;
    MISSING_TYPE *shaderDebuggerDataTipVariableSnapshot;
    MISSING_TYPE *shaderDebuggerDataTipPopoverEventMonitor;
    MISSING_TYPE *shaderDebuggerHighlightedLine;
    MISSING_TYPE *_shaderDebuggerSession;
    MISSING_TYPE *_shaderDebuggerPath;
    MISSING_TYPE *variableSnapshotsViewControllers;
    MISSING_TYPE *iterationViewControllers;
    MISSING_TYPE *iterationStates;
    MISSING_TYPE *positionToNodes;
    MISSING_TYPE *mouseTrackingArea;
    MISSING_TYPE *mouseInsideOfTrackingArea;
    MISSING_TYPE *mouseTrackingTimer;
    MISSING_TYPE *showISA;
    MISSING_TYPE *_shaderDebuggerSelectedNode;
}

+ (BOOL)asyncLoadingSupported;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)popoverDidClose:(id)arg1;
- (void)popoverDidShow:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (void)didSelectNodeWithIterationViewController:(id)arg1 node:(id)arg2;
- (void)selectExecutionHistoryNode:(id)arg1 from:(id)arg2;
- (void)navigateToResourceItemWithSnapshotViewController:(id)arg1 resourceItem:(id)arg2;
- (void)viewDidResizeWithSnapshotViewController:(id)arg1;
- (void)toggleQuicklookWithSidebarViewController:(id)arg1;
- (void)hidePreviewWithSidebarViewController:(id)arg1;
- (void)showPreviewWithSidebarViewController:(id)arg1;
- (void)handleNotification:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)viewDidLoad;
- (void)setRepresentedObject:(id)arg1 userInfo:(id)arg2;
- (void)exportISA:(id)arg1;
- (void)jumpToFunctionDefinition:(id)arg1;
- (void)setupContextMenuWithAuxiliaryViewController:(id)arg1 selectedSymbol:(id)arg2 menu:(id)arg3;
- (void)viewDidResizeWithAuxiliaryViewController:(id)arg1;

@end

