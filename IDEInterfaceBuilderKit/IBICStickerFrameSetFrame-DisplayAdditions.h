//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICStickerFrameSetFrame.h>

#import <IDEInterfaceBuilderKit/IBICStickerPackChild-Protocol.h>

@class NSString;

@interface IBICStickerFrameSetFrame (DisplayAdditions) <IBICStickerPackChild>
+ (id)emptyThumbnailIcon;
- (id)synthesizeAncestorsIfNeededToAllowHostingInContainer:(id)arg1;
- (id)quickLookPreviewItem;
- (BOOL)applyContentFromDropIndicator:(id)arg1;
- (void)replaceSelfWithNewFrameUsingData:(id)arg1 andFilename:(id)arg2;
- (void)generateThumbnailWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)thumbnail;
- (void)setLastRequestThumbnailGeneration:(long long)arg1;
- (long long)lastRequestThumbnailGeneration;
- (long long)incrementThumbnailSourceChangeGeneration;
- (long long)thumbnailSourceChangeGeneration;
- (id)ibInspectedFilePath;
- (id)ibInspectedFrameNumber;
- (id)displayName;
- (id)typeIcon;
- (id)icon;
- (id)dragImage;
- (BOOL)isPredominantlyWhite;
- (id)bitmap;
- (id)image;
- (id)imageRep;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

