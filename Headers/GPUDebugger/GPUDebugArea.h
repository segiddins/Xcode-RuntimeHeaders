//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDESplitViewDebugArea.h>

#import <GPUDebugger/DVTReplacementViewDelegate-Protocol.h>

@class DVTExtension, DVTObservingToken, DVTWrapperView, GPUDebuggingAdditionUIController, GPUShaderDebuggerVariablesViewContentProvider, GPUVariablesViewContentProvider, IDEConsoleArea, IDEVariablesView, NSSegmentedControl, NSString;
@protocol DVTCancellable, NSObject;

__attribute__((visibility("hidden")))
@interface GPUDebugArea : IDESplitViewDebugArea <DVTReplacementViewDelegate>
{
    NSSegmentedControl *_comparisonSelector;
    GPUVariablesViewContentProvider *_traceVariablesViewContentProvider;
    GPUShaderDebuggerVariablesViewContentProvider *_shaderDebuggerVariablesViewContentProvider;
    BOOL _haveRequestedUIController;
    id <DVTCancellable> _uiControllerObserver;
    GPUDebuggingAdditionUIController *_debuggingAdditionUIController;
    DVTExtension *_currentConsoleExtension;
    DVTObservingToken *_launchSessionObserver;
    id <NSObject> _shaderDebuggerSessionDidChangeObserver;
}

- (void).cxx_destruct;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (void)_launchSessionChanged:(id)arg1;
- (void)setCurrentConsoleExtension:(id)arg1;
- (id)currentConsoleExtension;
- (void)activateConsole;
- (BOOL)canActivateConsole;
- (BOOL)canReloadConsole;
- (BOOL)canClearConsole;
- (void)_comparisonSelectorClicked:(id)arg1;
- (void)_createComparisonSelector;
@property(readonly, nonatomic) IDEConsoleArea *consoleViewController;
@property(readonly, nonatomic) IDEVariablesView *variablesViewController;
- (id)toolTipForHideRightViewButton;
- (id)toolTipForShowRightViewButton;
- (id)toolTipForHideLeftViewButton;
- (id)toolTipForShowLeftViewButton;
- (id)stateSavingIdentifier;
- (void)primitiveInvalidate;
- (void)_handleDebuggingAdditionUIControllerCreated:(id)arg1;
- (void)viewWillUninstall;
- (void)setupShaderDebuggerVariablesViewContentProviderWithShaderDebuggerSession:(id)arg1;
- (void)setupTraceVariablesViewContentProvider;
- (void)viewDidInstall;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain) DVTWrapperView *view; // @dynamic view;

@end

