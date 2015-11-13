//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, DVTFilePath, DVTSDK, IDEFileReference, IDETypeIdentifier, NSArray, NSImage, NSMutableArray, NSString;

@interface IDEFrameworkFilePath : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    NSMutableArray *_childPathComponents;
    DVTFilePath *_filePath;
    NSString *_name;
    unsigned long long _frameworkFilePathType;
    DVTSDK *_SDK;
}

+ (id)structureNavigableItemForFrameworkURL:(id)arg1 inCoordinator:(id)arg2 inWorkspace:(id)arg3 error:(id *)arg4;
+ (id)_rootFrameworksFilePath;
+ (void)_recalclulateAllSDKFrameworksFilePaths;
+ (id)_allSDKFrameworksFilePaths;
+ (void)_setAllSDKFrameworksFilePaths:(id)arg1;
+ (BOOL)isFrameworkURL:(id)arg1;
+ (id)keyPathsForValuesAffectingNavigableItem_documentType;
@property(retain) DVTSDK *SDK; // @synthesize SDK=_SDK;
@property(readonly) unsigned long long frameworkFilePathType; // @synthesize frameworkFilePathType=_frameworkFilePathType;
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
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end

