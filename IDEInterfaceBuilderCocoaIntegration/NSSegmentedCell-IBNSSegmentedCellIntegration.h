//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSSegmentedCell.h>

@class NSArray;

@interface NSSegmentedCell (IBNSSegmentedCellIntegration)
@property long long ibShadowedNumberOfSegments;
@property(copy) NSArray *ibShadowedSelectedStates;
- (void)setIbShadowedEnabledStates:(id)arg1;
- (id)ibShadowedEnabledStates;
- (void)setIbShadowedMenus:(id)arg1;
- (id)ibShadowedMenus;
- (void)setIbShadowedToolTips:(id)arg1;
- (id)ibShadowedToolTips;
- (void)setIbShadowedImageScalings:(id)arg1;
- (id)ibShadowedImageScalings;
- (void)setIbShadowedImages:(id)arg1;
- (id)ibShadowedImages;
- (void)setIbShadowedWidths:(id)arg1;
- (id)ibShadowedWidths;
- (void)setIbShadowedTags:(id)arg1;
- (id)ibShadowedTags;
- (void)setIbShadowedLabels:(id)arg1;
- (id)ibShadowedLabels;
- (long long)ibPreferredResizeDirection;
- (Class)ibPreferredControlClass;
- (id)ibDefaultFontForCurrentConfiguration;
- (long long)ibNumberOfSizeableSegments;
- (id)ibSpringLoadedObjectAtPoint:(struct CGPoint)arg1 inFrameController:(id)arg2;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (long long)ibSegmentAtPoint:(struct CGPoint)arg1 inView:(id)arg2 inFrameController:(id)arg3;
- (struct CGRect)ibTitleRectForSegment:(long long)arg1 inFrameController:(id)arg2 targetView:(id)arg3;
- (struct CGRect)ibRectForSegment:(long long)arg1 inFrameController:(id)arg2 targetView:(id)arg3;
- (id)ibOrderedSnapshotAttributesKeyPaths;
- (Class)ibEditorClass;
- (id)ibQualifyingInfoForDefaultLabel;
- (id)ibDocumentationPropertyInfosForKeyPath:(id)arg1;
- (void)ibRemoveChildren:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (void)unarchiveSegments:(id)arg1;
- (void)archiveSegments:(id)arg1;
@end

