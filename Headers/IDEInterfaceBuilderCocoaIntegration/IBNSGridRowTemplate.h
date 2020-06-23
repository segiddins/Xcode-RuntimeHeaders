//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderCocoaIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaIntegration/IBNSGridViewAxis-Protocol.h>
#import <IDEInterfaceBuilderCocoaIntegration/NSCoding-Protocol.h>

@class IBNSGridViewTemplate, NSArray, NSNumber, NSString;

@interface IBNSGridRowTemplate : NSObject <IBDocumentArchiving, NSCoding, IBNSGridViewAxis>
{
    NSNumber *_cachedIsRowContentImplicitlySized;
    BOOL _hidden;
    BOOL _encodeAsRuntimeInstance;
    IBNSGridViewTemplate *_gridView;
    long long _numberOfCells;
    long long _yPlacement;
    long long _rowAlignment;
    double _height;
    double _topPadding;
    double _bottomPadding;
    NSNumber *_measuredHeight;
    NSNumber *_measuredAutomaticHeight;
}

+ (id)keyPathsForValuesAffectingIbInspectedHeight;
+ (id)rowWithGridView:(id)arg1;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
- (void).cxx_destruct;
@property BOOL encodeAsRuntimeInstance; // @synthesize encodeAsRuntimeInstance=_encodeAsRuntimeInstance;
@property(retain, nonatomic) NSNumber *measuredAutomaticHeight; // @synthesize measuredAutomaticHeight=_measuredAutomaticHeight;
@property(retain, nonatomic) NSNumber *measuredHeight; // @synthesize measuredHeight=_measuredHeight;
@property(nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property(nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) long long rowAlignment; // @synthesize rowAlignment=_rowAlignment;
@property(nonatomic) long long yPlacement; // @synthesize yPlacement=_yPlacement;
@property(readonly, nonatomic) long long numberOfCells; // @synthesize numberOfCells=_numberOfCells;
@property(nonatomic) __weak IBNSGridViewTemplate *gridView; // @synthesize gridView=_gridView;
@property(readonly, copy) NSString *description;
- (id)ibDefaultLabel;
@property(readonly, nonatomic) NSString *ibShortLabel;
@property(readonly, nonatomic) NSString *ibDecoratorLabel;
@property(readonly, nonatomic) long long rowIndex;
@property(readonly, nonatomic) BOOL isLast;
@property(readonly, nonatomic) BOOL isFirst;
- (void)ibDocument:(id)arg1 didRemoveConnection:(id)arg2;
- (void)ibDocument:(id)arg1 didAddConnection:(id)arg2;
- (void)setIbExternalExplicitLabel:(id)arg1;
- (void)invalidateLabelsForRelatedCells;
- (id)ibPasteboardTypes;
- (void)ibDidPutObjects:(id)arg1 onPasteboard:(id)arg2 fromDocument:(id)arg3 context:(id)arg4;
- (void)ibWillPutObjects:(id)arg1 withDescendants:(id)arg2 onPasteboard:(id)arg3 fromDocument:(id)arg4 context:(id)arg5;
- (id)ibInspectedRowAlignmentInheritedDisplayString;
@property(readonly, nonatomic) long long ibEffectiveRowAlignment;
- (id)ibInspectedRowAlignmentInheritedAndNoneTitles;
- (id)ibInspectedRowAlignmentInheritedAndNoneValues;
- (id)ibInspectedYPlacementInheritedDisplayString;
@property(readonly, nonatomic) long long ibEffectiveYPlacement;
- (id)ibInspectedYPlacementInheritedAndNoneTitles;
- (id)ibInspectedYPlacementInheritedAndNoneValues;
- (void)invalidatePlacementAndAlignmentIfNeeded;
- (BOOL)ibSupportsOverridingWithCustomClass;
- (BOOL)ibSupportsUserDefinedRuntimeAttributes;
@property(readonly, nonatomic) double effectiveHeight;
@property(readonly, nonatomic) BOOL isAutomaticHeight;
- (BOOL)isEmptyAutoSizingRow;
@property(readonly, nonatomic) BOOL isRowContentEmpty;
- (BOOL)isRowContentImplicitlySized;
- (void)recomputeIsRowContentImplicitlySized;
- (void)invalidateRowHeight;
- (BOOL)ibDoesCellHaveIntrinsicHeight:(id)arg1;
- (id)ibPlaceholderHeight;
- (id)ibDefaultExplicitHeight;
- (id)ibInspectedHeight;
- (void)setIbInspectedHeight:(id)arg1;
- (id)ibLocalAttributeKeyPaths;
@property(readonly, nonatomic) long long index;
@property(readonly, nonatomic) NSArray *cells;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)ibPrepareCocoaDocumentViewsWithTranslatesAutoresizingMaskIntoConstraintsForCompiling:(id)arg1 withContext:(id)arg2;
- (id)ibRuntimeClassName;
- (BOOL)ibDraggableFromOutlineGivenSelection:(id)arg1;
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

