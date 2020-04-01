//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSUIDataSource/XCSUIIntegration.h>

#import <XCSUI/IDECIBotRun-Protocol.h>
#import <XCSUI/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>
#import <XCSUI/IDELogNavigatorItem-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, IDENavigableItem, NSArray, NSImage, NSNull, NSString, NSURL, _TtC13DVTFoundation9DVTSymbol;

@interface XCSUIIntegration (IDEKitSupport) <IDEKeyDrivenNavigableItemRepresentedObject, IDELogNavigatorItem, IDECIBotRun>
+ (id)keyPathsForValuesAffectingNavigableItem_isLeaf;
+ (id)keyPathsForValuesAffectingNavigableItem_progressValue;
+ (id)keyPathsForValuesAffectingSubtitle;
+ (id)keyPathsForValuesAffectingNavigableItem_name;
+ (id)keyPathsForValuesAffectingStatusImages;
+ (id)keyPathsForValuesAffectingNavigableItem_childRepresentedObjects;
@property(readonly, nonatomic) BOOL navigableItem_isLeaf;
@property(readonly, nonatomic) long long progressValue; // @dynamic progressValue;
- (long long)navigableItem_progressValue;
@property(readonly, nonatomic) NSString *toolTip; // @dynamic toolTip;
- (id)buildAgent;
@property(readonly, nonatomic) NSString *subtitle; // @dynamic subtitle;
- (id)timestampDisplayString;
- (id)integrationTypeString;
- (BOOL)isPending;
- (id)currentStatus;
- (void)deleteIntegrationCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelIntegrationCompletionHandler:(CDUnknownBlockType)arg1;
- (void)integrateAndClean:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)menuCmd_notifyWhenWatchedIntegrationFinishes:(id)arg1;
- (void)menuCmd_copyLink:(id)arg1;
- (void)menuCmd_viewIntegrationInBrowser:(id)arg1;
- (void)menuCmd_viewBotInBrowser:(id)arg1;
- (void)menuCmd_deleteIntegration:(id)arg1;
- (void)menuCmd_cancelIntegration:(id)arg1;
- (void)menuCmd_cleanAndIntegrate:(id)arg1;
- (void)menuCmd_integrate:(id)arg1;
- (void)integrateBotAndClean:(BOOL)arg1 navigator:(id)arg2;
- (id)enableItem:(SEL)arg1;
- (BOOL)allowsAction:(SEL)arg1;
@property(readonly, nonatomic) NSString *title; // @dynamic title;
@property(readonly, nonatomic) NSString *navigableItem_name; // @dynamic navigableItem_name;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) NSImage *navigableItem_image;
- (id)statusImages;
- (id)reports;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) NSImage *image;
- (long long)number;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *identifier;
@property(nonatomic) __weak IDENavigableItem *navigableItem;
@property(readonly, nonatomic) NSString *navigableItem_accessibilityIdentifier;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly, nonatomic) IDEFileReference *navigableItem_fileReference;
@property(readonly, nonatomic) NSNull *navigableItem_filtered;
@property(readonly, nonatomic) NSString *navigableItem_groupIdentifier;
@property(readonly, nonatomic) BOOL navigableItem_isEnabled;
@property(readonly, nonatomic) BOOL navigableItem_isMajorGroup;
@property(readonly, nonatomic) BOOL navigableItem_isVisible;
@property(readonly, nonatomic) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly, nonatomic) id navigableItem_parentRepresentedObject;
@property(readonly, nonatomic) BOOL navigableItem_referencedContentExists;
@property(readonly, nonatomic) _TtC13DVTFoundation9DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSString *navigableItem_subtitle;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(copy, nonatomic) CDUnknownBlockType statusViewUpdateBlock;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *textStatus;
@end

