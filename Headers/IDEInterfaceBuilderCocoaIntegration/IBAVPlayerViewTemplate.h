//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

#import <IDEInterfaceBuilderCocoaIntegration/IBDocumentArchiving-Protocol.h>

@class NSArray, NSImage, NSString;

@interface IBAVPlayerViewTemplate : NSView <IBDocumentArchiving>
{
    NSImage *_cachedImage;
    NSArray *_minSizeConstraints;
    BOOL _enforceMinSize;
    BOOL _encodeAsRuntimeInstance;
    BOOL _showsFrameSteppingButtons;
    BOOL _showsFullScreenToggleButton;
    BOOL _showsSharingServiceButton;
    long long _controlsStyle;
    NSString *_videoGravity;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *videoGravity; // @synthesize videoGravity=_videoGravity;
@property(nonatomic) BOOL showsSharingServiceButton; // @synthesize showsSharingServiceButton=_showsSharingServiceButton;
@property(nonatomic) BOOL showsFullScreenToggleButton; // @synthesize showsFullScreenToggleButton=_showsFullScreenToggleButton;
@property(nonatomic) BOOL showsFrameSteppingButtons; // @synthesize showsFrameSteppingButtons=_showsFrameSteppingButtons;
@property(nonatomic) long long controlsStyle; // @synthesize controlsStyle=_controlsStyle;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (Class)classForCoder;
@property(copy, nonatomic) NSString *ibArchivedVideoGravity;
- (void)drawRect:(struct CGRect)arg1;
- (void)invalidateCachedImage;
- (void)setFrameSize:(struct CGSize)arg1;
- (BOOL)ibOverridablePrefersToVerticallyResizeWithContainer;
- (BOOL)ibOverridablePrefersToHorizontallyResizeWithContainer;
- (void)ibPropagatePropertiesToCopyOfReceiver:(id)arg1 forLayoutEngine:(id)arg2;
- (void)updateConstraints;
- (void)invalidateMinSizeConstraints;
- (void)invokeWithMirroredPlayerView:(CDUnknownBlockType)arg1;
- (id)ibRuntimeClassName;
- (long long)runtimeControlsStyle;
- (void)ibCustomizeForInsertionIntoDocument:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

