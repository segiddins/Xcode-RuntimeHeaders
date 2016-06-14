//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
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
    long long _controlsStyle;
}

@property(nonatomic) long long controlsStyle; // @synthesize controlsStyle=_controlsStyle;
- (void).cxx_destruct;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (Class)classForCoder;
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
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

