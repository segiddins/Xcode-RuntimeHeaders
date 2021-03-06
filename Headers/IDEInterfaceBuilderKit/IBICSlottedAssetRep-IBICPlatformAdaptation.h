//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBFoundation/IBICSlottedAssetRep.h>

@class NSBitmapImageRep, NSImage, NSImageRep;

@interface IBICSlottedAssetRep (IBICPlatformAdaptation)
+ (void)drawDefaultImageForSize:(struct CGSize)arg1 scale:(id)arg2 andHue:(double)arg3;
+ (id)attributedStringForSize:(struct CGSize)arg1 andScale:(id)arg2 inRect:(struct CGRect)arg3;
+ (id)textDarkShadow;
+ (id)textLightShadow;
+ (id)darkShadow;
+ (id)lightShadow;
+ (void)swizzleInDisplayOverrides;
+ (id)assetRepWithRepIdentifier:(id)arg1 forPasteboardReferencedFilePath:(id)arg2;
- (BOOL)validateSlottedAssetRepForWriting:(id)arg1 withOptions:(id)arg2 forOptionsKey:(id)arg3 andFailureIssue:(id *)arg4;
- (BOOL)validateSlottedAssetRepForWriting:(id)arg1 withOptions:(id)arg2 andFailureIssue:(id *)arg3;
- (BOOL)isDisplayNameFindable;
- (id)ibInspectedImageSize;
- (id)ibInspectedColorSpaceName;
- (id)quickLookPreviewItem;
- (id)itemsForOpeningInExternalEditor;
- (void)populatePlistWithDescriptionForIctool:(id)arg1;
- (BOOL)shouldIncludeInPlistDescriptionForIctool;
- (void)populatePasteboardContext:(id)arg1 forChild:(id)arg2;
- (void)prepareToReatatchForDragWithContext:(id)arg1;
- (void)prepareToDetatchForDragWithContext:(id)arg1;
- (id)catalogItemForHostingInContainer:(id)arg1;
- (BOOL)isDraggable;
- (void)performDeleteInDocument:(id)arg1;
- (id)icon;
@property(readonly, nonatomic) NSImage *thumbnail;
- (void)setLastRequestThumbnailGeneration:(long long)arg1;
- (long long)lastRequestThumbnailGeneration;
- (long long)incrementThumbnailSourceChangeGeneration;
- (long long)thumbnailSourceChangeGeneration;
- (void)generateThumbnailWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)dragImage;
@property(readonly, nonatomic) NSImage *image;
@property(readonly, nonatomic) NSBitmapImageRep *bitmap;
@property(readonly, nonatomic) NSImageRep *imageRep;
@end

