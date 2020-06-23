//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBFoundation/IBICImageSetRep.h>

#import <IDEInterfaceBuilderKit/IBICMediaResourceProvider-Protocol.h>

@class NSString;

@interface IBICImageSetRep (IBICPlatformAdaptation) <IBICMediaResourceProvider>
+ (id)keyPathsForValuesAffectingIbInspectedResizingBehavior;
- (BOOL)validateSlottedAssetRepForWriting:(id)arg1 withOptions:(id)arg2 andFailureIssue:(id *)arg3;
- (id)mediaResource;
- (BOOL)shouldIncludeInMediaLibrary;
- (void)populateChildrenForInclusionInMediaLibrary:(id)arg1;
@property(nonatomic) struct NSEdgeInsets ibInspectedAlignmentInsets;
- (void)setIbInspectedResizingBehavior:(id)arg1;
- (id)ibInspectedResizingBehavior;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

