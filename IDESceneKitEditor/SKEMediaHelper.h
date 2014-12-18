//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SKEDocument;

@interface SKEMediaHelper : NSObject
{
    SKEDocument *_document;
}

+ (id)missingMediaImage;
+ (void)endObservationOfFilePathForAssociatedObject:(id)arg1;
+ (void)beginObservationOfFilePath:(id)arg1 forAssociatedObject:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (void)observeContentsOfMaterialProperty:(id)arg1;
+ (id)contentsOfMaterialProperty:(id)arg1;
+ (void)setContents:(id)arg1 ofMaterialProperty:(id)arg2;
+ (void)refreshImageContentsOfMaterialProperty:(id)arg1;
- (void).cxx_destruct;
- (void)sanitizeAllMaterialsInDocument;
- (void)performBlockBySettingAllMissingContentsToTheirWantedContents:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithDocument:(id)arg1;

@end

