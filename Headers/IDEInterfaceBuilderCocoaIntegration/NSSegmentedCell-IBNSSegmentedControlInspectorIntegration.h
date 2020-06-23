//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSSegmentedCell.h>

#import <IDEInterfaceBuilderCocoaIntegration/IBDocumentArchiving-Protocol.h>

@class NSArray, NSImage, NSNumber, NSString;

@interface NSSegmentedCell (IBNSSegmentedControlInspectorIntegration) <IBDocumentArchiving>
+ (id)keyPathsForValuesAffectingIbEnclosingSegmentedControl;
+ (id)keyPathsForValuesAffectingIbInspectedSpringLoaded;
+ (id)keyPathsForValuesAffectingIbInspectedWidthForInspectedSegment;
+ (id)keyPathsForValuesAffectingIbInspectedSegmentStyle;
+ (id)keyPathsForValuesAffectingIbInspectedTrackingMode;
+ (id)keyPathsForValuesAffectingIbInspectedIsSelectedForInspectedSegment;
+ (id)keyPathsForValuesAffectingIbInspectedCanSelectSegment;
+ (id)keyPathsForValuesAffectingIbInspectedIsEnabledForInspectedSegment;
+ (id)keyPathsForValuesAffectingIbInspectedTagForInspectedSegment;
+ (id)keyPathsForValuesAffectingIbInspectedImageScalingForInspectedSegment;
+ (id)keyPathsForValuesAffectingIbInspectedAlignmentForInspectedSegment;
+ (id)keyPathsForValuesAffectingIbInspectedImageForInspectedSegment;
+ (id)keyPathsForValuesAffectingIbInspectedLabelForInspectedSegment;
+ (id)keyPathsForValuesAffectingIbInspectedToolTipForInspectedSegment;
+ (id)keyPathsForValuesAffectingIbInspectedSegmentValue;
+ (id)keyPathsForValuesAffectingIbShadowedSegmentDistribution;
- (id)ibEnclosingSegmentedControl;
- (void)setIbInspectedSpringLoaded:(BOOL)arg1;
- (BOOL)ibInspectedSpringLoaded;
- (BOOL)ibIsInNSSegmentedControl;
- (void)setIbInspectedWidthForInspectedSegment:(id)arg1;
- (id)ibInspectedWidthForInspectedSegment;
- (BOOL)ibInspectedAutosizeValueForInspectedSegment;
- (double)ibAutosizedSegmentWidth;
- (void)setIbInspectedSegmentStyle:(long long)arg1;
- (long long)ibInspectedSegmentStyle;
- (void)setIbInspectedTrackingMode:(unsigned long long)arg1;
- (unsigned long long)ibInspectedTrackingMode;
@property(nonatomic) BOOL ibInspectedIsSelectedForInspectedSegment;
- (BOOL)ibInspectedCanSelectSegment;
@property(nonatomic) BOOL ibInspectedIsEnabledForInspectedSegment;
@property(nonatomic) long long ibInspectedTagForInspectedSegment;
@property(nonatomic) unsigned long long ibInspectedImageScalingForInspectedSegment;
- (void)setIbInspectedAlignmentForInspectedSegment:(long long)arg1;
- (long long)ibInspectedAlignmentForInspectedSegment;
@property(retain, nonatomic) NSImage *ibInspectedImageForInspectedSegment;
@property(retain, nonatomic) NSString *ibInspectedLabelForInspectedSegment;
@property(retain, nonatomic) NSString *ibInspectedToolTipForInspectedSegment;
- (long long)ibInspectedSegmentValue;
@property(retain, nonatomic) NSNumber *ibExternalInspectedSegment;
@property long long ibShadowedNumberOfSegments;
@property(retain) NSArray *ibShadowedSelectedStates;
@property(retain) NSArray *ibShadowedEnabledStates;
@property(retain) NSArray *ibShadowedMenus;
@property(retain) NSArray *ibShadowedToolTips;
@property(retain) NSArray *ibShadowedImageScalings;
@property(retain) NSArray *ibShadowedImages;
@property(retain) NSArray *ibShadowedWidths;
@property(retain) NSArray *ibShadowedTags;
@property(retain) NSArray *ibShadowedLabels;
@property(retain) NSArray *ibShadowedAlignments;
@property long long ibShadowedSegmentDistribution;
- (long long)ibPreferredResizeDirectionMask;
- (Class)ibPreferredControlClass;
- (id)ibDefaultFontForCurrentConfiguration;
- (long long)ibNumberOfSizeableSegments;
- (id)ibSpringLoadedObjectAtPoint:(struct CGPoint)arg1 inFrameController:(id)arg2;
- (long long)ibSegmentAtPoint:(struct CGPoint)arg1 inView:(id)arg2 inFrameController:(id)arg3;
- (struct CGRect)ibTitleRectForSegment:(long long)arg1 inFrameController:(id)arg2 targetView:(id)arg3;
- (struct CGRect)ibRectForSegment:(long long)arg1 inFrameController:(id)arg2 targetView:(id)arg3;
- (id)ibOrderedSnapshotAttributesKeyPaths;
- (Class)ibEditorClass;
- (id)ibQualifyingInfoForDefaultLabel;
- (id)ibDocumentationSymbolInfosForKeyPath:(id)arg1;
- (void)ibRemoveChildren:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (void)unarchiveSegments:(id)arg1;
- (void)archiveSegments:(id)arg1;
- (id)ibLocalLocalizableStringArrayAttributeKeyPaths;
- (id)ibLocalLocalizableGeometryAttributeKeyPaths;
- (id)ibLocalResourceArrayAttributeKeyPaths;
- (id)ibLocalAttributeKeyPaths;
- (id)ibLocalChildToManyRelationshipsKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

