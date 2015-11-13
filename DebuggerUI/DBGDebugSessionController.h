//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerUI/DVTInvalidation-Protocol.h>
#import <DebuggerUI/IDEDebugSessionController-Protocol.h>

@class DBGDataTipController, DBGDebugSession, DVTObservingToken, DVTStackBacktrace, IDEEditorOpenSpecifier, IDEWorkspaceDocument, NSString;

@interface DBGDebugSessionController : NSObject <IDEDebugSessionController, DVTInvalidation>
{
    IDEWorkspaceDocument *_workspaceDocument;
    BOOL _settingCurrentStackFrameFromUIGesture;
    BOOL _isNavigatingToViewDebuggerDocument;
    BOOL _isNavigatingToMemoryGraphDebuggerDocument;
    DVTObservingToken *_currentStackFrameFramePointerObservingToken;
    DVTObservingToken *_currentStackFrameDisassemblyObservingToken;
    DVTObservingToken *_viewDebuggerOpenRequestStateObservingToken;
    DVTObservingToken *_memoryGraphDebuggerOpenRequestStateObservingToken;
    DBGDataTipController *_dataTipController;
    DBGDebugSession *_debugSession;
    IDEEditorOpenSpecifier *_viewDebuggerOpenSpecifierToOpenWhenPaused;
    IDEEditorOpenSpecifier *_memoryGraphDebuggerOpenSpecifierToOpenWhenPaused;
}

+ (void)initialize;
+ (id)_createOptionsDictionaryFromOptionsElement:(id)arg1;
+ (id)descendantItemForRepresentedObject:(id)arg1 inRootNavigableItem:(id)arg2;
+ (id)_descendantItemForRepresentedObject:(id)arg1 inRootNavigableItem:(id)arg2;
+ (id)parentThreadInUIForStackFrame:(id)arg1;
@property(retain) IDEEditorOpenSpecifier *memoryGraphDebuggerOpenSpecifierToOpenWhenPaused; // @synthesize memoryGraphDebuggerOpenSpecifierToOpenWhenPaused=_memoryGraphDebuggerOpenSpecifierToOpenWhenPaused;
@property(retain) IDEEditorOpenSpecifier *viewDebuggerOpenSpecifierToOpenWhenPaused; // @synthesize viewDebuggerOpenSpecifierToOpenWhenPaused=_viewDebuggerOpenSpecifierToOpenWhenPaused;
@property(retain) DBGDebugSession *debugSession; // @synthesize debugSession=_debugSession;
@property(retain) DBGDataTipController *dataTipController; // @synthesize dataTipController=_dataTipController;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)_quickLookProviderExtensionForTypeNames:(id)arg1;
- (id)_quickLookProviderFromExtension:(id)arg1 forDataValue:(id)arg2;
- (void)_quickLookProviderForDeveloperQuickLookMethod:(id)arg1 quickLookProviderHandler:(CDUnknownBlockType)arg2;
- (void)_quickLookProviderForDataValue:(id)arg1 quickLookProviderHandler:(CDUnknownBlockType)arg2;
- (void)quickLookProviderForDataValue:(id)arg1 quickLookProviderHandler:(CDUnknownBlockType)arg2;
- (void)_userWantsRerunFromConsole:(id)arg1;
- (void)_userWantsQuitFromConsole:(id)arg1;
- (id)_openMemoryGraphDebuggerDocumentLocation:(id)arg1 inWorkspaceTabController:(id)arg2 withEventType:(unsigned long long)arg3;
- (void)openMemoryGraphDebuggerInstanceItem:(id)arg1 inWorkspaceTabController:(id)arg2 withEventType:(unsigned long long)arg3;
- (void)openMemoryGraphDebugger:(id)arg1 withEventType:(unsigned long long)arg2;
- (id)_openViewDebuggerDocumentLocation:(id)arg1 inWorkspaceTabController:(id)arg2 withEventType:(unsigned long long)arg3;
- (void)openViewDebuggerViewObject:(id)arg1 inWorkspaceTabController:(id)arg2 withEventType:(unsigned long long)arg3;
- (void)openViewDebugger:(id)arg1 withEventType:(unsigned long long)arg2;
- (void)openMemoryData:(id)arg1 withEventType:(unsigned long long)arg2;
- (void)openMemoryBrowser;
- (void)mouseExitedSidebarLineArea;
- (void)mouseOverSidebarAtLocation:(id)arg1 withinBlockAtRange:(struct _NSRange)arg2 withScreenFrame:(struct CGRect)arg3;
- (void)setSelectedNavigableItemFromUserInterface:(id)arg1;
@property(readonly) BOOL showDisassemblyWhenDebugging;
- (void)_handleShowDisassemblyWhenDebuggingChanged;
- (void)_handleDebugSessionStateChanged;
- (void)_handleFinishedRunPausesAlert;
- (void)_handleWatchpointHit:(id)arg1;
- (void)_handleProcessRunStateChanged;
- (void)_navigateToPossiblyNonExistentURL:(id)arg1 withStackFrame:(id)arg2 withEventType:(unsigned long long)arg3;
- (void)_navigateToURL:(id)arg1 withStackFrame:(id)arg2 withEventType:(unsigned long long)arg3;
- (void)_navigateEditorToDisassemblyForStackFrame:(id)arg1;
- (void)_navigateEditorToStackFramesSourceFile:(id)arg1;
- (void)_handleCurrentStackFrameChanged;
- (void)_updateFileBreakpointsLocation;
- (void)_navigateEditorToMemoryGraphDebuggerInActiveTab;
- (void)_navigateEditorToViewDebuggerInActiveTab;
- (void)_navigateEditorToCurrentStackFrame;
- (int)_navigationModeForActiveWorkspaceTabController;
- (id)_activeWorkspaceTabController;
@property(readonly) BOOL isViewingMemoryGraphDebuggerDocument;
@property(readonly) BOOL isViewingViewDebuggerDocument;
- (id)initWithLaunchSession:(id)arg1 workspaceDocument:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

