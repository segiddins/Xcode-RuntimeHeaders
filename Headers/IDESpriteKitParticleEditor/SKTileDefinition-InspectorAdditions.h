//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpriteKit/SKTileDefinition.h>

#import <IDESpriteKitParticleEditor/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, NSArray, NSImage, NSNull, NSString, NSURL, _TtC13DVTFoundation9DVTSymbol;

@interface SKTileDefinition (InspectorAdditions) <IDEKeyDrivenNavigableItemRepresentedObject>
+ (id)keyPathsForValuesAffectingInspectorTimePerFrameEnabled;
+ (id)keyPathsForValuesAffectingInspectorTextureFilenames;
+ (id)keyPathsForValuesAffectingtimePerFrame_commit;
+ (id)keyPathsForValuesAffectingplacementWeight_commit;
+ (id)keyPathsForValuesAffectingsize_commit;
+ (id)keyPathsForValuesAffectinginspectorFlipHorizontally_commit;
+ (id)keyPathsForValuesAffectinginspectorFlipVertically_commit;
+ (id)keyPathsForValuesAffectinginspectorRotation_commit;
+ (id)keyPathsForValuesAffectinginspectorTextureFilenames_commit;
+ (id)keyPathsForValuesAffectingname_commit;
+ (id)keyPathsForValuesAffectingNavigableItem_name;
@property(readonly, nonatomic) BOOL inspectorCannotRotateDefinition;
@property(readonly, nonatomic) BOOL inspectorCanRotateDefinition;
@property(readonly, nonatomic) BOOL inspectorTimePerFrameEnabled;
@property(nonatomic) BOOL inspectorFlipHorizontally;
@property(nonatomic) BOOL inspectorFlipVertically;
@property(nonatomic) unsigned long long inspectorRotation;
- (id)getTextureFilenames;
@property(retain, nonatomic) NSArray *inspectorTextureFilenames;
- (void)settimePerFrame_commit:(double)arg1;
- (double)timePerFrame_commit;
- (void)setplacementWeight_commit:(unsigned long long)arg1;
- (unsigned long long)placementWeight_commit;
- (void)setsize_commit:(struct CGSize)arg1;
- (struct CGSize)size_commit;
- (void)setinspectorFlipHorizontally_commit:(BOOL)arg1;
- (BOOL)inspectorFlipHorizontally_commit;
- (void)setinspectorFlipVertically_commit:(BOOL)arg1;
- (BOOL)inspectorFlipVertically_commit;
- (void)setinspectorRotation_commit:(unsigned long long)arg1;
- (unsigned long long)inspectorRotation_commit;
- (void)setinspectorTextureFilenames_commit:(id)arg1;
- (id)inspectorTextureFilenames_commit;
- (void)setname_commit:(id)arg1;
- (id)name_commit;
- (id)document;
@property(readonly, nonatomic) BOOL navigableItem_isLeaf;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) NSString *navigableItem_name;
- (id)ideModelObjectTypeIdentifier;

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
@property(readonly, nonatomic) NSImage *navigableItem_image;
@property(readonly, nonatomic) BOOL navigableItem_isEnabled;
@property(readonly, nonatomic) BOOL navigableItem_isMajorGroup;
@property(readonly, nonatomic) BOOL navigableItem_isVisible;
@property(readonly, nonatomic) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly, nonatomic) id navigableItem_parentRepresentedObject;
@property(readonly, nonatomic) BOOL navigableItem_referencedContentExists;
@property(readonly, nonatomic) _TtC13DVTFoundation9DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) NSString *navigableItem_subtitle;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@end

