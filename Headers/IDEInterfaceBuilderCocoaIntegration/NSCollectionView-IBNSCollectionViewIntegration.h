//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSCollectionView.h>

#import <IDEInterfaceBuilderCocoaIntegration/IBDocumentArchiving-Protocol.h>

@class NSColor, NSString;

@interface NSCollectionView (IBNSCollectionViewIntegration) <IBDocumentArchiving>
+ (id)keyPathsForValuesAffectingIbInspectedGridLayout;
+ (id)keyPathsForValuesAffectingIbInspectedFlowLayout;
+ (id)keyPathsForValuesAffectingIbInspectedLayoutMode;
+ (id)keyPathsForValuesAffectingIbShadowedHasSecondaryBackgroundColor;
- (BOOL)ibShouldUseConstraintsInsteadOfAutoresizingWhenChildOfClipView;
@property(copy) NSColor *ibArchivedSecondaryBackgroundColor;
@property(copy) NSColor *ibArchivedPrimaryBackgroundColor;
- (void)setIbShadowedHasSecondaryBackgroundColor:(BOOL)arg1;
- (BOOL)ibShadowedHasSecondaryBackgroundColor;
- (void)setIbShadowedSecondaryBackgroundColor:(id)arg1;
- (id)ibShadowedSecondaryBackgroundColor;
- (void)setIbShadowedPrimaryBackgroundColor:(id)arg1;
- (id)ibShadowedPrimaryBackgroundColor;
- (void)setIbShadowedBackgroundColor:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)ibInspectedGridLayout;
- (id)ibInspectedFlowLayout;
@property(nonatomic) long long ibInspectedLayoutMode;
- (id)ibDocumentationSymbolInfosForKeyPath:(id)arg1;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)ibLocalAttributeKeyPaths;
- (id)ibLocalChildToOneRelationshipsKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

