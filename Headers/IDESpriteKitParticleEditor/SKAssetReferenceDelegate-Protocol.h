//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class SKAssetReference, SKEditorDocument;

@protocol SKAssetReferenceDelegate
- (BOOL)isAssetStillInWorkspace:(SKAssetReference *)arg1;
- (void)assetReferenceInvalidated:(SKAssetReference *)arg1;
- (void)verifyAssetReferenceIsValid:(SKAssetReference *)arg1 forDocument:(SKEditorDocument *)arg2;
- (void)assetReference:(SKAssetReference *)arg1 didUpdateFromDocument:(SKEditorDocument *)arg2;
@end

