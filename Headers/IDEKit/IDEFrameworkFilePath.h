//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, DVTFilePath, DVTSDK, DVTSymbol, IDEFileReference, IDETypeIdentifier, NSArray, NSImage, NSMutableArray, NSNull, NSString, NSURL;

@interface IDEFrameworkFilePath : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    NSMutableArray *_childPathComponents;
    DVTFilePath *_filePath;
    NSString *_name;
    DVTSDK *_SDK;
    unsigned long long _frameworkFilePathType;
}

+ (id)structureNavigableItemForFrameworkURL:(id)arg1 inCoordinator:(id)arg2 inWorkspace:(id)arg3 error:(id *)arg4;
+ (id)_rootFrameworksFilePath;
+ (void)_recalclulateAllSDKFrameworksFilePaths;
+ (id)_allSDKFrameworksFilePaths;
+ (void)_setAllSDKFrameworksFilePaths:(id)arg1;
+ (BOOL)isFrameworkURL:(id)arg1;
+ (id)keyPathsForValuesAffectingNavigableItem_documentType;
@property(readonly) unsigned long long frameworkFilePathType; // @synthesize frameworkFilePathType=_frameworkFilePathType;
@property(retain) DVTSDK *SDK; // @synthesize SDK=_SDK;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) DVTFilePath *filePath; // @synthesize filePath=_filePath;
@property(copy, nonatomic) NSArray *childPathComponents; // @synthesize childPathComponents=_childPathComponents;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) IDETypeIdentifier *ideModelObjectTypeIdentifier;
- (id)navigableItem_conformanceString;
@property(readonly, copy) NSString *description;
- (id)initWithFilePath:(id)arg1 name:(id)arg2 type:(unsigned long long)arg3;
- (id)init;
- (id)_pathOfNamesForDescendantWithFilePath:(id)arg1;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) NSImage *navigableItem_image;
@property(readonly, nonatomic) NSString *navigableItem_name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
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
@property(readonly, nonatomic) DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSString *navigableItem_subtitle;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end

