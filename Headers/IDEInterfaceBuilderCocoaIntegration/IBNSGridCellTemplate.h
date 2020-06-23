//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderCocoaIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaIntegration/NSCoding-Protocol.h>

@class IBNSGridColumnTemplate, IBNSGridRowTemplate, NSString, NSView;

@interface IBNSGridCellTemplate : NSObject <IBDocumentArchiving, NSCoding>
{
    BOOL _encodeAsRuntimeInstance;
    IBNSGridCellTemplate *_headOfMergedCell;
    IBNSGridRowTemplate *_row;
    IBNSGridColumnTemplate *_column;
    long long _xPlacement;
    long long _yPlacement;
    long long _rowAlignment;
    NSView *_contentView;
}

+ (id)cellWithRow:(id)arg1 column:(id)arg2;
+ (void)initialize;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
@property BOOL encodeAsRuntimeInstance; // @synthesize encodeAsRuntimeInstance=_encodeAsRuntimeInstance;
@property(retain, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) long long rowAlignment; // @synthesize rowAlignment=_rowAlignment;
@property(nonatomic) long long yPlacement; // @synthesize yPlacement=_yPlacement;
@property(nonatomic) long long xPlacement; // @synthesize xPlacement=_xPlacement;
@property(nonatomic) __weak IBNSGridColumnTemplate *column; // @synthesize column=_column;
@property(nonatomic) __weak IBNSGridRowTemplate *row; // @synthesize row=_row;
@property(retain, nonatomic) IBNSGridCellTemplate *headOfMergedCell; // @synthesize headOfMergedCell=_headOfMergedCell;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)ibDefaultLabel;
- (id)ibLabelToCell:(id)arg1;
- (id)ibMergeRowOrColumnLabel:(id)arg1 withLabel:(id)arg2;
@property(readonly, nonatomic) NSString *ibShortLabel;
- (void)ibRemoveChildren:(id)arg1;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (id)ibPasteboardTypes;
- (id)ibInspectedRowAlignmentInheritedDisplayString;
- (id)ibInspectedRowAlignmentInheritedAndNoneTitles;
- (id)ibInspectedRowAlignmentInheritedAndNoneValues;
- (void)invalidatePlacementAndAlignmentIfNeeded;
- (id)ibInspectedYPlacementInheritedDisplayString;
@property(readonly, nonatomic) long long ibEffectiveYPlacement;
- (id)ibInspectedYPlacementInheritedAndNoneTitles;
- (id)ibInspectedYPlacementInheritedAndNoneValues;
- (id)ibInspectedXPlacementInheritedDisplayString;
@property(readonly, nonatomic) long long ibEffectiveXPlacement;
- (id)ibInspectedXPlacementInheritedAndNoneTitles;
- (id)ibInspectedXPlacementInheritedAndNoneValues;
@property(readonly, nonatomic) BOOL hasMergedOrUnmergedContent;
- (BOOL)ibSupportsOverridingWithCustomClass;
- (BOOL)ibSupportsUserDefinedRuntimeAttributes;
- (id)tailOfMergedCell;
@property(readonly, nonatomic) BOOL isMergedHeadCell;
@property(readonly, nonatomic) BOOL isMerged;
- (BOOL)ibChildView:(id)arg1 shouldUseConstraintsInsteadOfAutoresizingWhenAddedToDocument:(id)arg2;
- (id)ibLocalAttributeKeyPaths;
- (id)ibLocalNonChildToOneRelationshipsKeyPaths;
- (id)ibLocalChildToOneRelationshipsKeyPaths;
- (id)ibSubarbitrationUnitParentForChild:(id)arg1;
- (BOOL)ibShouldIgnoreAmbiguityAndMisplacementIssuesForChild:(id)arg1;
- (BOOL)ibIsSelfManagedContainerInEngine;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (id)ibRuntimeClassName;
- (BOOL)ibDraggableFromOutlineGivenSelection:(id)arg1;
- (void)ibDidCopyObjectForLayoutEngine:(id)arg1;
- (void)ibWillCopyObjectForLayoutEngine:(id)arg1;
- (Class)classForCoder;
- (id)gridView;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

