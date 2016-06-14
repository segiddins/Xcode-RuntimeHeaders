//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUTraceDebuggerUI/GPUMainEditor.h>

#import <GPURenderTargetEditor/DVTChooserViewDelegate-Protocol.h>
#import <GPURenderTargetEditor/DVTFindBarFindable-Protocol.h>
#import <GPURenderTargetEditor/GPUFilteringCoordinatorDelegate-Protocol.h>
#import <GPURenderTargetEditor/IDEFilterControlBarTarget-Protocol.h>
#import <GPURenderTargetEditor/IDEGPUAssistantEditorAdditions-Protocol.h>

@class DVTChooserView, DVTObservingToken, DVTReplacementView, GPUFilteringCoordinator, GPUResourceEditor, GPUSharedTabUIState, GPUTraceDocumentLocation, GPUTraceModelFactory, IDEFilterControlBar, NSArray, NSDictionary, NSMutableArray, NSString, NSView;

__attribute__((visibility("hidden")))
@interface GPUTraceResourcesEditor : GPUMainEditor <IDEGPUAssistantEditorAdditions, DVTFindBarFindable, DVTChooserViewDelegate, IDEFilterControlBarTarget, GPUFilteringCoordinatorDelegate>
{
    GPUTraceModelFactory *_modelFactory;
    GPUTraceDocumentLocation *_currentLocation;
    NSDictionary *_previousEditorState;
    BOOL _loadingEditor;
    DVTObservingToken *_programShaderObserver;
    int _lastShaderType;
    GPUSharedTabUIState *_sharedTabState;
    NSString *_identifier;
    GPUResourceEditor *_currentSubViewController;
    NSMutableArray *_arrangedResources;
    NSArray *_resources;
    NSView *_resourceContentView;
    DVTReplacementView *_replacementView;
    NSView *_tabBarContainerView;
    DVTChooserView *_chooserView;
    IDEFilterControlBar *_filterControlBar;
    NSString *_filterString;
    GPUFilteringCoordinator *_filteringCoordinator;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
@property(retain, nonatomic) GPUFilteringCoordinator *filteringCoordinator; // @synthesize filteringCoordinator=_filteringCoordinator;
@property(copy, nonatomic) NSString *filterString; // @synthesize filterString=_filterString;
@property(retain, nonatomic) IDEFilterControlBar *filterControlBar; // @synthesize filterControlBar=_filterControlBar;
@property(retain, nonatomic) DVTChooserView *chooserView; // @synthesize chooserView=_chooserView;
@property(retain, nonatomic) NSView *tabBarContainerView; // @synthesize tabBarContainerView=_tabBarContainerView;
@property(retain, nonatomic) DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property(retain, nonatomic) NSView *resourceContentView; // @synthesize resourceContentView=_resourceContentView;
@property(retain, nonatomic) NSArray *resources; // @synthesize resources=_resources;
@property(retain, nonatomic) NSMutableArray *arrangedResources; // @synthesize arrangedResources=_arrangedResources;
@property(nonatomic) __weak GPUResourceEditor *currentSubViewController; // @synthesize currentSubViewController=_currentSubViewController;
- (void).cxx_destruct;
- (void)dumpImages:(id)arg1 asRaw:(BOOL)arg2;
- (struct _NSRange)selectedRangeForFindBar:(id)arg1;
- (id)startingLocationForFindBar:(id)arg1 findingBackwards:(BOOL)arg2;
- (void)dvtFindBar:(id)arg1 didUpdateCurrentResult:(id)arg2;
- (void)dvtFindBar:(id)arg1 didUpdateResults:(id)arg2;
- (BOOL)findBarSupported;
- (void)_takeStateDictionaryFromPreviousGPUAssistantEditor:(id)arg1;
- (void)_restoreTabChooserState;
- (BOOL)_shouldInstallGPUEditorWithPreviousStateDictionaryOrNil:(id)arg1;
- (id)arrangedItems;
- (id)originalItems;
- (void)_filteringDidFinish;
- (id)filterButtonMenu;
- (id)filterDefinitionIdentifier;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (id)_findOutlineItemForHistoryAction;
- (id)_currentAssistantDocumentLocations;
- (id)_getSubEditorItemFromPreviousEditorState;
- (void)showResourceItem:(id)arg1;
- (void)_openResourceLocation:(id)arg1;
- (void)handleOpenScrubberTriggeredNewLocation:(id)arg1;
- (void)handleDebugBarNavigationWithDocumentLocation:(id)arg1;
- (void)selectDocumentLocations:(id)arg1;
- (id)currentSelectedDocumentLocations;
- (id)currentSelectedItems;
- (void)_setCurrentLocation:(id)arg1;
- (void)_loadResourceEditorForNavItem:(id)arg1;
- (void)_handleFunctionResourceItem:(id)arg1;
- (id)_findNavigableForShaderItem:(id)arg1;
- (BOOL)_isValidSourceURLPathForShaderItem:(id)arg1;
- (id)_editorForResourceItem:(id)arg1;
- (void)handleResourceItemThumbnailsRecalculation:(id)arg1;
- (void)handleReloadResourceItem:(id)arg1;
- (void)updateResourcesView;
- (void)resetResourcesInTree:(id)arg1;
- (void)_resetResource:(id)arg1;
- (void)_loadRelevantDisplayableForProgramOrShaderItem:(id)arg1;
- (void)didSetupEditor;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)primitiveInvalidate;
- (void)viewDidLoad;
- (void)loadView;
- (void)chooserView:(id)arg1 userDidSelectChoices:(id)arg2;
- (void)replaceResourceViewModeWithChoice:(id)arg1;
- (void)_initTabBar;
- (void)takeFocus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

