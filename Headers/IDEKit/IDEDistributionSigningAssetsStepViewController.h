//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEDistributionStepViewController.h>

@interface IDEDistributionSigningAssetsStepViewController : IDEDistributionStepViewController
{
    IDEDistributionStepViewController *_actualViewController;
}

+ (BOOL)skipStepForContext:(id)arg1 assistantDirection:(long long)arg2;
+ (id)keyPathsForValuesAffectingAdditionalActionTitle;
+ (id)keyPathsForValuesAffectingWantsPreviousAction;
+ (id)keyPathsForValuesAffectingCanGoPrevious;
+ (id)keyPathsForValuesAffectingWantsNextAction;
+ (id)keyPathsForValuesAffectingCanGoNext;
+ (id)keyPathsForValuesAffectingTitle;
+ (Class)actualViewControllerClassForContext:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) IDEDistributionStepViewController *actualViewController; // @synthesize actualViewController=_actualViewController;
- (void)takeAdditionalAction;
- (id)additionalActionTitle;
- (void)takePreviousAction;
- (BOOL)wantsPreviousAction;
- (BOOL)canGoPrevious;
- (void)takeNextAction;
- (BOOL)wantsNextAction;
- (BOOL)canGoNext;
- (id)title;
- (void)loadView;
- (void)primitiveInvalidate;

@end

