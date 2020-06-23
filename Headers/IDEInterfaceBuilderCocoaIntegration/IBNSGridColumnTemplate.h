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

@interface IBNSGridColumnTemplate : NSObject <IBDocumentArchiving, NSCoding, IBNSGridViewAxis>
{
    NSNumber *_cachedIsColumnContentImplicitlySized;
    BOOL _hidden;
    BOOL _encodeAsRuntimeInstance;
    IBNSGridViewTemplate *_gridView;
    long long _numberOfCells;
    long long _xPlacement;
    double _width;
    double _leadingPadding;
    double _trailingPadding;
    NSNumber *_measuredWidth;
    NSNumber *_measuredAutomaticWidth;
}

+ (id)keyPathsForValuesAffectingIbInspectedWidth;
+ (id)columnWithGridView:(id)arg1;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
@property BOOL encodeAsRuntimeInstance; // @synthesize encodeAsRuntimeInstance=_encodeAsRuntimeInstance;
@property(retain, nonatomic) NSNumber *measuredAutomaticWidth; // @synthesize measuredAutomaticWidth=_measuredAutomaticWidth;
@property(retain, nonatomic) NSNumber *measuredWidth; // @synthesize measuredWidth=_measuredWidth;
@property(nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property(nonatomic) double trailingPadding; // @synthesize trailingPadding=_trailingPadding;
@property(nonatomic) double leadingPadding; // @synthesize leadingPadding=_leadingPadding;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) long long xPlacement; // @synthesize xPlacement=_xPlacement;
@property(readonly, nonatomic) long long numberOfCells; // @synthesize numberOfCells=_numberOfCells;
@property(nonatomic) __weak IBNSGridViewTemplate *gridView; // @synthesize gridView=_gridView;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)ibDefaultLabel;
@property(readonly, nonatomic) NSString *ibShortLabel;
@property(readonly, nonatomic) NSString *ibDecoratorLabel;
@property(readonly, nonatomic) long long columnIndex;
@property(readonly, nonatomic) BOOL isLast;
@property(readonly, nonatomic) BOOL isFirst;
- (void)ibDocument:(id)arg1 didRemoveConnection:(id)arg2;
- (void)ibDocument:(id)arg1 didAddConnection:(id)arg2;
- (void)setIbExternalExplicitLabel:(id)arg1;
- (void)invalidateLabelsForRelatedCells;
- (id)ibPasteboardTypes;
- (void)ibDidPutObjects:(id)arg1 onPasteboard:(id)arg2 fromDocument:(id)arg3 context:(id)arg4;
- (void)ibWillPutObjects:(id)arg1 withDescendants:(id)arg2 onPasteboard:(id)arg3 fromDocument:(id)arg4 context:(id)arg5;
- (id)ibInspectedXPlacementInheritedDisplayString;
@property(readonly, nonatomic) long long ibEffectiveXPlacement;
- (id)ibInspectedXPlacementInheritedAndNoneTitles;
- (id)ibInspectedXPlacementInheritedAndNoneValues;
- (void)invalidatePlacementIfNeeded;
- (BOOL)ibSupportsOverridingWithCustomClass;
- (BOOL)ibSupportsUserDefinedRuntimeAttributes;
@property(readonly, nonatomic) double effectiveWidth;
@property(readonly, nonatomic) BOOL isAutomaticWidth;
- (BOOL)isEmptyAutoSizingColumn;
@property(readonly, nonatomic) BOOL isColumnContentEmpty;
- (BOOL)isColumnContentImplicitlySized;
- (void)recomputeIsColumnContentImplicitlySized;
- (void)invalidateColumnWidth;
- (BOOL)ibDoesCellHaveIntrinsicWidth:(id)arg1;
- (id)ibPlaceholderWidth;
- (id)ibDefaultExplicitWidth;
- (id)ibInspectedWidth;
- (void)setIbInspectedWidth:(id)arg1;
- (id)ibLocalAttributeKeyPaths;
@property(readonly, nonatomic) long long index;
@property(readonly, nonatomic) NSArray *cells;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)ibPrepareCocoaDocumentViewsWithTranslatesAutoresizingMaskIntoConstraintsForCompiling:(id)arg1 withContext:(id)arg2;
- (BOOL)ibDraggableFromOutlineGivenSelection:(id)arg1;
- (void)ibDidCopyObjectForLayoutEngine:(id)arg1;
- (void)ibWillCopyObjectForLayoutEngine:(id)arg1;
- (id)ibRuntimeClassName;
- (Class)classForCoder;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

