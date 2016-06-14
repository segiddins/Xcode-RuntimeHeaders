//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebuggerMTLSupport/NSObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, NSImage, NSString, NSURL;

@protocol IDEKeyDrivenNavigableItemRepresentedObject <NSObject>
@property(readonly) NSString *navigableItem_name;

@optional
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly) BOOL navigableItem_referencedContentExists;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) NSString *navigableItem_accessibleImageDescription;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_subtitle;
- (DVTDocumentLocation *)navigableItem_contentDocumentLocationInDocumentURL:(NSURL *)arg1;
@end

