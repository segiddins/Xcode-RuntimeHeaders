//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebugger/GPUTraceSubEditor.h>

__attribute__((visibility("hidden")))
@interface _TtC11GPUDebugger23GPUTraceSourceSubEditor : GPUTraceSubEditor
{
    // Error parsing type: , name: dataSource
    // Error parsing type: , name: editorView
    // Error parsing type: , name: shaderSourceDocument
    // Error parsing type: , name: dataProvider
    // Error parsing type: , name: sidebar
    // Error parsing type: , name: shaderProfilerContext
    // Error parsing type: , name: userInfo
    // Error parsing type: , name: fileIssueObservingToken
    // Error parsing type: , name: codeCompletionPrefsObservingToken
    // Error parsing type: , name: fileIssueAnnotations
    // Error parsing type: , name: fontAndColorThemeDidChangeObserver
    // Error parsing type: , name: iterationViewControllerIdentifier
    // Error parsing type: , name: variableSnapshotsViewControllerIdentifier
    // Error parsing type: , name: shaderDebuggerSessionDidChangeObserver
    // Error parsing type: , name: shaderDebuggerSelectedThreadDidChangeObserver
    // Error parsing type: , name: selectedSourceRangeChangedObserver
    // Error parsing type: , name: shaderDebuggerQuicklookPopover
    // Error parsing type: , name: shaderDebuggerDataTipPopover
    // Error parsing type: , name: shaderDebuggerDataTipVariableSnapshot
    // Error parsing type: , name: shaderDebuggerDataTipPopoverEventMonitor
    // Error parsing type: , name: shaderDebuggerHighlightedLine
    // Error parsing type: , name: _shaderDebuggerSession
    // Error parsing type: , name: _shaderDebuggerPath
    // Error parsing type: , name: variableSnapshotsViewControllers
    // Error parsing type: , name: iterationViewControllers
    // Error parsing type: , name: iterationStates
    // Error parsing type: , name: positionToNodes
    // Error parsing type: , name: mouseTrackingArea
    // Error parsing type: , name: mouseInsideOfTrackingArea
    // Error parsing type: , name: mouseTrackingTimer
    // Error parsing type: , name: _shaderDebuggerSelectedNode
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

@end

