//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUDebuggerMTLSupport/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, NSImage, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface GPUMTLFunctionGeniusResult : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    NSURL *_sourceURL;
    NSString *_label;
    unsigned long long _lineNumber;
    BOOL _representsLibrary;
}

- (void).cxx_destruct;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_name;
- (id)initWithSourceURL:(id)arg1 label:(id)arg2 lineNumber:(unsigned long long)arg3 representsLibrary:(BOOL)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end

