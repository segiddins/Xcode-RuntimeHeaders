//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/DVTInvalidation-Protocol.h>
#import <IDEInterfaceBuilderKit/IBICCatalogItemObserver-Protocol.h>
#import <IDEInterfaceBuilderKit/IDEAssetTagInfoProvider-Protocol.h>

@class DVTStackBacktrace, IBICAbstractCatalogDocument, IBICAssetTagSolver, IDEFileReference, NSMutableDictionary, NSMutableSet, NSString;
@protocol IBInvalidation;

@interface IBICAssetTagInfoProvider : NSObject <IDEAssetTagInfoProvider, IBICCatalogItemObserver, DVTInvalidation>
{
    IBICAssetTagSolver *_assetTagSolver;
    IDEFileReference *_fileReference;
    IBICAbstractCatalogDocument *_catalogDocument;
    NSMutableSet *_taggedAsetItems;
    NSMutableDictionary *_catalogItemsToTaggedAssetItems;
    id <IBInvalidation> _catalogObserverToken;
    NSMutableSet *_listeners;
    NSMutableSet *_implicitTags;
}

+ (id)assetTagInfoProviderForFileReference:(id)arg1;
+ (BOOL)canProvideAssetTagInfoForFileReference:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSMutableSet *implicitTags; // @synthesize implicitTags=_implicitTags;
@property(retain, nonatomic) NSMutableSet *listeners; // @synthesize listeners=_listeners;
@property(retain, nonatomic) id <IBInvalidation> catalogObserverToken; // @synthesize catalogObserverToken=_catalogObserverToken;
@property(retain, nonatomic) NSMutableDictionary *catalogItemsToTaggedAssetItems; // @synthesize catalogItemsToTaggedAssetItems=_catalogItemsToTaggedAssetItems;
@property(retain, nonatomic) NSMutableSet *taggedAsetItems; // @synthesize taggedAsetItems=_taggedAsetItems;
@property(retain, nonatomic) IBICAbstractCatalogDocument *catalogDocument; // @synthesize catalogDocument=_catalogDocument;
@property(retain, nonatomic) IDEFileReference *fileReference; // @synthesize fileReference=_fileReference;
@property(readonly, nonatomic) IBICAssetTagSolver *assetTagSolver; // @synthesize assetTagSolver=_assetTagSolver;
- (void).cxx_destruct;
- (void)imageCatalogItem:(id)arg1 didChangeKey:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4;
- (void)removeTaggedAssetItemListener:(id)arg1;
- (void)addTaggedAssetItemListener:(id)arg1;
- (void)_addCatalogItem:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithFileReference:(id)arg1;
- (BOOL)isTagEditable:(id)arg1;
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

