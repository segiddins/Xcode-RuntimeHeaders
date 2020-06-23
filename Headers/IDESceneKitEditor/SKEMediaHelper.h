//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SKESceneDocument;

@interface SKEMediaHelper : NSObject
{
    SKESceneDocument *_document;
}

+ (id)referencedImagesAbsolutePathInScene:(id)arg1 atPath:(id)arg2 replaceWithDestinationFolder:(id)arg3;
+ (void)_addMaterialProperty:(id)arg1 toReferencedImageList:(id)arg2 scenePath:(id)arg3 replaceWithDestinationFolder:(id)arg4;
+ (id)genericPreviewForSceneAtURL:(id)arg1 size:(struct CGSize)arg2 asynchronousPreviewGenerationCompletionHandler:(CDUnknownBlockType)arg3;
+ (id)previewForSceneAtURL:(id)arg1 size:(struct CGSize)arg2;
+ (id)genericPreviewForScene:(id)arg1 size:(struct CGSize)arg2 asynchronousPreviewGenerationCompletionHandler:(CDUnknownBlockType)arg3;
+ (id)previewForScene:(id)arg1 size:(struct CGSize)arg2;
+ (id)genericPreviewForNode:(id)arg1 size:(struct CGSize)arg2 asynchronousPreviewGenerationCompletionHandler:(CDUnknownBlockType)arg3;
+ (id)previewForNode:(id)arg1 size:(struct CGSize)arg2;
+ (void)endObservationOfFilePathForAssociatedObject:(id)arg1;
+ (void)beginObservationOfFilePath:(id)arg1 forAssociatedObject:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (void)observeContentsOfMaterialProperty:(id)arg1;
+ (void)observeContentsOfMaterial:(id)arg1;
+ (void)beginObservationOfPath:(id)arg1 forReferenceNode:(id)arg2;
+ (void)sanitizeMaterial:(id)arg1 withDocument:(id)arg2;
+ (void)sanitizeMaterialProperty:(id)arg1 withDocument:(id)arg2;
+ (id)contentsOfMaterialProperty:(id)arg1;
+ (void)setContents:(id)arg1 ofMaterialProperty:(id)arg2;
+ (id)relativePathForImagePath:(id)arg1 document:(id)arg2;
+ (id)bundleRelativePathForPath:(id)arg1;
+ (id)absolutePathForImagePath:(id)arg1 documentPath:(id)arg2;
+ (id)absolutePathForImagePath:(id)arg1 document:(id)arg2;
+ (void)refreshImageContentsOfMaterialProperty:(id)arg1;
- (void).cxx_destruct;
- (void)sanitizeAllNodesInDocument;
- (void)sanitizeAllReferencesInDocument;
- (void)sanitizeAllParticleImagesInDocument;
- (void)sanitizeAllMaterialsInDocument;
- (id)init;
- (id)initWithDocument:(id)arg1;

@end

