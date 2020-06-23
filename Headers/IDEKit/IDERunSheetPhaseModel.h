//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, DVTStackBacktrace, DVTSymbol, IDEFileReference, IDERunSheetController, IDESchemeAction, NSArray, NSImage, NSNull, NSString, NSURL;

@interface IDERunSheetPhaseModel : NSObject <DVTInvalidation, IDEKeyDrivenNavigableItemRepresentedObject>
{
    IDERunSheetController *_controller;
    NSArray *_subphases;
}

+ (void)initialize;
+ (id)keyPathsForValuesAffectingNavigableItem_childRepresentedObjects;
+ (id)keyPathsForValuesAffectingNavigableItem_subtitle;
+ (id)keyPathsForValuesAffectingNavigableItem_name;
+ (id)keyPathsForValuesAffectingRunPhase;
- (void).cxx_destruct;
@property(retain) NSArray *subphases; // @synthesize subphases=_subphases;
@property(retain) IDERunSheetController *controller; // @synthesize controller=_controller;
- (void)primitiveInvalidate;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly) NSString *schemeCommandTitle;
@property(readonly) int schemePhaseModelCommand;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_subtitle;
@property(readonly) NSString *navigableItem_name;
@property(readonly) Class postActionsSubphaseModelClass;
@property(readonly) Class preActionsSubphaseModelClass;
@property(readonly) Class detailViewControllerClass;
@property(readonly) IDESchemeAction *runPhase;
- (id)initWithRunSheetController:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic) NSString *navigableItem_accessibilityIdentifier;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
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
@property(readonly, nonatomic) DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

