//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTLayoutView_ML.h>

@class IBImageButton, NSColor;

@interface IBConnectionPanelScroller : DVTLayoutView_ML
{
    IBImageButton *maxScrollButton;
    IBImageButton *minScrollButton;
    NSColor *trackColor;
    NSColor *knobColor;
    NSColor *trackedKnobColor;
    NSColor *backgroundColor;
    NSColor *buttonDisabledIconColor;
    NSColor *buttonDisabledFillColor;
    NSColor *buttonPressedIconColor;
    NSColor *buttonPressedFillColor;
    NSColor *buttonIconColor;
    NSColor *buttonFillColor;
    double knobPortion;
    double knobPosition;
    double lineScroll;
    double pageScroll;
    SEL action;
    BOOL trackingKnob;
    BOOL enabled;
    BOOL showsArrows;
    NSColor *trackBorderColor;
    id target;
}

@property(copy, nonatomic) NSColor *buttonDisabledIconColor; // @synthesize buttonDisabledIconColor;
@property(copy, nonatomic) NSColor *buttonDisabledFillColor; // @synthesize buttonDisabledFillColor;
@property(copy, nonatomic) NSColor *buttonPressedIconColor; // @synthesize buttonPressedIconColor;
@property(copy, nonatomic) NSColor *trackBorderColor; // @synthesize trackBorderColor;
@property(copy, nonatomic) NSColor *buttonIconColor; // @synthesize buttonIconColor;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled;
@property(nonatomic) BOOL showsArrows; // @synthesize showsArrows;
@property(copy, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor;
@property(copy, nonatomic) NSColor *trackedKnobColor; // @synthesize trackedKnobColor;
@property(copy, nonatomic) NSColor *knobColor; // @synthesize knobColor;
@property(copy, nonatomic) NSColor *trackColor; // @synthesize trackColor;
@property(copy, nonatomic) NSColor *buttonPressedFillColor; // @synthesize buttonPressedFillColor;
@property(copy, nonatomic) NSColor *buttonFillColor; // @synthesize buttonFillColor;
@property(nonatomic, getter=isTrackingKnob) BOOL trackingKnob; // @synthesize trackingKnob;
@property double pageScroll; // @synthesize pageScroll;
@property double lineScroll; // @synthesize lineScroll;
@property SEL action; // @synthesize action;
@property __weak id target; // @synthesize target;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (id)effectiveTrackedKnobColor;
- (id)effectiveKnobColor;
- (id)effectiveTrackColor;
- (void)scrollWheel:(id)arg1;
- (void)scrollWithScrollWheelEvent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)trackKnobWithEvent:(id)arg1;
- (void)scrollMin:(id)arg1;
- (void)scrollMax:(id)arg1;
- (void)scrollLineDown:(id)arg1;
- (void)scrollLineUp:(id)arg1;
- (void)scrollPageDown:(id)arg1;
- (void)scrollPageUp:(id)arg1;
- (void)fire;
- (void)layoutBottomUp;
- (struct CGRect)knobRect;
- (struct CGRect)trackRect;
- (struct CGRect)maxScrollButtonRect;
- (struct CGRect)minScrollButtonRect;
- (BOOL)showsKnob;
- (BOOL)showsButtons;
- (double)length;
- (double)scrollerSize;
- (BOOL)isVertical;
- (double)borderWidth;
- (void)setFrameSize:(struct CGSize)arg1;
@property double knobPosition;
@property double knobPortion;
- (void)setKnobPosition:(double)arg1 knobProportion:(double)arg2;
- (void)refreshButtons;
- (struct CGRect)arrowBounds;
- (void)refreshButtonStates;
- (id)initWithFrame:(struct CGRect)arg1;

@end

