//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Xcode3UI/DVTInvalidation-Protocol.h>
#import <Xcode3UI/NSObject-Protocol.h>

@class IDEContainerItem, NSSet, NSString;
@protocol IDEAssetTagChangeListener;

@protocol IDEAssetTagInfoProvider <DVTInvalidation, NSObject>
+ (id)assetTagInfoProviderForFileReference:(IDEContainerItem *)arg1;
+ (BOOL)canProvideAssetTagInfoForFileReference:(IDEContainerItem *)arg1;
- (BOOL)isTagEditable:(NSString *)arg1;
- (void)removeTaggedAssetItemListener:(id <IDEAssetTagChangeListener>)arg1;
- (void)addTaggedAssetItemListener:(id <IDEAssetTagChangeListener>)arg1;
- (NSSet *)taggedAssetItems;
@end

