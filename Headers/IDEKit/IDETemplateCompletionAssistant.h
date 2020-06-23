//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDETemplateInstantiationAssistant.h>

#import <IDEKit/IDECompletionDestinationDelegate-Protocol.h>
#import <IDEKit/NSOpenSavePanelDelegate-Protocol.h>

@class IDECompletionDestinationManager, IDEGroup, IDEWorkspace, NSPopUpButton, NSSavePanel, NSString, NSURL;

@interface IDETemplateCompletionAssistant : IDETemplateInstantiationAssistant <NSOpenSavePanelDelegate, IDECompletionDestinationDelegate>
{
    BOOL _canInstantiateTemplate;
    CDUnknownBlockType _completionBlock;
    IDEGroup *_initialDestinationGroup;
    IDEWorkspace *_initialDestinationWorkspace;
    IDECompletionDestinationManager *_destinationManager;
    BOOL _shouldReplaceExisting;
    NSSavePanel *_activeSavePanel;
    NSPopUpButton *_destinationGroupPopUp;
    NSPopUpButton *_destinationWorkspacePopUp;
}

+ (void)initialize;
@property(retain) NSPopUpButton *destinationWorkspacePopUp; // @synthesize destinationWorkspacePopUp=_destinationWorkspacePopUp;
@property(retain) NSPopUpButton *destinationGroupPopUp; // @synthesize destinationGroupPopUp=_destinationGroupPopUp;
- (void).cxx_destruct;
- (BOOL)panel:(id)arg1 shouldEnableURL:(id)arg2;
- (BOOL)mainThread_panel:(id)arg1 validateURL:(id)arg2 error:(id *)arg3;
- (BOOL)panel:(id)arg1 validateURL:(id)arg2 error:(id *)arg3;
- (id)finalURLForSelectedURL:(id)arg1;
- (id)finalURLForSelectedURL:(id)arg1 fallbackCompletionName:(id)arg2;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (void)destinationManagerWorkspaceDidChange:(id)arg1;
- (void)destinationManagerGroupDidChange:(id)arg1;
- (id)targetWorkspacesForDestinationManager:(id)arg1;
- (BOOL)destinationManager:(id)arg1 shouldAddItemToMenu:(id)arg2;
@property(readonly) BOOL shouldShowDestinationGroupPopUp;
@property(readonly) BOOL shouldShowDestinationWorkspacePopUp;
@property(readonly) BOOL shouldShowAccessoryView;
- (BOOL)canGoBack;
- (void)finishWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)willResignCurrentAssistantInAssistantWindowController:(id)arg1;
- (void)beginSheetModalForWindow:(id)arg1;
- (id)configuredSavePanel;
- (id)configuredOpenPanel;
- (void)setupSavePanel:(id)arg1;
- (void)didInstantiateItems:(id)arg1;
- (void)_didInstantiateItems:(id)arg1;
- (void)instantiateFileTemplatesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)handleSavePanelResult:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)handleSavePanelResult:(long long)arg1 url:(id)arg2;
- (BOOL)canFinish;
- (BOOL)validateCanFinish;
- (void)_validateCanFinish;
- (void)setAssistantContext:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
@property(copy) NSURL *destinationURL;
- (void)primitiveInvalidate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

