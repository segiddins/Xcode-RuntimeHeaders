//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSToolbar.h>

#import <IDEInterfaceBuilderCocoaIntegration/IBDocumentArchiving-Protocol.h>

@class NSArray, NSString, NSToolbarItem;

@interface NSToolbar (IBNSToolbarIntegration) <IBDocumentArchiving>
+ (BOOL)_ibSwizzledShouldIgnoreItemIdentifier:(id)arg1;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
- (BOOL)ibCanHaveDescendantViewHierarchy;
- (BOOL)ibIsChildArbitrationUnitRoot:(id)arg1;
- (BOOL)ibIsArbitrationUnitLeaf;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (BOOL)ibShouldAddItemWithIdentifier:(id)arg1;
- (BOOL)ibContainsItemWithIdentifier:(id)arg1;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)ibInvalidateIssuesAfterDescendant:(id)arg1 changedProperty:(id)arg2 inDocument:(id)arg3 fromValue:(id)arg4;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (BOOL)frameControllerIsToolbarSheet:(id)arg1;
- (void)ibResynchronizeToolbarItemsAfterIdentifierChanges;
@property(copy) NSArray *ibShadowedDefaultToolbarItems;
@property(copy) NSArray *ibShadowedAllowedToolbarItems;
@property(copy) NSString *ibShadowedToolbarIdentifier;
@property(retain) NSToolbarItem *ibCenteredItem;
- (BOOL)ibCanBeBoundToFromObject:(id)arg1;
- (BOOL)ibMustBeBaseObjectOfEditorFrame;
- (BOOL)ibAllowsClickPassthroughToParentEditorFrames;
- (void)ibTakeDefaultItemsFromToolbar:(id)arg1;
- (id)ibConfigurableCounterpartToolbar;
- (id)ibSpringLoadedObjectAtPoint:(struct CGPoint)arg1 inFrameController:(id)arg2;
- (id)ibPasteboardTypes;
- (Class)ibEditorClass;
- (void)ibRemoveChildren:(id)arg1;
- (void)ibPopulateEditorSelectionOrderRelationLists:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (id)ibDocumentationSymbolInfosForKeyPath:(id)arg1;
- (id)ibEditorCanvasFrameControllerForDocument:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (id)ibSwizzledInitWithCoder:(id)arg1;
- (id)ibLocalAttributeKeyPaths;
- (id)ibLocalNonChildToOneRelationshipsKeyPaths;
- (id)ibLocalChildToManyRelationshipsKeyPaths;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

