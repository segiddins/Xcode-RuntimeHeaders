//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTFoundation/DVTModelTreeNode.h>

#import <Xcode3UI/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>
#import <Xcode3UI/Xcode3ContainerItemWrapping-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, NSImage, NSString, PBXBuildFile, PBXReference, Xcode3BuildFileGroup, Xcode3BuildPhase;

@interface Xcode3BuildFile : DVTModelTreeNode <IDEKeyDrivenNavigableItemRepresentedObject, Xcode3ContainerItemWrapping>
{
    PBXBuildFile *_buildFile;
    NSString *_parentPathForDisplay;
    BOOL _isMigDefsFile;
    BOOL _needToCheckIfIsMigDefsFile;
    BOOL _isSceneKitFile;
    BOOL _needToCheckIfIsSceneKitFile;
}

+ (id)wrappingXcode3BuildFileForPBXBuildFile:(id)arg1;
+ (void)initialize;
@property(readonly) PBXBuildFile *pbxBuildFile; // @synthesize pbxBuildFile=_buildFile;
- (void).cxx_destruct;
- (long long)compareToBuildFile:(id)arg1;
@property(readonly) NSString *parentPathForDisplay;
@property(readonly, copy) NSString *description;
@property(readonly) BOOL isSceneKitFile; // @synthesize isSceneKitFile=_isSceneKitFile;
@property(readonly) BOOL isMigDefsFile; // @synthesize isMigDefsFile=_isMigDefsFile;
@property(copy) NSString *compilerFlags;
@property(readonly) PBXReference *navigableReference;
- (id)reference;
@property(readonly) NSString *name;
- (void)primitiveInvalidate;
- (id)initWithBuildFile:(id)arg1;
@property(readonly) NSString *navigableItem_name;

// Remaining properties
@property(readonly) Xcode3BuildPhase *buildPhase; // @dynamic buildPhase;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Xcode3BuildFileGroup *parentGroup; // @dynamic parentGroup;
@property(readonly) Class superclass;

@end

