//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSComboBoxCell.h>

#import <IDEInterfaceBuilderCocoaIntegration/IBDocumentArchiving-Protocol.h>

@class NSString;

@interface NSComboBoxCell (IBNSComboBoxCellIntegration) <IBDocumentArchiving>
+ (id)keyPathsForValuesAffectingIbInspectedUsesDataSource;
+ (id)keyPathsForValuesAffectingIbInspectedEnableAddingObjectValues;
+ (id)keyPathsForValuesAffectingIbShadowedObjectValues;
+ (id)keyPathsForValuesAffectingIbInspectedObjectValues;
- (Class)ibPreferredControlClass;
- (BOOL)ibWouldClipContentWithCellSize:(struct CGSize)arg1;
- (struct CGSize)ibPreferredSizeForSize:(struct CGSize)arg1;
- (struct CGSize)ibMinimumCellSizeForSize:(struct CGSize)arg1;
- (void)setIbInspectedUsesDataSource:(BOOL)arg1;
- (BOOL)ibInspectedUsesDataSource;
- (BOOL)ibInspectedEnableAddingObjectValues;
- (void)setIbShadowedObjectValues:(id)arg1;
- (id)ibShadowedObjectValues;
- (id)ibInspectedObjectValues;
- (id)ibOrderedSnapshotAttributesKeyPaths;
- (id)ibWidgetType;
- (id)ibDocumentationSymbolInfosForKeyPath:(id)arg1;
- (id)ibDisplayNameForKeyPath:(id)arg1;
- (id)ibDefaultDataValueForTableView:(id)arg1;
- (id)ibLocalLocalizableStringArrayAttributeKeyPaths;
- (id)ibLocalAttributeKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

