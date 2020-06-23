//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEPDFViewer/NSObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, DVTSymbol, IDEFileReference, NSArray, NSImage, NSNull, NSString, NSURL;

@protocol IDEKeyDrivenNavigableItemRepresentedObject <NSObject>
@property(readonly, nonatomic) NSString *navigableItem_name;

@optional
+ (NSString *)navigableItem_childRepresentedObjectsKeyPathForConformance:(NSString *)arg1;
+ (NSString *)navigableItem_childRepresentedObjectsKeyPath;
@property(readonly, nonatomic) NSNull *navigableItem_filtered;
@property(readonly, nonatomic) NSString *navigableItem_groupIdentifier;
@property(readonly, nonatomic) BOOL navigableItem_isVisible;
@property(readonly, nonatomic) BOOL navigableItem_isEnabled;
@property(readonly, nonatomic) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly, nonatomic) BOOL navigableItem_referencedContentExists;
@property(readonly, nonatomic) DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) IDEFileReference *navigableItem_fileReference;
@property(readonly, nonatomic) BOOL navigableItem_isMajorGroup;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) id navigableItem_parentRepresentedObject;
@property(readonly, nonatomic) BOOL navigableItem_isLeaf;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(readonly, nonatomic) NSString *navigableItem_accessibilityIdentifier;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSImage *navigableItem_image;
@property(readonly, nonatomic) NSString *navigableItem_subtitle;
- (DVTDocumentLocation *)navigableItem_contentDocumentLocationInDocumentURL:(NSURL *)arg1;
- (NSArray *)navigableItem_descendantRepresentedObjectsFromRepresentedObject:(id)arg1;
@end

