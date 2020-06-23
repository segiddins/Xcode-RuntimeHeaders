//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DebuggerFoundation/DBGFetchedDocument.h>

#import <DebuggerUI/DBGDebugNavigatorContentObjectDataSource-Protocol.h>
#import <DebuggerUI/DBGDebugNavigatorContentObjectDelegate-Protocol.h>
#import <DebuggerUI/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, NSArray, NSImage, NSNull, NSString, NSURL, _TtC13DVTFoundation9DVTSymbol;

@interface DBGFetchedDocument (DBGDebugNavigatorContentObjectDataSource) <DBGDebugNavigatorContentObjectDataSource, DBGDebugNavigatorContentObjectDelegate, IDEKeyDrivenNavigableItemRepresentedObject>
+ (void)registerTableCellViewsForDebugNavigatorContentDelegateWithOutlineView:(id)arg1;
+ (id)navigableItem_childRepresentedObjectsKeyPath;
- (id)tokenStringForDebugNavigatorContent;
- (BOOL)shouldSelectItemWithPrevious:(id)arg1 next:(id)arg2 contentDelegate:(id)arg3;
- (id)createDebugNavigatorTableCellViewWithContentDelegate:(id)arg1;
- (void)openSelectedObjectWithEventType:(unsigned long long)arg1 contentDelegate:(id)arg2;
- (id)launchSession;
- (id)associatedProcessUUID;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) NSImage *navigableItem_image;
@property(readonly, nonatomic) NSString *navigableItem_name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *navigableItem_accessibilityIdentifier;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) IDEFileReference *navigableItem_fileReference;
@property(readonly, nonatomic) NSNull *navigableItem_filtered;
@property(readonly, nonatomic) NSString *navigableItem_groupIdentifier;
@property(readonly, nonatomic) BOOL navigableItem_isEnabled;
@property(readonly, nonatomic) BOOL navigableItem_isLeaf;
@property(readonly, nonatomic) BOOL navigableItem_isMajorGroup;
@property(readonly, nonatomic) BOOL navigableItem_isVisible;
@property(readonly, nonatomic) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly, nonatomic) id navigableItem_parentRepresentedObject;
@property(readonly, nonatomic) BOOL navigableItem_referencedContentExists;
@property(readonly, nonatomic) _TtC13DVTFoundation9DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) NSString *navigableItem_subtitle;
@property(readonly) Class superclass;
@end

