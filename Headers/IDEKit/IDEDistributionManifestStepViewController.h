//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEDistributionStepViewController.h>

@class NSLayoutConstraint;

@interface IDEDistributionManifestStepViewController : IDEDistributionStepViewController
{
    BOOL _wantsAssetPackManifestURL;
    NSLayoutConstraint *_centeredViewHeightConstraint;
}

+ (id)keyPathsForValuesAffectingCanGoNext;
+ (BOOL)skipStepForContext:(id)arg1 assistantDirection:(long long)arg2;
- (void).cxx_destruct;
@property BOOL wantsAssetPackManifestURL; // @synthesize wantsAssetPackManifestURL=_wantsAssetPackManifestURL;
@property __weak NSLayoutConstraint *centeredViewHeightConstraint; // @synthesize centeredViewHeightConstraint=_centeredViewHeightConstraint;
- (void)learnMore:(id)arg1;
- (BOOL)canGoNext;
- (id)title;
- (void)viewDidLoad;

@end

