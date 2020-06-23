//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEEditor.h>

#import <GPUDebugger/DVTFindBarFindable-Protocol.h>
#import <GPUDebugger/GPUTraceShaderDebuggerSessionSubEditorDelegate-Protocol.h>
#import <GPUDebugger/NSMenuDelegate-Protocol.h>

@class DVTObservingToken, DVTScopeBarController, GPUDebuggingAdditionUIController, GPUShaderDebuggerThreadPickerPopoverController, GPUSharedTabUIState, GPUTraceAPIItem, GPUTraceDisplayableItem, GPUTraceDocument, GPUTraceOutlineItem, GPUTraceSubEditor, NSObject, NSString;
@protocol DVTCancellable, OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface GPUTraceMainEditor : IDEEditor <GPUTraceShaderDebuggerSessionSubEditorDelegate, DVTFindBarFindable, NSMenuDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    GPUSharedTabUIState *_sharedUIStateObj;
    GPUDebuggingAdditionUIController *_debuggingAdditionUIController;
    DVTObservingToken *_debuggerControllerDebugStateObserverToken;
    id <DVTCancellable> _uiControllerObserver;
    id <DVTCancellable> _previousNavRequest;
    id <DVTCancellable> _previousScrubbingRequest;
    NSObject<OS_dispatch_semaphore> *_drawSemaphore;
    GPUTraceAPIItem *_replayerTarget;
    GPUTraceSubEditor *_subEditor;
    BOOL _haveRequestedUIController;
    unsigned int _currentDisplayableIndex;
    GPUTraceAPIItem *_pendingAPIItemUpdate;
    id _firstResponderEventMonitor;
    GPUShaderDebuggerThreadPickerPopoverController *_threadPickerPopoverController;
    DVTScopeBarController *_profilerDataScopeBar;
    GPUTraceOutlineItem *_currentSelectedItem;
    GPUTraceDisplayableItem *_currentDisplayableItem;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingCurrentSelectedDocumentLocations;
+ (id)keyPathsForValuesAffectingCurrentSelectedItems;
@property(readonly, nonatomic) GPUSharedTabUIState *sharedUIStateObj; // @synthesize sharedUIStateObj=_sharedUIStateObj;
@property(readonly, nonatomic) GPUTraceSubEditor *subEditor; // @synthesize subEditor=_subEditor;
@property(retain) GPUTraceDisplayableItem *currentDisplayableItem; // @synthesize currentDisplayableItem=_currentDisplayableItem;
@property(retain) GPUTraceOutlineItem *currentSelectedItem; // @synthesize currentSelectedItem=_currentSelectedItem;
- (void).cxx_destruct;
- (id)appendScopeBarWithMessage:(id)arg1 action:(CDUnknownBlockType)arg2 icon:(id)arg3;
- (id)appendScopeBarWithMessage:(id)arg1;
- (void)appendProfilerScopeBarIfNeeded;
- (id)scopeBarsBaseView;
- (void)dumpImages:(id)arg1 asRaw:(BOOL)arg2;
- (void)shaderDebuggerSession:(id)arg1 didLaunchFrom:(id)arg2;
- (void)assignCurrentSelectedItem:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)setupEditorMenu:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (BOOL)hideGeniusCategory:(id)arg1 results:(id)arg2;
- (id)representedObjectForGeniusResultsPreviousDocumentLocation:(id)arg1;
- (void)takeFocus;
- (id)currentSelectedDocumentLocations;
- (id)currentSelectedItems;
- (BOOL)validateMenuItem:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)_documentIsInQuickLookMode;
- (void)_loadSubEditorWithIdentifier:(id)arg1 item:(id)arg2 userInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)_preloadSubEditorWithIdentifier:(id)arg1 item:(id)arg2 userInfo:(id)arg3;
- (void)_updateScrubberForDisplayableItem:(id)arg1;
- (void)_updateEditorLocationToOutlineItem:(id)arg1 userInfo:(struct NSDictionary *)arg2 takeFocus:(BOOL)arg3;
- (void)_prepareOutlineItemForEditor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_requestUpdateToAPIItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)_replayToTraceAPIItem:(id)arg1;
- (void)_onShaderDebuggerFocusThreadChange:(id)arg1;
- (void)_onShaderDebuggerThreadPickerBegin:(id)arg1;
- (void)_notifySubEditorWithNotification:(id)arg1;
- (void)_onShaderEditContinueResourceUpdated:(id)arg1;
- (void)selectDocumentLocations:(id)arg1;
- (void)navigateToItem:(id)arg1 userInfo:(id)arg2 navigationType:(unsigned long long)arg3;
- (void)navigateToItem:(id)arg1 navigationType:(unsigned long long)arg2;
- (void)navigateToItem:(id)arg1 userInfo:(id)arg2;
- (void)navigateToItem:(id)arg1;
- (id)_openSpecifierForItem:(id)arg1 userInfo:(id)arg2;
- (void)_handleDebuggingAdditionUIControllerCreated:(id)arg1;
- (void)_teardownObservers;
- (void)_setupObservers;
- (void)_setupUIControllerObservers;
- (void)primitiveInvalidate;
- (void)viewWillLayout;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewWillUninstall;
- (void)viewDidInstall;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) GPUTraceDocument *document; // @dynamic document;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

