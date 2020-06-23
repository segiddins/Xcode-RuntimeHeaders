//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUDebugger/IDEIssueRuntimeGroupingObject-Protocol.h>
#import <GPUDebugger/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, IDEDebugSession, IDEFileReference, NSArray, NSImage, NSMutableDictionary, NSNull, NSString, NSURL, _TtC13DVTFoundation9DVTSymbol;

__attribute__((visibility("hidden")))
@interface GPUIssueRuntimeGroupingObject : NSObject <IDEIssueRuntimeGroupingObject, IDEKeyDrivenNavigableItemRepresentedObject>
{
    NSString *_name;
    IDEDebugSession *_debugSession;
    NSMutableDictionary *_typeIdentifierToSubgroupTypeIdenfiers;
    NSImage *_image;
}

- (void).cxx_destruct;
@property(retain) NSImage *image; // @synthesize image=_image;
@property(copy) NSMutableDictionary *typeIdentifierToSubgroupTypeIdenfiers; // @synthesize typeIdentifierToSubgroupTypeIdenfiers=_typeIdentifierToSubgroupTypeIdenfiers;
@property(readonly) IDEDebugSession *debugSession; // @synthesize debugSession=_debugSession;
@property(copy) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSImage *navigableItem_image;
@property(readonly, nonatomic) NSString *navigableItem_name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy) id issueTypeIdentifier;
@property(readonly, nonatomic) NSString *navigableItem_accessibilityIdentifier;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
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
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(copy) NSArray *subgroupTypeIdentifiers;
@property(readonly) Class superclass;

@end

