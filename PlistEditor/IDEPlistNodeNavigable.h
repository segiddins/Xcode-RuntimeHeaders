//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PlistEditor/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, DVTPlistNode, IDEFileReference, IDEPlistDocument, NSImage, NSString;

@interface IDEPlistNodeNavigable : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    IDEPlistDocument *_document;
    DVTPlistNode *_node;
}

@property(retain) DVTPlistNode *node; // @synthesize node=_node;
@property(retain) IDEPlistDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (id)ideModelObjectTypeIdentifier;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_name;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end

