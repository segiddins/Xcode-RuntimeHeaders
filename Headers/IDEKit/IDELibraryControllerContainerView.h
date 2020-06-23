//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTStructuredLayoutKit/DVTStructuredLayoutView.h>

#import <IDEKit/DVTChooserViewDelegate-Protocol.h>

@class DVTBorderView, DVTChoice, DVTChooserView, NSArray, NSNumber, NSString, NSView;
@protocol IDELibraryControllerContainerViewDelegate;

@interface IDELibraryControllerContainerView : DVTStructuredLayoutView <DVTChooserViewDelegate>
{
    DVTBorderView *_topDivider;
    DVTBorderView *_detailDivider;
    DVTChooserView *_tabChooser;
    NSView *_detailAreaClipView;
    NSView *_bannerView;
    double _targetBannerViewAnimationProgress;
    NSView *_libraryView;
    NSView *_detailView;
    NSArray *_choices;
    DVTChoice *_selectedChoice;
    id <IDELibraryControllerContainerViewDelegate> _delegate;
    long long _bannerLayout;
    double _bannerViewAnimationProgress;
    NSNumber *_explicitLibraryWidth;
}

+ (double)minimumWithoutDetailsWidth;
+ (double)minimumWithDetailsWidth;
+ (double)tabBarHeight;
+ (id)createButton;
+ (id)defaultAnimationForKey:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *explicitLibraryWidth; // @synthesize explicitLibraryWidth=_explicitLibraryWidth;
@property(nonatomic) double bannerViewAnimationProgress; // @synthesize bannerViewAnimationProgress=_bannerViewAnimationProgress;
@property(nonatomic) long long bannerLayout; // @synthesize bannerLayout=_bannerLayout;
@property(retain) id <IDELibraryControllerContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) DVTChoice *selectedChoice; // @synthesize selectedChoice=_selectedChoice;
@property(retain, nonatomic) NSArray *choices; // @synthesize choices=_choices;
@property(retain, nonatomic) NSView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) NSView *libraryView; // @synthesize libraryView=_libraryView;
- (void)dvt_positionSubviewsAndSizeSelfAfterSubviewLayout;
- (void)dvt_configureSubviewsBeforeSubviewLayout;
- (double)bannerHeight;
- (double)tabBarAreaHeight;
- (BOOL)isFlipped;
- (void)showBannerView:(id)arg1 animated:(BOOL)arg2;
- (void)animateTogglingDetailView:(BOOL)arg1 targetWidth:(double)arg2;
- (double)chromeHeight;
- (id)animationForKey:(id)arg1;
- (void)chooserView:(id)arg1 userDidSelectChoice:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

