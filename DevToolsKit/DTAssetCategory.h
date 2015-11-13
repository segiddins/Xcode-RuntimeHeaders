//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTAbstractAssetGroup, DTAssetCategoryController, NSMutableArray, NSMutableDictionary, NSString;

@interface DTAssetCategory : NSObject
{
    DTAbstractAssetGroup *rootGroup;
    DTAbstractAssetGroup *everythingGroup;
    NSMutableArray *orderedAssetSourceIdentifiers;
    NSMutableDictionary *assetSourceGroupsByAssetSourceID;
    NSMutableDictionary *identifiedAssets;
    NSString *displayName;
    NSString *identifier;
    DTAssetCategoryController *assetCategoryController;
}

+ (BOOL)isiLifeAssetCategory:(id)arg1;
+ (id)iMovieAssetCategory;
+ (id)iPhotoAssetCategory;
+ (id)regularGroupImage;
+ (id)smartGroupImage;
+ (id)everythingGroupImage;
+ (id)assetSourceGroupImage;
- (void)removeAllAssets;
- (void)removeAsset:(id)arg1;
- (void)addAsset:(id)arg1 toAssetSourceWithIdentifier:(id)arg2 subpath:(id)arg3;
- (id)assetWithIdentifier:(id)arg1;
- (id)groupWithDisplayPath:(id)arg1 fromGroup:(id)arg2 create:(BOOL)arg3;
- (void)setImage:(id)arg1 forAssetSourceWithIdentifier:(id)arg2 subpath:(id)arg3;
- (void)setDisplayName:(id)arg1 forAssetSourceWithIdentifier:(id)arg2;
- (void)removeSubpath:(id)arg1 fromAssetSourceWithIdentifier:(id)arg2;
- (id)subpathsForAssetSourceWithIdentifier:(id)arg1;
- (void)setLibraryGroupImage:(id)arg1;
- (void)setLibraryGroupDisplayName:(id)arg1;
- (void)removeAssetSourceWithIdentifier:(id)arg1;
- (void)addAssetSourceWithIdentifier:(id)arg1 andDisplayName:(id)arg2;
- (void)insertAssetSourceWithIdentifier:(id)arg1 andDisplayName:(id)arg2 atIndex:(long long)arg3;
- (void)setOrderedAssetSourceIdentifiers:(id)arg1;
- (id)orderedAssetSourceIdentifiers;
- (BOOL)containsAssetSourceWithIdentifier:(id)arg1;
- (BOOL)containsAssetWithIdentifier:(id)arg1;
- (id)assetGroupForAssetSourceWithIdentifier:(id)arg1;
- (id)everythingGroup;
- (id)rootGroup;
- (id)assets;
- (id)identifiedAssets;
- (id)displayName;
- (id)identifier;
- (id)assetCategoryController;
- (void)setAssetCategoryController:(id)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 andDisplayName:(id)arg2;
- (id)placeholderImage;

@end

