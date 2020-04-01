//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <IDEInterfaceBuilderKit/DVTFirstResponderShowingView-Protocol.h>

@class DVTEmptyContentPlaceholder, DVTFirstResponderDrawingStrategy, IBCanvasBandSelectionView, NSString;
@protocol IBPreviewDocumentBackgroundViewDelegate;

@interface IBPreviewDocumentBackgroundView : NSView <DVTFirstResponderShowingView>
{
    IBCanvasBandSelectionView *_bandSelectionView;
    DVTFirstResponderDrawingStrategy *_firstResponderDrawingStrategy;
    DVTEmptyContentPlaceholder *_placeholderTextField;
    BOOL _showsFirstResponder;
    id <IBPreviewDocumentBackgroundViewDelegate> _delegate;
    NSString *_placeholderText;
}

@property(nonatomic) BOOL showsFirstResponder; // @synthesize showsFirstResponder=_showsFirstResponder;
@property(retain, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
@property __weak id <IBPreviewDocumentBackgroundViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)mouseDown:(id)arg1;
- (void)trackBandSelection:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)endGestureWithEvent:(id)arg1;
- (void)beginGestureWithEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

