//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <IDEKit/NSAccessibilityButton-Protocol.h>

@class NSColor, NSMutableDictionary, NSString;
@protocol IDESourceControlLogFilesChangedViewDelegate;

@interface IDESourceControlLogFilesChangedView : NSView <NSAccessibilityButton>
{
    NSString *_value;
    struct CGRect _tokenRect;
    struct CGRect _stringRect;
    BOOL _showToken;
    BOOL _selected;
    NSMutableDictionary *_textAttributes;
    double _fontSize;
    id <IDESourceControlLogFilesChangedViewDelegate> _delegate;
    NSColor *_textColor;
}

@property(copy) NSColor *textColor; // @synthesize textColor=_textColor;
@property __weak id <IDESourceControlLogFilesChangedViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawWholeTokenWithTextFrame:(struct CGRect)arg1 tokenFrame:(struct CGRect)arg2;
- (void)_drawInteriorWithTextFrame:(struct CGRect)arg1 tokenFrame:(struct CGRect)arg2;
- (void)_drawTextWithFrame:(struct CGRect)arg1;
- (void)_drawTokenWithFrame:(struct CGRect)arg1;
- (id)foregroundGradient;
- (id)selectedForegroundColor;
- (id)backgroundColor;
- (void)_drawTokenWithContext:(id)arg1 frame:(struct CGRect)arg2 clip:(BOOL)arg3;
- (struct CGRect)_tokenRectForStringRect:(struct CGRect)arg1;
@property(copy) NSString *value;
@property(readonly) struct CGRect textFrame;
- (void)_resetTokenRect;
- (struct CGRect)_rectForString:(id)arg1 withRect:(struct CGRect)arg2;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_setTrackingRectWithRect:(struct CGRect)arg1;
- (void)setFontSize:(double)arg1;
- (double)fontSize;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityLabel;
- (void)_setFontSize:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

