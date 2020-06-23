//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUICollectionViewLayout.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>

@class NSString;

@interface IBUICollectionViewFlowLayout : IBUICollectionViewLayout <IBDocumentArchiving>
{
    int _scrollDirection;
    double _minimumLineSpacing;
    double _minimumInteritemSpacing;
    long long _sectionInsetReference;
    struct CGSize _itemSize;
    struct CGSize _ibShadowedEstimatedItemSize;
    struct CGSize _headerReferenceSize;
    struct CGSize _footerReferenceSize;
    CDStruct_c519178c _sectionInset;
}

+ (void)registerMarshallingRecordHandlers;
+ (id)keyPathsForValuesAffectingIbInspectedEstimatedItemSizeMode;
@property(nonatomic) long long sectionInsetReference; // @synthesize sectionInsetReference=_sectionInsetReference;
@property(nonatomic) CDStruct_c519178c sectionInset; // @synthesize sectionInset=_sectionInset;
@property(nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
@property(nonatomic) double minimumLineSpacing; // @synthesize minimumLineSpacing=_minimumLineSpacing;
@property(nonatomic) struct CGSize footerReferenceSize; // @synthesize footerReferenceSize=_footerReferenceSize;
@property(nonatomic) struct CGSize headerReferenceSize; // @synthesize headerReferenceSize=_headerReferenceSize;
@property(nonatomic) struct CGSize ibShadowedEstimatedItemSize; // @synthesize ibShadowedEstimatedItemSize=_ibShadowedEstimatedItemSize;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) int scrollDirection; // @synthesize scrollDirection=_scrollDirection;
- (long long)cellsGrowthDirection;
- (long long)sectionsGrowthDirection;
- (BOOL)supportsSectionHeadersAndFooters;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTargetRuntime:(id)arg1;
- (void)ibPrepareToBackwardsDeployToOSVersion:(id)arg1 inDocument:(id)arg2;
- (void)ibUnarchiveEstimatedItemSize:(id)arg1;
- (void)ibArchiveEstimatedItemSize:(id)arg1;
- (BOOL)ibCanIncrementallyMarshalKeyPath:(id)arg1;
- (id)ibLocalLocalizableGeometryAttributeKeyPaths;
- (id)ibLocalAttributeKeyPaths;
@property(nonatomic) long long ibInspectedEstimatedItemSizeMode;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

