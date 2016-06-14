//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpriteKit/SKNode.h>

#import <IDESpriteKitParticleEditor/GTFActionLibraryTarget-Protocol.h>
#import <IDESpriteKitParticleEditor/SKDocumentMember-Protocol.h>

@class GTFActionLibraryTargetThumbnail, NSIndexPath, NSObject, NSString, NSValue, SKEditorDocument;
@protocol NSCopying, SKSceneNavigating><SKSceneSelecting;

@interface SKNode (EditorAdditions) <SKDocumentMember, GTFActionLibraryTarget>
+ (id)keyPathsForValuesAffectingGtf_name;
+ (id)keyPathsForValuesAffectingGtf_thumbnailImage;
@property(readonly, nonatomic) NSString *gtf_name;
- (void)sk_invalidateThumbnail;
@property(readonly, nonatomic) GTFActionLibraryTargetThumbnail *gtf_thumbnailImage;
- (void)setGtf_uid:(id)arg1;
@property(readonly, nonatomic) id <NSCopying> gtf_uid;
@property(nonatomic) __weak SKEditorDocument *document;
- (struct CGRect)sk_displayRectInView:(id)arg1;
@property(readonly, nonatomic) BOOL sk_displaysAnchorPointHandle;
@property(readonly, nonatomic) BOOL sk_displaysRotationHandle;
@property(readonly, nonatomic) BOOL sk_displaysScaleHandles;
@property(readonly, nonatomic) BOOL sk_displaysBoundsBox;
- (void)sk_enumerateAllSubNodesInclusivelyExcludingReferencedUsingBlock:(CDUnknownBlockType)arg1;
- (void)sk_enumerateAllSubNodesExcludingReferencedUsingBlock:(CDUnknownBlockType)arg1;
- (void)sk_enumerateAllSubNodesInclusivelyUsingBlock:(CDUnknownBlockType)arg1;
- (void)sk_enumerateAllSubNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)sk_enumerateChildNodesUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) SKNode *sk_greatestReferenceNodeAncestor;
- (id)sk_unidenticalCopy;
@property(retain, nonatomic) NSValue *sk_uid;
- (double)sk_globalZPosition;
- (id)sk_childFromIndexPath:(id)arg1;
- (id)sk_indexPathRelativeToNode:(id)arg1;
- (void)sk_invalidateIndexPath;
@property(readonly, nonatomic) NSIndexPath *sk_indexPath;
@property(retain, nonatomic) NSObject<SKSceneNavigating><SKSceneSelecting> *sk_navigable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

