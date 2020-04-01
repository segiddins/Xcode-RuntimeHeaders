//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIView.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>

@class IBUIColor, NSString;

@interface IBMTKView : IBUIView <IBDocumentArchiving>
{
    BOOL _paused;
    BOOL _enableSetNeedsDisplay;
    BOOL _autoResizeDrawable;
    unsigned int _clearStencil;
    IBUIColor *_clearColor;
    double _clearDepth;
    unsigned long long _colorPixelFormat;
    unsigned long long _depthStencilPixelFormat;
    unsigned long long _sampleCount;
    long long _preferredFramesPerSecond;
}

+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(nonatomic) BOOL autoResizeDrawable; // @synthesize autoResizeDrawable=_autoResizeDrawable;
@property(nonatomic) BOOL enableSetNeedsDisplay; // @synthesize enableSetNeedsDisplay=_enableSetNeedsDisplay;
@property(nonatomic) BOOL paused; // @synthesize paused=_paused;
@property(nonatomic) long long preferredFramesPerSecond; // @synthesize preferredFramesPerSecond=_preferredFramesPerSecond;
@property(nonatomic) unsigned long long sampleCount; // @synthesize sampleCount=_sampleCount;
@property(nonatomic) unsigned long long depthStencilPixelFormat; // @synthesize depthStencilPixelFormat=_depthStencilPixelFormat;
@property(nonatomic) unsigned long long colorPixelFormat; // @synthesize colorPixelFormat=_colorPixelFormat;
@property(nonatomic) unsigned int clearStencil; // @synthesize clearStencil=_clearStencil;
@property(nonatomic) double clearDepth; // @synthesize clearDepth=_clearDepth;
@property(retain, nonatomic) IBUIColor *clearColor; // @synthesize clearColor=_clearColor;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)shouldDrawAsPlaceholder;
- (BOOL)ibSizesToFillViewControllers;
- (id)ibPasteboardTypes;
- (id)ibDefaultClearColor;
- (id)ibTypeNameForDefaultLabel;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

