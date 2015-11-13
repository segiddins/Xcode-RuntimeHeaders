//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Xcode3UI/DVTInvalidation-Protocol.h>
#import <Xcode3UI/IDEAssetTagInfoProvider-Protocol.h>

@class DVTStackBacktrace, NSMutableSet, NSSet, NSString;

@interface Xcode3AssetTagInfoProvider : NSObject <IDEAssetTagInfoProvider, DVTInvalidation>
{
    NSSet *_assetInfos;
    NSMutableSet *_listeners;
    NSMutableSet *_objectsToCancel;
}

+ (id)assetTagInfoProviderForFileReference:(id)arg1;
+ (BOOL)canProvideAssetTagInfoForFileReference:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSMutableSet *objectsToCancel; // @synthesize objectsToCancel=_objectsToCancel;
@property(retain, nonatomic) NSMutableSet *listeners; // @synthesize listeners=_listeners;
@property(retain, nonatomic) NSSet *assetInfos; // @synthesize assetInfos=_assetInfos;
- (void).cxx_destruct;
- (void)removeTaggedAssetItemListener:(id)arg1;
- (void)addTaggedAssetItemListener:(id)arg1;
- (BOOL)isTagEditable:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithContainerItem:(id)arg1;
- (id)taggedAssetItems;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

