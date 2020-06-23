//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEDistributionStepViewController.h>

@class DVTStackView_AppKitAutolayout, NSArray, NSLayoutConstraint;

@interface IDEDistributionOptionsStepViewController : IDEDistributionStepViewController
{
    BOOL canGoNext;
    BOOL _loading;
    NSArray *_optionsViewControllers;
    DVTStackView_AppKitAutolayout *_optionsStackView;
    NSLayoutConstraint *_heightConstraint;
}

+ (BOOL)skipStepForContext:(id)arg1 assistantDirection:(int)arg2;
+ (id)keyPathsForValuesAffectingCanGoPrevious;
- (void).cxx_destruct;
@property(nonatomic) BOOL loading; // @synthesize loading=_loading;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) DVTStackView_AppKitAutolayout *optionsStackView; // @synthesize optionsStackView=_optionsStackView;
@property(retain, nonatomic) NSArray *optionsViewControllers; // @synthesize optionsViewControllers=_optionsViewControllers;
@property(nonatomic) BOOL canGoNext; // @synthesize canGoNext;
- (id)helpID;
- (void)willGoNext;
- (id)title;
- (id)nibName;
- (void)primitiveInvalidate;
- (BOOL)canGoPrevious;
- (void)_updateCanGoNext;
- (void)viewDidLoad;
- (id)initWithContext:(id)arg1 assistantWindowController:(id)arg2;

@end

