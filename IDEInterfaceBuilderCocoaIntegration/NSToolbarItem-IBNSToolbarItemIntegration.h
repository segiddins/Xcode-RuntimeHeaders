//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSToolbarItem.h>

@interface NSToolbarItem (IBNSToolbarItemIntegration)
+ (id)keyPathsForValuesAffectingIbInspectedMaxSizeHeight;
+ (id)keyPathsForValuesAffectingIbInspectedMaxSizeWidth;
+ (id)keyPathsForValuesAffectingIbInspectedMinSizeHeight;
+ (id)keyPathsForValuesAffectingIbInspectedMinSizeWidth;
+ (id)keyPathsForValuesAffectingIbInspectedItemIdentifier;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
- (void)ibSetupTriggerForSegueTemplate:(id)arg1 inCompilationUnit:(id)arg2;
- (id)ibSegueTriggers;
- (id)ibDefaultSegueTrigger;
- (BOOL)ibCanHaveDescendantViewHierarchy;
- (BOOL)ibIsChildArbitrationUnitRoot:(id)arg1;
- (void)setIbInspectedMaxSizeHeight:(double)arg1;
- (double)ibInspectedMaxSizeHeight;
- (void)setIbInspectedMaxSizeWidth:(double)arg1;
- (double)ibInspectedMaxSizeWidth;
- (void)setIbInspectedMinSizeHeight:(double)arg1;
- (double)ibInspectedMinSizeHeight;
- (void)setIbInspectedMinSizeWidth:(double)arg1;
- (double)ibInspectedMinSizeWidth;
- (void)setIbInspectedItemIdentifier:(id)arg1;
- (id)ibInspectedItemIdentifier;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)ibInitialConnectionLabelSearchTerm;
- (id)ibInspectedToolTip;
- (void)setIbInspectedToolTip:(id)arg1;
- (id)ibEffectiveRuntimeToolbarItemIdentifier;
- (void)setIbExternalIsSelectable:(BOOL)arg1;
- (BOOL)ibExternalIsSelectable;
- (void)setIbShadowedToolbarItemIdentifier:(id)arg1;
- (id)ibShadowedToolbarItemIdentifier;
- (BOOL)ibIsChildInitiallySelectable:(id)arg1;
- (BOOL)ibIsChildViewUserMovable:(id)arg1;
- (void)setToolbarItemIdentifier:(id)arg1;
- (Class)ibEditorClass;
- (id)ibPasteboardTypes;
- (void)ibDidPutObjects:(id)arg1 onPasteboard:(id)arg2 fromDocument:(id)arg3 context:(id)arg4;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (BOOL)ibCanBeBoundToFromObject:(id)arg1;
- (id)ibQualifyingInfoForDefaultLabel;
- (void)ibTakePastedAttributes:(id)arg1 inConfiguration:(id)arg2;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (id)ibDocumentationPropertyInfosForKeyPath:(id)arg1;
- (id)ibLocalLocalizableStringsAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (Class)classForDocumentArchiver:(id)arg1;
@end

