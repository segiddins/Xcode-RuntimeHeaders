//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/GPUTraceOutlineItem.h>

#import <GPUDebugger/DVTInvalidation-Protocol.h>
#import <GPUDebugger/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, DVTStackBacktrace, IDEFileReference, NSArray, NSImage, NSNull, NSString, NSURL, _TtC13DVTFoundation9DVTSymbol;

@interface GPUInvestigatorReportItem : GPUTraceOutlineItem <IDEKeyDrivenNavigableItemRepresentedObject, DVTInvalidation>
{
    GPUTraceOutlineItem *_currentAutomaticItem;
    NSString *_reportUUID;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *reportUUID; // @synthesize reportUUID=_reportUUID;
@property(retain, nonatomic) GPUTraceOutlineItem *currentAutomaticItem; // @synthesize currentAutomaticItem=_currentAutomaticItem;
- (id)archive;
@property(readonly) unsigned long long hash;
- (void)setParent:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithController:(id)arg1 parent:(id)arg2 identifier:(id)arg3;
@property(readonly, nonatomic) NSImage *navigableItem_image;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
- (id)ideModelObjectTypeIdentifier;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic) NSString *navigableItem_accessibilityIdentifier;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) IDEFileReference *navigableItem_fileReference;
@property(readonly, nonatomic) NSNull *navigableItem_filtered;
@property(readonly, nonatomic) NSString *navigableItem_groupIdentifier;
@property(readonly, nonatomic) BOOL navigableItem_isEnabled;
@property(readonly, nonatomic) BOOL navigableItem_isLeaf;
@property(readonly, nonatomic) BOOL navigableItem_isMajorGroup;
@property(readonly, nonatomic) BOOL navigableItem_isVisible;
@property(readonly, nonatomic) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly, nonatomic) NSString *navigableItem_name;
@property(readonly, nonatomic) id navigableItem_parentRepresentedObject;
@property(readonly, nonatomic) BOOL navigableItem_referencedContentExists;
@property(readonly, nonatomic) _TtC13DVTFoundation9DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) NSString *navigableItem_subtitle;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

