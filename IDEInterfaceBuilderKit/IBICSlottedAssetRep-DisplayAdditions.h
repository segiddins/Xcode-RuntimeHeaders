//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IBFoundation/IBICSlottedAssetRep.h>

@class NSBitmapImageRep, NSImage, NSImageRep;

@interface IBICSlottedAssetRep (DisplayAdditions)
+ (id)unsetImageForSize:(struct CGSize)arg1;
+ (id)emptyThumbnailIcon;
+ (void)swizzleInDisplayOverrides;
+ (id)assetRepWithRepIdentifier:(id)arg1 forPasteboardReferencedFilePath:(id)arg2;
- (id)ibInspectedImageSize;
- (id)ibInspectedColorSpaceName;
- (id)quickLookPreviewItem;
- (id)itemsForOpeningInExternalEditor;
- (void)populatePlistWithDescriptionForIctool:(id)arg1;
- (BOOL)shouldIncludeInPlistDescriptionForIctool;
- (void)prepareToReatatchForDragWithContext:(id)arg1;
- (void)prepareToDetatchForDragWithContext:(id)arg1;
- (id)synthesizeAncestorsIfNeededToAllowHostingInFolder;
- (BOOL)isDraggable;
- (void)performDeleteInDocument:(id)arg1;
- (BOOL)swizzledUpdateModificationDatesWithMutationResult:(id)arg1;
- (id)icon;
@property(readonly, nonatomic) NSImage *thumbnail;
- (void)setLastRequestThumbnailGeneration:(long long)arg1;
- (long long)lastRequestThumbnailGeneration;
- (long long)incrementThumbnailSourceChangeGeneration;
- (long long)thumbnailSourceChangeGeneration;
- (void)generateThumbnailWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)dragImage;
@property(readonly, nonatomic) NSImage *image;
@property(readonly, nonatomic) BOOL isPredominantlyWhite;
@property(readonly, nonatomic) NSBitmapImageRep *bitmap;
@property(readonly, nonatomic) NSImageRep *imageRep;
@end

