//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditor.h>

@class DVTObservingToken, GPUSharedTabUIState, GPUTraceDisplayableItem, GPUTraceOutlineItem, NSObject;
@protocol IDEOpenRequest, OS_dispatch_queue;

@interface GPUMainEditor : IDEEditor
{
    NSObject<OS_dispatch_queue> *_queue;
    GPUSharedTabUIState *_sharedUIStateObj;
    BOOL _navIdle;
    BOOL _ignoreDebugBarModelItemSelected;
    unsigned int _nextSliderIndex;
    BOOL _drawIdle;
    id <IDEOpenRequest> _sliderOpenRequestToken;
    int _currentRequestStepperDirection;
    BOOL _alreadyDrawn;
    GPUTraceOutlineItem *_nextNavItem;
    DVTObservingToken *_debugBarSelectedModelItemToken;
    DVTObservingToken *_gpuTraceCurrentLocationObserverToken;
    GPUTraceDisplayableItem *_currentDisplayableItem;
}

@property(retain, nonatomic) GPUTraceDisplayableItem *currentDisplayableItem; // @synthesize currentDisplayableItem=_currentDisplayableItem;
- (void).cxx_destruct;
- (void)onDeviceCacheInvalidated:(id)arg1;
- (void)updateMasterLocation:(id)arg1;
- (void)_openSubEditorLocation:(id)arg1;
- (void)handleOpenScrubberTriggeredNewLocation:(id)arg1;
- (void)updateDisplayablePosition:(id)arg1;
- (void)scrubToDisplayableIndex:(unsigned int)arg1;
- (void)_updateScrubberForDisplayableItem:(id)arg1 isAssociatedDisplayable:(BOOL)arg2;
- (void)handleNewDocumentLocations:(id)arg1;
- (void)updateCurrentTraceItem:(id)arg1;
- (BOOL)_updateCurrentMainTraceItem:(id)arg1;
- (void)_handleUpdatedDrawResponse:(id)arg1 navItem:(id)arg2 updateCompletionBlock:(CDUnknownBlockType)arg3;
- (void)handleUpdatedMainTraceItem:(id)arg1;
- (id)updateViewsWithDisplayableItem:(id)arg1;
- (id)_updateToStateItem:(id)arg1;
- (id)updateToDisplayableItem:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)_setupDebugBar;
- (void)handleDebugBarNavigationWithDocumentLocation:(id)arg1;
- (void)_setupScrubber;
- (void)primitiveInvalidate;
- (void)loadView;

@end

