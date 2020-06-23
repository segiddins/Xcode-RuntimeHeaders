//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTStructuredLayoutKit/DVTLayoutView_ML.h>

#import <IDEInterfaceBuilderKit/DVTFirstResponderShowingView-Protocol.h>
#import <IDEInterfaceBuilderKit/IBKeyEquivalentTrackingDelegate-Protocol.h>

@class DVTFirstResponderDrawingStrategy, IBImageButton, IBKeyEquivalent, NSMenu, NSString;

@interface IBKeyEquivalentEntryField : DVTLayoutView_ML <IBKeyEquivalentTrackingDelegate, DVTFirstResponderShowingView>
{
    DVTFirstResponderDrawingStrategy *_firstResponderDrawingStrategy;
    NSMenu *_alternatesMenu;
    IBImageButton *_alternatesButton;
    IBImageButton *_clearButton;
    BOOL _inMixedState;
    BOOL _showsFirstResponder;
    BOOL _usesBezeledStyle;
    BOOL _shouldIgnoreKey;
    id _target;
    SEL _action;
    IBKeyEquivalent *_keyEquivalent;
    NSString *_customEmptyPlaceholderString;
    unsigned long long _allowableModifiers;
    long long _backgroundStyle;
}

@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) BOOL shouldIgnoreKey; // @synthesize shouldIgnoreKey=_shouldIgnoreKey;
@property unsigned long long allowableModifiers; // @synthesize allowableModifiers=_allowableModifiers;
@property(nonatomic) BOOL usesBezeledStyle; // @synthesize usesBezeledStyle=_usesBezeledStyle;
@property(copy, nonatomic) NSString *customEmptyPlaceholderString; // @synthesize customEmptyPlaceholderString=_customEmptyPlaceholderString;
@property(nonatomic) BOOL showsFirstResponder; // @synthesize showsFirstResponder=_showsFirstResponder;
@property(copy, nonatomic) IBKeyEquivalent *keyEquivalent; // @synthesize keyEquivalent=_keyEquivalent;
@property SEL action; // @synthesize action=_action;
@property __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (id)attributes;
- (id)alternateButtonImageForState:(unsigned long long)arg1;
- (id)clearButtonImageForState:(unsigned long long)arg1;
- (void)invalidateDrawing;
- (void)rerenderImages;
- (void)showMultipleValues;
- (BOOL)canBecomeKeyView;
- (BOOL)acceptsFirstResponder;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)clearKeyEquivalent:(id)arg1;
- (void)chooseAlternate:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)startTrackingWithKeyEvent:(id)arg1;
- (void)reflectKeyEquivalentTracking:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)selectFollowingKeyView;
- (void)layoutBottomUp;
- (struct CGRect)alternateButtonFrame;
- (struct CGRect)clearButtonFrame;
- (BOOL)hasKeyEquivalent;
- (void)setAlternateKeyEquivalents:(id)arg1;
- (id)alternateKeyEquivalents;
- (id)font;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

