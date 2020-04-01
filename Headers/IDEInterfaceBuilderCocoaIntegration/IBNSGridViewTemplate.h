//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <IDEInterfaceBuilderCocoaIntegration/IBDocumentArchiving-Protocol.h>

@class IBMutableIdentityDictionary, NSArray, NSString;

@interface IBNSGridViewTemplate : NSView <IBDocumentArchiving>
{
    IBMutableIdentityDictionary *_cachedRowToRects;
    IBMutableIdentityDictionary *_cachedColumnToRects;
    NSArray *_pasteboardCells;
    BOOL _encodeAsRuntimeInstance;
    long long _xPlacement;
    long long _yPlacement;
    long long _rowAlignment;
    double _rowSpacing;
    double _columnSpacing;
    NSArray *_rows;
    NSArray *_columns;
    NSArray *_cells;
    long long _numberOfMergedCells;
}

+ (id)cellsFromRowIndex:(long long)arg1 toRowIndex:(long long)arg2 columnIndex:(long long)arg3 toColumnIndex:(long long)arg4 forCells:(id)arg5 numberOfRows:(long long)arg6 numberOfColumns:(long long)arg7;
+ (id)cellsFromCell:(id)arg1 toCell:(id)arg2 forCells:(id)arg3 numberOfRows:(long long)arg4 numberOfColumns:(long long)arg5;
+ (id)tailCellForMergedCell:(id)arg1 inCells:(id)arg2;
+ (id)cellAtRow:(long long)arg1 column:(long long)arg2 forCells:(id)arg3 numberOfRows:(long long)arg4 numberOfColumns:(long long)arg5;
+ (id)keyPathsForValuesAffectingIbInspectedColumnSpacing;
+ (id)keyPathsForValuesAffectingIbInspectedRowSpacing;
+ (id)keyPathsForValuesAffectingNumberOfColumns;
+ (id)keyPathsForValuesAffectingIbInspectedNumberOfColumns;
+ (id)keyPathsForValuesAffectingIbInspectedNumberOfRows;
+ (void)updateMergedCellsForNewCells:(id)arg1 removingCells:(id)arg2 numberOfRows:(long long)arg3 numberOfColumns:(long long)arg4 document:(id)arg5;
+ (id)keyPathsForValuesAffectingNumberOfRows;
+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
+ (id)ibDefaultImageForInstance:(id)arg1 targetRuntime:(id)arg2;
@property BOOL encodeAsRuntimeInstance; // @synthesize encodeAsRuntimeInstance=_encodeAsRuntimeInstance;
@property(nonatomic) long long numberOfMergedCells; // @synthesize numberOfMergedCells=_numberOfMergedCells;
@property(retain, nonatomic) NSArray *cells; // @synthesize cells=_cells;
@property(retain, nonatomic) NSArray *columns; // @synthesize columns=_columns;
@property(retain, nonatomic) NSArray *rows; // @synthesize rows=_rows;
@property(nonatomic) double columnSpacing; // @synthesize columnSpacing=_columnSpacing;
@property(nonatomic) double rowSpacing; // @synthesize rowSpacing=_rowSpacing;
@property(nonatomic) long long rowAlignment; // @synthesize rowAlignment=_rowAlignment;
@property(nonatomic) long long yPlacement; // @synthesize yPlacement=_yPlacement;
@property(nonatomic) long long xPlacement; // @synthesize xPlacement=_xPlacement;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (BOOL)anyCellIsMerged;
- (BOOL)anyRowOrColumnIsHidden;
- (void)_verifyGridViewIntegrity;
- (void)verifyGridViewIntegrityIfDebug;
- (id)ibObjectsForSubgroupWithIdentifier:(id)arg1;
- (id)ibImageForSubgroupWithIdentifier:(id)arg1;
- (id)ibTitleForSubgroupWithIdentifier:(id)arg1;
- (BOOL)ibShouldDisplaySubgroupsEvenWithNoChildren;
- (id)ibSubgroupIdentifiers;
- (id)ibGridViewSpecificSubgroupIdentifiers;
- (BOOL)ibWantsChildWrapperForChild:(id)arg1 inDocument:(id)arg2;
- (BOOL)ibIsMergedCellThatShouldBeHiddenForChild:(id)arg1;
- (id)ibAttributeKeyPathsAffectingChildWrappers;
- (BOOL)ibToManyRelationSupportsInsertion:(id)arg1;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (id)ibAcceptGridRowContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (id)ibAcceptGridColumnContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (void)ibPreparePastedCell:(id)arg1 withRow:(id)arg2 column:(id)arg3;
- (void)ibRemoveAxisObject:(id)arg1 fromDocument:(id)arg2;
- (void)ibPrepareAcceptedPasteboardAxisObjects:(id)arg1 document:(id)arg2;
- (id)pasteboardCells;
- (void)setPasteboardCells:(id)arg1;
- (id)ibAcceptGridCellContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (id)ibUnembedChildrenInDocument:(id)arg1;
- (id)viewsOfCellContentViews;
- (BOOL)ibCanUnembedChildrenInDocument:(id)arg1;
- (void)recomputeAndApplyEstimatedFramesContentViewsAffectingRows:(BOOL)arg1 columns:(BOOL)arg2;
- (void)ibTakeTrackedFrame:(struct CGRect)arg1 originalFrame:(struct CGRect)arg2 isFinalFrame:(BOOL)arg3;
- (BOOL)ibIsVerticallyResizable;
- (BOOL)ibIsHorizontallyResizable;
- (BOOL)ibIsChildInitiallySelectable:(id)arg1;
- (void)updateVisibilityForCells:(id)arg1;
- (BOOL)isCellHidden:(id)arg1;
- (void)invalidateContentType:(long long)arg1;
- (id)ibSecondaryHitTestingRectsForParentInFrameController:(id)arg1;
- (id)ibSecondaryHitTestingRectsForChild:(id)arg1 inFrameController:(id)arg2;
- (id)rectsForRowAndColumnDecoratorsToView:(id)arg1;
- (struct CGRect)rectForGridViewRowCountDotToView:(id)arg1;
- (struct CGRect)rectForGridViewColumnCountDotToView:(id)arg1;
- (struct CGRect)rectForGridViewSelectionDotToView:(id)arg1;
- (struct CGRect)rectForColumnDecoratorToView:(id)arg1;
- (struct CGRect)rectForRowDecoratorToView:(id)arg1;
- (struct CGRect)rectForBoundsWithDecoratorsToView:(id)arg1 includeColumnRowResizeDotOutset:(BOOL)arg2;
- (struct CGRect)ibSecondaryDragHitAreaFrame;
- (double)rowResizeDecoratorOutset;
- (double)columnResizeDecoratorOutset;
- (double)rowInsetPadding;
- (double)rowDecoratorOutset;
- (double)columnInsetPadding;
- (double)columnDecoratorOutset;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (struct CGRect)rectForColumn:(id)arg1;
- (struct CGRect)rectForRow:(id)arg1;
- (void)enumerateCopyOfMergedCellsForCell:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)cellsFromRowIndex:(long long)arg1 toRowIndex:(long long)arg2 columnIndex:(long long)arg3 toColumnIndex:(long long)arg4;
- (id)cellsFromCell:(id)arg1 toCell:(id)arg2;
- (void)enumerateCopyOfCellRectsForMergedCells:(BOOL)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)unmergedCellRects;
- (struct CGRect)rectForCell:(id)arg1;
- (struct CGRect)unmergedRectForCell:(id)arg1;
- (id)tailCellForMergedCell:(id)arg1;
- (void)enumerateCopyOfColumnRectsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateCopyOfRowRectsWithBlock:(CDUnknownBlockType)arg1;
- (struct CGSize)estimatedEffectiveSize;
- (struct CGSize)intrinsicContentSize;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawCellBackgroundPlaceholdersInView:(id)arg1 onCondition:(CDUnknownBlockType)arg2;
- (BOOL)shouldDrawBackgroundPlaceholder;
- (Class)ibEditorClass;
- (id)insertColumnAtIndex:(long long)arg1;
- (id)insertAfterColumn:(id)arg1;
- (id)insertBeforeColumn:(id)arg1;
- (id)insertRowAtIndex:(long long)arg1;
- (id)insertAfterRow:(id)arg1;
- (id)insertBeforeRow:(id)arg1;
- (id)createDefaultColumn;
- (id)createDefaultRow;
- (id)unmergeCells:(id)arg1;
- (void)updateSizeToEmptyRowsAndColumnsForMergedCell:(id)arg1 minimumRow:(long long)arg2 maximumRow:(long long)arg3 minimumColumn:(long long)arg4 maximumColumn:(long long)arg5;
- (id)mergeCells:(id)arg1;
- (void)getIndexRangesForCells:(id)arg1 minimumRow:(long long *)arg2 maximumRow:(long long *)arg3 minimumColumn:(long long *)arg4 maximumColumn:(long long *)arg5;
- (id)cellAtRow:(long long)arg1 column:(long long)arg2;
- (void)ibRemoveChildren:(id)arg1;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (BOOL)hasAllRowsOrColumnsInSet:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (void)ibPopulateChildBackToFrontRelationOrder:(id)arg1;
- (double)ibInspectedColumnSpacing;
- (void)setIbInspectedColumnSpacing:(double)arg1;
- (double)ibInspectedRowSpacing;
- (void)setIbInspectedRowSpacing:(double)arg1;
@property(nonatomic) long long numberOfColumns;
- (long long)ibInspectedNumberOfColumns;
- (void)setIbInspectedNumberOfColumns:(long long)arg1;
@property(nonatomic) long long numberOfRows;
- (long long)ibInspectedNumberOfRows;
- (void)setIbInspectedNumberOfRows:(long long)arg1;
- (void)ibSizeToFitIfNeeded:(BOOL)arg1 during:(CDUnknownBlockType)arg2;
- (void)removeCellAndChildFromDocument:(id)arg1 document:(id)arg2;
- (void)addOrRemoveCellsIfNeededWithDocument:(id)arg1;
- (id)cellsForColumn:(id)arg1;
- (id)cellsForRow:(id)arg1;
- (id)columnForIndex:(long long)arg1;
- (id)ibLocalChildToManyRelationshipsKeyPaths;
- (id)ibLocalAttributeKeyPaths;
- (id)ibDesignTimeDefaultIntrinsicContentSizeForChild:(id)arg1;
- (void)calculateAutomaticSizesForGridView:(id)arg1 measurementRow:(id)arg2 measurementColumn:(id)arg3;
- (void)ibDidBootstrapLayoutWithCopyOfReceiver:(id)arg1 forLayoutEngine:(id)arg2;
- (void)ibPropagatePropertiesToCopyOfReceiver:(id)arg1 forLayoutEngine:(id)arg2;
- (BOOL)ibPropagatedTranslatesAutoresizingConstraintsOfChildView:(id)arg1 forCopyOfChildView:(id)arg2 engine:(id)arg3;
- (long long)ibManagedContainerBehavior;
- (void)awakeAfterUsingDocumentUnarchiver:(id)arg1;
- (void)ibUnarchiveOwningGridRowAndColumn:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (id)ibRuntimeClassName;
- (void)ibDidCopyObjectForLayoutEngine:(id)arg1;
- (void)ibWillCopyObjectForLayoutEngine:(id)arg1;
- (Class)classForCoder;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

