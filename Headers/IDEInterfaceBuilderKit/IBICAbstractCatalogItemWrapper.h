//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/IDETaggedAssetItem-Protocol.h>

@class DVTFilePath, IBICAbstractCatalogItem, IBICAssetTagInfoProvider, NSImage, NSSet, NSString;

@interface IBICAbstractCatalogItemWrapper : NSObject <IDETaggedAssetItem>
{
    IBICAbstractCatalogItem *_catalogItem;
    IBICAssetTagInfoProvider *_infoProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IBICAssetTagInfoProvider *infoProvider; // @synthesize infoProvider=_infoProvider;
@property(retain, nonatomic) IBICAbstractCatalogItem *catalogItem; // @synthesize catalogItem=_catalogItem;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)_nameForItemFromRoot:(id)arg1;
@property(readonly, nonatomic) BOOL isValid;
@property(readonly, nonatomic) unsigned long long size;
@property(readonly, nonatomic) NSSet *expectedFilePaths;
@property(readonly, nonatomic) DVTFilePath *expectedBaseFilePath;
@property(readonly, nonatomic) NSImage *image;
@property(readonly, nonatomic) NSString *displayName;
@property(retain, nonatomic) NSSet *assetTags;
@property(readonly, nonatomic) NSSet *inheritedAssetTags;
- (id)initWithCatalogItem:(id)arg1 infoProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

