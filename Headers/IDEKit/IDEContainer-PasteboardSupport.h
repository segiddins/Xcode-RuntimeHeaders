//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEContainer.h>

#import <IDEKit/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, DVTSymbol, IDEContainerItem, IDEFileReference, NSArray, NSImage, NSNull, NSString, NSURL;

@interface IDEContainer (PasteboardSupport) <IDEKeyDrivenNavigableItemRepresentedObject>
- (id)containerItemFromPlistRepresentation:(id)arg1;
- (id)containerItemFromNameAndIndexPath:(id)arg1 rootGroup:(id)arg2;
- (id)plistRepresentationForContainerItem:(id)arg1;
- (id)pathToContainerItem:(id)arg1;
@property(readonly, nonatomic) NSString *navigableItem_name;
@property(readonly) BOOL ide_shouldSupressNavigation;
- (id)ide_defaultNewFileTemplate;
- (id)ide_defaultNewFileTemplateForPath:(id)arg1;
- (id)ide_templateForName:(id)arg1 andCategory:(id)arg2;
@property(readonly) NSString *ideInspectedReferencedRelativeLocationContainingFolderPlaceholder;
@property(readonly) NSString *ideInspectedReferencedRelativeLocationPlaceholder;
@property(readonly) NSString *ideInspectedReferenceMessageForChoosingRelativeLocation;
@property(readonly) BOOL ideInspectedReferenceRelativeLocationShouldChooseFile;
@property(readonly) BOOL ideInspectedReferenceShowsFileTypePopUp;
@property(readonly) BOOL ideInspectedIsReferenceNameEditable;
@property(readonly) IDEContainerItem *explorableItemForNavigation;
@property(readonly) NSString *explorableName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *navigableItem_accessibilityIdentifier;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) IDEFileReference *navigableItem_fileReference;
@property(readonly, nonatomic) NSNull *navigableItem_filtered;
@property(readonly, nonatomic) NSString *navigableItem_groupIdentifier;
@property(readonly, nonatomic) NSImage *navigableItem_image;
@property(readonly, nonatomic) BOOL navigableItem_isEnabled;
@property(readonly, nonatomic) BOOL navigableItem_isLeaf;
@property(readonly, nonatomic) BOOL navigableItem_isMajorGroup;
@property(readonly, nonatomic) BOOL navigableItem_isVisible;
@property(readonly, nonatomic) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly, nonatomic) id navigableItem_parentRepresentedObject;
@property(readonly, nonatomic) BOOL navigableItem_referencedContentExists;
@property(readonly, nonatomic) DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) NSString *navigableItem_subtitle;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@end

