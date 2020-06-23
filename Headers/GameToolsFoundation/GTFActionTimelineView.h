//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTBorderedView.h>

@class GTFActionTimelineControlView, NSColor, NSDictionary, NSFont, NSLayoutConstraint;
@protocol GTFActionTimelineViewDelegate;

@interface GTFActionTimelineView : DVTBorderedView
{
    NSColor *_separatorColor;
    NSColor *_tickerColor;
    NSColor *_textColor;
    NSDictionary *_textAttributes;
    NSFont *_textFont;
    GTFActionTimelineControlView *_timelineControl;
    float _timeScale;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    id <GTFActionTimelineViewDelegate> _delegate;
    struct CGSize _size;
}

@property(nonatomic) __weak id <GTFActionTimelineViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (void).cxx_destruct;
- (void)setPlayForTimelineControl:(double)arg1;
- (void)resetTimelineControl;
- (void)pauseTimelineControl;
- (void)updatePreviewTime:(double)arg1;
- (void)moveRight:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)calculatePreviewTime:(double)arg1;
- (BOOL)acceptsFirstResponder;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (void)updateTimeScaleTo:(float)arg1;
- (void)awakeFromNib;

@end

