//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Xcode3UI/Xcode3LinkedBinariesBuildPhaseViewController.h>

@class Xcode3LinkedAndEmbeddedBinariesPseudoPhase;

@interface SummaryLinkedAndEmbeddedBinariesBuildPhaseViewController : Xcode3LinkedBinariesBuildPhaseViewController
{
}

- (BOOL)_canSetRole;
- (id)_titleOfRoleColumn;
- (BOOL)_canShowEmbed;
- (double)contentOriginXOffsetForCapsuleView:(id)arg1;
- (double)capsuleView:(id)arg1 preferredContentViewWidthForCapsuleWidth:(double)arg2;
- (BOOL)capsuleViewCanBeRemoved:(id)arg1;
- (void)configureAddFrameworksController:(id)arg1;
- (BOOL)disclosedByDefault;
- (id)footerLabel;
- (id)titleForDisplay;
@property(readonly) Xcode3LinkedAndEmbeddedBinariesPseudoPhase *buildPhase;

@end

