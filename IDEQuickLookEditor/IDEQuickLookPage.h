//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEQuickLookEditor/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, NSImage, NSString, NSURL;

@interface IDEQuickLookPage : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    NSURL *_documentURL;
    unsigned long long _pageNumber;
}

@property(readonly) unsigned long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(readonly) NSURL *documentURL; // @synthesize documentURL=_documentURL;
- (void).cxx_destruct;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) NSString *navigableItem_name;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) DVTFileDataType *navigableItem_documentType;
- (id)ideModelObjectTypeIdentifier;
@property(readonly, copy) NSString *description;
- (id)initWithDocumentURL:(id)arg1 pageNumber:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *navigableItem_accessibleImageDescription;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly) BOOL navigableItem_referencedContentExists;
@property(readonly) NSString *navigableItem_subtitle;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end

