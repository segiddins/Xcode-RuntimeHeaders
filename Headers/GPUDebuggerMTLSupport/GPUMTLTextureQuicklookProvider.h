//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <GPUDebuggerMTLSupport/GPUStateValueQuicklookProvider-Protocol.h>
#import <GPUDebuggerMTLSupport/IDEVariablesViewQuickLookProvider-Protocol.h>

@class GPUMTLQuicklookProvider, GPUMTLTextureQuicklookView, GPUStateValueQuicklookProvider, NSLayoutConstraint, NSObject, NSSlider, NSString, NSURL, NSView;
@protocol DYPMTLTexture, DYPResourceManager, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GPUMTLTextureQuicklookProvider : NSViewController <IDEVariablesViewQuickLookProvider, GPUStateValueQuicklookProvider>
{
    id <DYPMTLTexture> _texture;
    BOOL _isGPUStateValue;
    NSObject<OS_dispatch_queue> *_loadQueue;
    GPUMTLQuicklookProvider *_provider;
    GPUStateValueQuicklookProvider *_stateValueProvider;
    NSString *_selector;
    BOOL _wasCancelled;
    struct DYInterposeVersion _interposerVersion;
    int _loadedState;
    id <DYPResourceManager> _resourceManager;
    GPUMTLTextureQuicklookView *_imageView;
    NSLayoutConstraint *_imageWidth;
    NSLayoutConstraint *_imageHeight;
    NSLayoutConstraint *_bottomConstraint;
    NSView *_bottomBarView;
    NSSlider *_imageSliceSlider;
}

@property __weak NSSlider *imageSliceSlider; // @synthesize imageSliceSlider=_imageSliceSlider;
@property __weak NSView *bottomBarView; // @synthesize bottomBarView=_bottomBarView;
@property __weak NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property __weak NSLayoutConstraint *imageHeight; // @synthesize imageHeight=_imageHeight;
@property __weak NSLayoutConstraint *imageWidth; // @synthesize imageWidth=_imageWidth;
@property int loadedState; // @synthesize loadedState=_loadedState;
@property(retain, nonatomic) GPUMTLTextureQuicklookView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <DYPResourceManager> resourceManager; // @synthesize resourceManager=_resourceManager;
- (void).cxx_destruct;
- (id)dataRepresentation;
@property(readonly) NSString *extensionForTemporaryFile;
- (void)cancelLoading;
@property(readonly) NSView *quickLookView;
- (void)sliderValueChanged:(id)arg1;
- (void)_updateTexture:(id)arg1;
- (void)viewDidLoad;
- (void)_retriveFromStateValue;
- (void)_retriveFromTexture;
- (void)_startRetrieval;
- (void)_setLoadedState:(int)arg1;
- (id)initWithDataValue:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSURL *existingURLToOpen;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

