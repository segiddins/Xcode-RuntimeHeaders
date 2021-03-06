//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTTableCellViewSuper.h>

#import <DVTUserInterfaceKit/DVTStructuredLayoutView-Protocol.h>

@class DVTStructuredLayoutViewState, NSArray, NSAttributedString, NSDictionary, NSImage, NSImageView, NSMutableArray, NSMutableDictionary, NSNumber, NSString, NSValue, NSView, _DVTTableCellViewTextField;
@protocol DVTTableCellViewTitleEditingDelegate;

@interface DVTTableCellView : DVTTableCellViewSuper <DVTStructuredLayoutView>
{
    NSMutableDictionary *_statusControllerNamesToStatusControllers;
    NSString *_accessibleImageDescription;
    NSImageView *_strongImageView;
    NSMutableArray *_rightToLeftOrderedStatusControllers;
    NSView *_leftMostInstalledStatusView;
    _DVTTableCellViewTextField *_prioritizedTextField;
    _DVTTableCellViewTextField *_deprioritizedTextField;
    BOOL _subviewOrderIsValid;
    BOOL _usesGroupHeaderStyle;
    DVTStructuredLayoutViewState *_dvt_layoutState;
    id <DVTTableCellViewTitleEditingDelegate> _titleEditingDelegate;
    double _titleInsetWithoutImage;
    unsigned long long _titleStyle;
    NSArray *_filterMatchStrings;
    double _leadingImagePadding;
    double _statusViewSpacing;
    double _statusViewTrailingPadding;
    double _titleToSubtitleSpacing;
    NSValue *_explicitImageSize;
    NSNumber *_explicitImageToTitleSpacing;
    NSNumber *_explicitTopPadding;
    NSNumber *_explicitBottomPadding;
    unsigned long long _statusViewVerticalAnchor;
    long long _dvt_rowSizeStyle;
    NSDictionary *_objectToViewOneWayPropertyBindings;
    long long _textDisplayPriority;
    NSString *_filterMatchString;
    _DVTTableCellViewTextField *_titleTextField;
    _DVTTableCellViewTextField *_subtitleTextField;
}

+ (id)keyPathsForValuesAffectingAttributedSubtitle;
+ (id)keyPathsForValuesAffectingAttributedTitle;
+ (id)keyPathsForValuesAffectingSubtitleLineBreakMode;
+ (id)keyPathsForValuesAffectingSubtitle;
+ (id)keyPathsForValuesAffectingTitleEditable;
+ (id)keyPathsForValuesAffectingTitleLineBreakMode;
+ (id)keyPathsForValuesAffectingTitle;
+ (id)keyPathsForValuesAffectingImage;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain) _DVTTableCellViewTextField *subtitleTextField; // @synthesize subtitleTextField=_subtitleTextField;
@property(retain) _DVTTableCellViewTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(retain, nonatomic) NSString *filterMatchString; // @synthesize filterMatchString=_filterMatchString;
@property(nonatomic) long long textDisplayPriority; // @synthesize textDisplayPriority=_textDisplayPriority;
@property(copy, nonatomic) NSDictionary *objectToViewOneWayPropertyBindings; // @synthesize objectToViewOneWayPropertyBindings=_objectToViewOneWayPropertyBindings;
@property(nonatomic) long long dvt_rowSizeStyle; // @synthesize dvt_rowSizeStyle=_dvt_rowSizeStyle;
@property(nonatomic) unsigned long long statusViewVerticalAnchor; // @synthesize statusViewVerticalAnchor=_statusViewVerticalAnchor;
@property(copy, nonatomic) NSNumber *explicitBottomPadding; // @synthesize explicitBottomPadding=_explicitBottomPadding;
@property(copy, nonatomic) NSNumber *explicitTopPadding; // @synthesize explicitTopPadding=_explicitTopPadding;
@property(copy, nonatomic) NSNumber *explicitImageToTitleSpacing; // @synthesize explicitImageToTitleSpacing=_explicitImageToTitleSpacing;
@property(copy, nonatomic) NSValue *explicitImageSize; // @synthesize explicitImageSize=_explicitImageSize;
@property(nonatomic) double titleToSubtitleSpacing; // @synthesize titleToSubtitleSpacing=_titleToSubtitleSpacing;
@property(nonatomic) double statusViewTrailingPadding; // @synthesize statusViewTrailingPadding=_statusViewTrailingPadding;
@property(nonatomic) double statusViewSpacing; // @synthesize statusViewSpacing=_statusViewSpacing;
@property(nonatomic) double leadingImagePadding; // @synthesize leadingImagePadding=_leadingImagePadding;
@property(retain, nonatomic) NSArray *filterMatchStrings; // @synthesize filterMatchStrings=_filterMatchStrings;
@property(nonatomic) unsigned long long titleStyle; // @synthesize titleStyle=_titleStyle;
@property(nonatomic) BOOL usesGroupHeaderStyle; // @synthesize usesGroupHeaderStyle=_usesGroupHeaderStyle;
@property(nonatomic) double titleInsetWithoutImage; // @synthesize titleInsetWithoutImage=_titleInsetWithoutImage;
@property __weak id <DVTTableCellViewTitleEditingDelegate> titleEditingDelegate; // @synthesize titleEditingDelegate=_titleEditingDelegate;
@property(readonly) DVTStructuredLayoutViewState *dvt_layoutState; // @synthesize dvt_layoutState=_dvt_layoutState;
- (void)dvt_positionSubviewsAndSizeSelfAfterSubviewLayout;
- (void)dvt_positionEdgeViewsHorizontally;
- (void)sizeSelfVertically;
- (void)positionTextFields;
- (BOOL)subtitleShouldBeInstalled;
- (void)positionStatusViewsHorizontally;
- (void)positionStatusViewsVerticallyAfterSizingSelf;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (void)positionImageViewVerticallyAfterLayingoutTextFields;
- (void)positionImageViewHorizontally;
- (void)dvt_configureSubviewsBeforeSubviewLayout;
- (void)dvt_willLayoutSubview:(id)arg1;
- (CDStruct_2b6e6e30)_rangeForContentAfterLayingOutEdgeViewsConstrainingToStatusViews:(BOOL)arg1;
- (double)_minContentPositionAfterLayingOutImageView;
- (BOOL)imageViewShouldBeInstalled;
- (id)leftMostInstalledStatusView;
- (void)invalidateSubviewOrder;
- (void)synchronizeSubviewInstalledStateAndOrder;
- (void)synchronizeStatusControllerInstallation:(id)arg1 shouldBeInstalled:(BOOL)arg2;
- (double)effectiveBottomPadding;
- (double)effectiveTopPadding;
- (double)implicitVerticalPadding;
- (struct CGSize)effectiveImageSize;
- (struct CGSize)_implicitImageSize;
- (double)effectiveImageToTitleSpacing;
- (double)_implicitImageToTitleSpacing;
- (long long)textFieldOrientation;
- (BOOL)isVariableHeight;
- (BOOL)titleIsEditing;
- (void)startEditingTitleTextField;
- (id)statusViewWithName:(id)arg1 creatingIfNeeded:(CDUnknownBlockType)arg2;
- (id)statusControllerWithName:(id)arg1 creatingIfNeeded:(CDUnknownBlockType)arg2;
- (id)statusViewWithName:(id)arg1;
- (id)statusControllerWithName:(id)arg1;
- (BOOL)hasStatusViewWithName:(id)arg1;
- (void)removeStatusControllerWithName:(id)arg1;
- (void)removeStatusViewWithName:(id)arg1;
- (void)statusViewControllerDidChangeHasDisplayableStatus:(id)arg1;
- (void)addStatusController:(id)arg1 withName:(id)arg2;
- (void)addStatusView:(id)arg1 withName:(id)arg2;
@property(readonly) BOOL hasStatusViews;
- (id)toolTip;
- (id)_titleColor;
- (id)_subtitleFont;
- (id)_titleFont;
@property(retain, nonatomic) NSAttributedString *attributedSubtitle;
@property(retain, nonatomic) NSAttributedString *attributedTitle;
@property(nonatomic) unsigned long long subtitleLineBreakMode;
- (void)invalidateSubviewOrderIfNeededWhileChangingSubtitle:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSString *subtitle;
@property(nonatomic) BOOL titleEditable;
@property(nonatomic) unsigned long long titleLineBreakMode;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSString *accessibleImageDescription;
@property(retain, nonatomic) NSImage *image;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stopObservingAutoProperties;
- (void)_startObservingAutoProperties;
- (void)_updateAutoProperties;
- (void)setObjectValue:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

