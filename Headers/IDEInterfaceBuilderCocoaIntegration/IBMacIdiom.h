//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBIdiom.h>

@interface IBMacIdiom : IBIdiom
{
}

- (void)populateVariantForResolvingMediaResources:(id)arg1 forDocument:(id)arg2;
- (Class)storyboardCompilerClass;
- (Class)xibCompilerClass;
- (BOOL)allowsEditingWhileCanvasZoomed;
- (BOOL)allowsZoomingCanvas;
- (BOOL)usesSceneExitPlaceholder;
- (id)xibArchivingSchema;
- (id)storyboardArchivingSchema;
- (id)storyboardScenePasteboardType;
- (id)storyboardPrimarySceneObjectPasteboardType;
- (id)viewPasteboardType;
- (id)objectPasteboardType;
- (Class)storyboardAssetProviderClass;
- (Class)xibAssetProviderClass;
- (Class)storyboardVerifierClass;
- (Class)xibVerifierClass;
- (void)populateSubtypes:(id)arg1;
- (double)defaultEditingZoomFactorForCanvasBackingScaleFactor:(double)arg1;
- (id)pluginName;
- (id)platform;
- (id)icon;
- (id)idiomName;
- (id)identifier;

@end
