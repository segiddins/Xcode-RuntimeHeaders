//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBFoundation/IBICStickerRep.h>

@interface IBICStickerRep (DisplayAdditions)
- (BOOL)isDisplayNameFindable;
- (void)generateThumbnailWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)thumbnail;
- (void)setLastRequestThumbnailGeneration:(long long)arg1;
- (long long)lastRequestThumbnailGeneration;
- (long long)incrementThumbnailSourceChangeGeneration;
- (long long)thumbnailSourceChangeGeneration;
- (id)icon;
- (id)bitmap;
- (id)dragImage;
- (id)image;
- (id)imageRep;
@end

