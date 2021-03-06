//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTStructuredLayoutKit/DVTLayoutView_ML.h>

#import <DVTUserInterfaceKit/DVTWindowActivationStateObserver-Protocol.h>

@class DVTBorderView, NSColor, NSGradient, NSString, NSView;
@protocol DVTCancellable;

@interface DVTBorderedView : DVTLayoutView_ML <DVTWindowActivationStateObserver>
{
    id <DVTCancellable> _windowActivationObservation;
    BOOL _allowsVibrancy;
    BOOL _needsVisibleBorderViewUpdate;
    unsigned long long _borderSides;
    NSColor *_backgroundColor;
    NSColor *_inactiveBackgroundColor;
    NSGradient *_backgroundGradient;
    NSGradient *_inactiveBackgroundGradient;
    NSView *_contentView;
    unsigned long long _horizontalContentViewResizingMode;
    unsigned long long _verticalContentViewResizingMode;
    DVTBorderView *_leftBorderView;
    DVTBorderView *_rightBorderView;
    DVTBorderView *_topBorderView;
    DVTBorderView *_bottomBorderView;
    struct NSEdgeInsets _borderSizeInsets;
    CDStruct_bf6d4a14 _contentInset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DVTBorderView *bottomBorderView; // @synthesize bottomBorderView=_bottomBorderView;
@property(retain, nonatomic) DVTBorderView *topBorderView; // @synthesize topBorderView=_topBorderView;
@property(retain, nonatomic) DVTBorderView *rightBorderView; // @synthesize rightBorderView=_rightBorderView;
@property(retain, nonatomic) DVTBorderView *leftBorderView; // @synthesize leftBorderView=_leftBorderView;
@property(nonatomic) unsigned long long verticalContentViewResizingMode; // @synthesize verticalContentViewResizingMode=_verticalContentViewResizingMode;
@property(nonatomic) unsigned long long horizontalContentViewResizingMode; // @synthesize horizontalContentViewResizingMode=_horizontalContentViewResizingMode;
@property(retain, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) CDStruct_bf6d4a14 contentInset; // @synthesize contentInset=_contentInset;
@property(copy, nonatomic) NSGradient *inactiveBackgroundGradient; // @synthesize inactiveBackgroundGradient=_inactiveBackgroundGradient;
@property(copy, nonatomic) NSGradient *backgroundGradient; // @synthesize backgroundGradient=_backgroundGradient;
@property(copy, nonatomic) NSColor *inactiveBackgroundColor; // @synthesize inactiveBackgroundColor=_inactiveBackgroundColor;
@property(copy, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) struct NSEdgeInsets borderSizeInsets; // @synthesize borderSizeInsets=_borderSizeInsets;
@property(nonatomic) unsigned long long borderSides; // @synthesize borderSides=_borderSides;
- (void)window:(id)arg1 didChangeActivationState:(long long)arg2;
- (void)viewWillMoveToWindow:(id)arg1;
- (BOOL)_isInactive;
- (void)drawRect:(struct CGRect)arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (struct CGRect)rightBorderFrame;
- (struct CGRect)leftBorderFrame;
- (struct CGRect)bottomBorderFrame;
- (struct CGRect)topBorderFrame;
- (void)layoutBottomUp;
- (void)setFramesizeWithoutAutosizingContentView:(struct CGSize)arg1;
- (void)layoutTopDown;
- (void)updateVisibleBorderViewsIfNeeded;
- (void)_insertBorderView:(id)arg1;
- (void)setNeedsVisibleBorderViewUpdate;
@property(readonly) long long backgroundMaterial;
@property(readonly) BOOL hasBackgroundMaterial;
- (void)_contentViewFrameDidChange:(id)arg1;
- (struct CGSize)frameSizeForContentSize:(struct CGSize)arg1;
- (struct CGSize)boundSizeForContentSize:(struct CGSize)arg1;
@property(readonly) struct CGRect contentRect;
- (CDStruct_bf6d4a14)_borderLayoutInset;
@property BOOL allowsVibrancy;
- (id)backgroundGradientForWindowState;
- (id)backgroundColorForWindowState;
- (void)setAllInactiveBordersToColor:(id)arg1;
- (void)setAllBordersToColor:(id)arg1;
@property(copy, nonatomic) NSColor *rightInactiveBorderColor;
@property(copy, nonatomic) NSColor *rightBorderColor;
@property(copy, nonatomic) NSColor *leftInactiveBorderColor;
@property(copy, nonatomic) NSColor *leftBorderColor;
@property(copy, nonatomic) NSColor *bottomInactiveBorderColor;
@property(copy, nonatomic) NSColor *bottomBorderColor;
@property(copy, nonatomic) NSColor *topInactiveBorderColor;
@property(copy, nonatomic) NSColor *topBorderColor;
- (void)_setBorderSides:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_DVTBorderedViewDefaultInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

