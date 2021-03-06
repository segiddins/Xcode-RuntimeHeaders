//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBFoundation/IBICStickerFrameSetFrame.h>

#import <IDEInterfaceBuilderKit/IBICAbstractCollectionChild-Protocol.h>

@class NSString;

@interface IBICStickerFrameSetFrame (DisplayAdditions) <IBICAbstractCollectionChild>
- (double)offsetForDropAfterOrnament;
- (double)offsetForDropBeforeOrnament;
- (id)catalogItemForHostingInContainer:(id)arg1;
- (id)quickLookPreviewItem;
- (BOOL)applyContentFromDropIndicator:(id)arg1;
- (id)replaceSelfWithNewFrameUsingData:(id)arg1 andFilename:(id)arg2;
- (void)generateThumbnailWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)thumbnail;
- (void)setLastRequestThumbnailGeneration:(long long)arg1;
- (long long)lastRequestThumbnailGeneration;
- (long long)incrementThumbnailSourceChangeGeneration;
- (long long)thumbnailSourceChangeGeneration;
- (id)ibInspectedFilePath;
- (id)ibInspectedFrameNumber;
- (BOOL)isDisplayNameFindable;
- (BOOL)isDisplayNameEditable;
- (id)displayName;
- (id)icon;
- (id)dragImage;
- (id)bitmap;
- (id)image;
- (id)imageRep;
- (id)positionsForStickerComponentID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

