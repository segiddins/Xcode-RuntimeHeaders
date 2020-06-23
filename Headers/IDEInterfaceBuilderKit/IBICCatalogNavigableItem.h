//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDENavigableItem.h>

#import <IDEInterfaceBuilderKit/IBICCatalogItemObserver-Protocol.h>

@class NSArray, NSImage, NSString;
@protocol IBInvalidation;

@interface IBICCatalogNavigableItem : IDENavigableItem <IBICCatalogItemObserver>
{
    id <IBInvalidation> _itemObservationToken;
    NSImage *_image;
    NSString *_name;
    NSArray *_displayOrderedChildren;
}

- (void).cxx_destruct;
- (id)childItemsToSearchForFindingDescendant:(id)arg1;
- (id)contentDocumentLocation;
- (id)documentType;
- (unsigned long long)indexOfChildItemForIdentifier:(id)arg1;
- (id)identifierForChildItem:(id)arg1;
- (BOOL)isLeaf;
- (id)childRepresentedObjects;
- (void)setImage:(id)arg1;
- (id)image;
- (void)setName:(id)arg1;
- (id)name;
- (id)representedObject;
- (void)imageCatalogItemDidChangeDisplayOrderedChildren:(id)arg1;
- (void)imageCatalogItemDidChangeDisplayProperties:(id)arg1;
- (void)imageCatalogItem:(id)arg1 didChangeKey:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4;
- (void)imageCatalogItemDiskContentsDidChange:(id)arg1;
- (void)refreshContentIfNeededWithChangeToItem:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithRepresentedObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

