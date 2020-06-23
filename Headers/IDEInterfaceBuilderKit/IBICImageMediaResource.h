//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEImageMediaResource.h>

#import <IDEInterfaceBuilderKit/IBICVariantObject-Protocol.h>

@class IBICImageSetRep, NSString;

@interface IBICImageMediaResource : IDEImageMediaResource <IBICVariantObject>
{
    IBICImageSetRep *_imageSetRep;
    NSString *_variantSetName;
}

+ (id)imageForImageSetRepSlot:(id)arg1 assetData:(id)arg2 alignmentInsets:(CDStruct_c519178c)arg3 resizingBehavior:(id)arg4 preservesVectorRepresentation:(BOOL)arg5 populatingRepInfo:(id)arg6;
+ (id)generateContentWithContext:(id)arg1;
+ (id)resourceWithImageSetRep:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *variantSetName; // @synthesize variantSetName=_variantSetName;
@property(retain, nonatomic) IBICImageSetRep *imageSetRep; // @synthesize imageSetRep=_imageSetRep;
- (id)detailViewAlternateWithTitle:(id)arg1;
- (BOOL)needsContentForDetailViewAlternate;
- (long long)compareForVariantMatching:(id)arg1;
- (long long)filteringPriorityForVariantSelection;
- (BOOL)isMinimallyFitForVariantSelection;
- (id)slotForVariantSelection;
@property(readonly, copy) NSString *description;
- (id)variantSetNameWithFoldingStrategy:(id)arg1;
- (id)variantWithFoldingStrategy:(id)arg1;
- (id)captureContextOnMainThreadBeforeGeneratingContent;
- (id)documentLocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

