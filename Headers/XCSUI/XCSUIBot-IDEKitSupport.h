//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSUIDataSource/XCSUIBot.h>

#import <XCSUI/IDECIBot-Protocol.h>
#import <XCSUI/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>
#import <XCSUI/IDELogNavigatorItem-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, IDENavigableItem, NSArray, NSImage, NSNull, NSString, NSURL, _TtC13DVTFoundation9DVTSymbol;

@interface XCSUIBot (IDEKitSupport) <IDEKeyDrivenNavigableItemRepresentedObject, IDELogNavigatorItem, IDECIBot>
+ (id)keyPathsForValuesAffectingNavigableItem_isLeaf;
+ (id)keyPathsForValuesAffectingNavigableItem_childRepresentedObjects;
+ (id)keyPathsForValuesAffectingNavigableItem_progressValue;
+ (id)keyPathsForValuesAffectingNavigableItem_name;
+ (id)keyPathsForValuesAffectingNavigableItem_statusImages;
@property(readonly, nonatomic) BOOL navigableItem_isLeaf;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) long long progressValue; // @dynamic progressValue;
- (long long)navigableItem_progressValue;
@property(readonly, nonatomic) NSString *navigableItem_name; // @dynamic navigableItem_name;
@property(readonly, nonatomic) NSString *toolTip; // @dynamic toolTip;
@property(readonly, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property(readonly, nonatomic) NSString *title; // @dynamic title;
- (id)statusImages;
- (void)duplicateBotCompletionHandler:(CDUnknownBlockType)arg1;
- (void)integrateAndClean:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteBotCompletionHandler:(CDUnknownBlockType)arg1;
- (void)menuCmd_copyLink:(id)arg1;
- (void)menuCmd_viewBotInBrowser:(id)arg1;
- (void)menuCmd_cleanAndIntegrate:(id)arg1;
- (void)menuCmd_integrate:(id)arg1;
- (void)integrateBotAndClean:(BOOL)arg1 navigator:(id)arg2;
- (void)menuCmd_deleteBot:(id)arg1;
- (void)menuCmd_deleteBotWithHostWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_menuCmd_deleteBot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)menuCmd_redefineBot:(id)arg1;
- (void)menuCmd_editBot:(id)arg1;
- (void)menuCmd_duplicateBot:(id)arg1;
- (void)showError:(id)arg1 forNavigator:(id)arg2;
- (void)menuCmd_duplicateBot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)allowsAction:(SEL)arg1;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) NSImage *image;
@property(readonly, nonatomic) NSImage *navigableItem_image;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSArray *integrations;
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

