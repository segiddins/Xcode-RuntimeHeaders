//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

#import <IDEInterfaceBuilderKit/IBLiveViewsBundleObserver-Protocol.h>

@class IBDocument, IBGenericDeviceTypeDescription, IBLiveViewsBundle, IBPlatformToolRequester, NSArray, NSDate, NSError, NSImage, NSNumber, NSString;

@interface IBRemoteView : NSView <IBLiveViewsBundleObserver>
{
    double _lastKnownWindowBackingScaleFactor;
    BOOL _initialized;
    BOOL _shouldShowDesignablesStatus;
    BOOL _waitingForRequestedImageInDrawRect;
    NSNumber *_explicitScaleFactor;
    long long _pendingImageRequestBehavior;
    NSError *_cachedImageError;
    NSArray *_cachedImageWarningMessages;
    NSDate *_lastCachedImageUpdateDate;
    IBLiveViewsBundle *_liveViewsBundle;
    NSError *_liveViewsBundleDiscoveryOrBuildError;
    NSImage *_cachedImage;
    NSNumber *_explicitCachedImageShouldBeRequested;
    NSString *_cachedImageRequestID;
    IBPlatformToolRequester *_cachedImageRequester;
}

+ (id)keyPathsForValuesAffectingIbInspectedShouldShowDesignablesStatus;
+ (id)keyPathsForValuesAffectingIbHasDesignableCustomClass;
- (void).cxx_destruct;
@property(nonatomic, getter=isWaitingForRequestedImageInDrawRect) BOOL waitingForRequestedImageInDrawRect; // @synthesize waitingForRequestedImageInDrawRect=_waitingForRequestedImageInDrawRect;
@property(retain, nonatomic) IBPlatformToolRequester *cachedImageRequester; // @synthesize cachedImageRequester=_cachedImageRequester;
@property(copy, nonatomic) NSString *cachedImageRequestID; // @synthesize cachedImageRequestID=_cachedImageRequestID;
@property(copy, nonatomic) NSNumber *explicitCachedImageShouldBeRequested; // @synthesize explicitCachedImageShouldBeRequested=_explicitCachedImageShouldBeRequested;
@property(retain, nonatomic) NSImage *cachedImage; // @synthesize cachedImage=_cachedImage;
@property(retain, nonatomic) NSError *liveViewsBundleDiscoveryOrBuildError; // @synthesize liveViewsBundleDiscoveryOrBuildError=_liveViewsBundleDiscoveryOrBuildError;
@property(retain, nonatomic) IBLiveViewsBundle *liveViewsBundle; // @synthesize liveViewsBundle=_liveViewsBundle;
@property(retain, nonatomic) NSDate *lastCachedImageUpdateDate; // @synthesize lastCachedImageUpdateDate=_lastCachedImageUpdateDate;
@property(nonatomic) BOOL shouldShowDesignablesStatus; // @synthesize shouldShowDesignablesStatus=_shouldShowDesignablesStatus;
@property(retain, nonatomic) NSArray *cachedImageWarningMessages; // @synthesize cachedImageWarningMessages=_cachedImageWarningMessages;
@property(retain, nonatomic) NSError *cachedImageError; // @synthesize cachedImageError=_cachedImageError;
@property(nonatomic) long long pendingImageRequestBehavior; // @synthesize pendingImageRequestBehavior=_pendingImageRequestBehavior;
@property(readonly, getter=isInitialized) BOOL initialized; // @synthesize initialized=_initialized;
@property(copy, nonatomic) NSNumber *explicitScaleFactor; // @synthesize explicitScaleFactor=_explicitScaleFactor;
- (void)invalidateDesignablesStatusInDocument:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawPlaceholder:(struct CGRect)arg1;
- (void)viewWillDraw;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)viewWillMoveToSuperview:(id)arg1;
@property(readonly) BOOL prefersCachedImageBasedDrawing;
@property(readonly) BOOL usesCachedImageBasedDrawing;
- (void)optimisticallyDropBitmapCache;
- (BOOL)cachedImageIsInvalid;
- (void)invalidateCachedImage;
- (void)invalidateRenderedScene;
- (void)invalidateCachedImageIfCompositingWithinXcode;
- (void)enumerateCachedImageKeyPaths:(CDUnknownBlockType)arg1;
- (id)cachedImageWaitingIfNeeded;
- (void)setIbExternalUserDefinedRuntimeAttributes:(id)arg1;
- (id)environmentForObservingLiveViewsBundle:(id)arg1;
- (void)liveViewsBundleWillInvalidate:(id)arg1;
- (void)liveViewsBundleDidFinishBuilding:(id)arg1 error:(id)arg2;
- (void)liveViewsBundleNeedsToBeRebuilt:(id)arg1;
- (void)waitForCachedImage;
- (void)requestCachedImageIfNeeded;
- (BOOL)effectiveCachedImageShouldBeRequested;
- (id)processRequestedImage:(id)arg1;
- (void)viewDidMoveToWindow;
- (id)marshalledRepresentationForRendering;
- (void)viewDidChangeBackingProperties;
- (void)_updateWindowBackingScaleFactorHint;
@property(readonly, nonatomic) IBGenericDeviceTypeDescription *effectiveDeviceTypeDescription;
@property(readonly, nonatomic) double effectiveScaleFactor;
@property(readonly, nonatomic) IBDocument *representedDocument;
- (void)cancelImageRequest;
- (void)awakeAfterUsingDocumentUnarchiver:(id)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)compositesViewHierarchyInRemoteTool;
- (void)ibDidSwitchToDeviceConfiguration:(id)arg1 inDocument:(id)arg2;
- (void)ibPreparePreviewInstance:(id)arg1 context:(id)arg2;
- (void)ibAwakeInDocument:(id)arg1;
- (void)ibWillRemoveFromDocument:(id)arg1 previouslyMemberOfGroup:(id)arg2 identifierInGroup:(id)arg3;
- (void)ibDidAddToDocument:(id)arg1 phase:(unsigned long long)arg2;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)ibInvalidateDesignablesStatusInDocument:(id)arg1;
- (void)ibConfigureSceneUpdateRequest:(id)arg1;
- (id)ibLiveViewsBundleForUpdatingScene:(id)arg1 inDocument:(id)arg2;
- (void)ibUpdateDesignablesStatus;
- (id)_ibDesignablesStatusForOutOfDateCachedImage;
- (id)_ibDesignablesStatusForOutOfDateBundle;
- (id)_ibDesignablesStatusForNoLiveViewsBundleAndNoLiveViewsManagerError;
- (id)_ibDesignablesStatusBasedOnErrorDomainOfError:(id)arg1 allowClickToDebug:(BOOL)arg2;
- (id)_ibDesignablesStatusForAgentWarningMessages:(id)arg1;
- (id)_ibDesignablesStatusForGenericError:(id)arg1 allowClickToDebug:(BOOL)arg2;
- (id)_ibDesignablesStatusForMessageChannelErrorDomainError:(id)arg1 allowClickToDebug:(BOOL)arg2;
- (void)_debugDesignables:(id)arg1 inDocument:(id)arg2 invokedFromTabController:(id)arg3;
- (id)_ibDesignablesStatusForLiveViewsErrorDomainError:(id)arg1 allowClickToDebug:(BOOL)arg2;
- (id)_actionForDesignablesErrorCode:(long long)arg1;
- (void)setIbExternalCustomClassModule:(id)arg1;
- (void)setIbExternalCustomClassName:(id)arg1;
- (void)ibInvalidateLiveViewsBundleIfNeededWhenChangingCustomClassDuring:(CDUnknownBlockType)arg1;
- (void)ibInvalidateLiveViewsBundleInDocument:(id)arg1;
- (BOOL)ibInspectedShouldShowDesignablesStatus;
- (BOOL)ibHasDesignableCustomClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

