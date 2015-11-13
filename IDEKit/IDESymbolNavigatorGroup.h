//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, IDESymbolNavigator, NSArray, NSImage, NSOperationQueue, NSString;

@interface IDESymbolNavigatorGroup : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    NSOperationQueue *_queue;
    NSArray *_children;
    NSArray *_newChildren;
    NSString *_subtitle;
    unsigned long long _generation;
    IDESymbolNavigator *_navigator;
}

@property __weak IDESymbolNavigator *navigator; // @synthesize navigator=_navigator;
- (void).cxx_destruct;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *symbolKindIdentifier;
- (void)fetchSymbols:(id)arg1 lastOperation:(id)arg2;
- (id)children;
- (void)refreshWithIndex:(id)arg1 generation:(unsigned long long)arg2 lastOperation:(id)arg3;
- (void)refreshWithIndex:(id)arg1 lastOperation:(id)arg2;
- (id)childrenWithIndex:(id)arg1;
- (id)unsortedSymbolsWithIndex:(id)arg1;
- (id)ideModelObjectTypeIdentifier;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
- (id)calculateSubtitleWithIndex:(id)arg1;
- (unsigned long long)_systemSymbolCount;
- (unsigned long long)_userSymbolCount;
- (id)_subtitleWithUserCount:(unsigned long long)arg1 systemCount:(unsigned long long)arg2;
- (id)navigatorSymbolForIndexSymbol:(id)arg1;
@property(readonly, copy) NSString *subtitle;
@property(readonly) NSString *navigableItem_name;
@property(readonly) BOOL isInProject;
- (id)initWithOperationQueue:(id)arg1 generation:(unsigned long long)arg2 symbolNavigator:(id)arg3;

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

