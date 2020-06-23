//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTStructuredLayoutKit/DVTLayoutView_ML.h>

#import <IDEInterfaceBuilderKit/NSAccessibilityGroup-Protocol.h>

@class DVTStackView_ML, NSString;
@protocol IBICDetailDocumentViewDelegate;

@interface IBICDetailDocumentView : DVTLayoutView_ML <NSAccessibilityGroup>
{
    DVTStackView_ML *_contentStackView;
    double _lastClipViewWidth;
    id <IBICDetailDocumentViewDelegate> _delegate;
}

+ (void)initialize;
- (void).cxx_destruct;
@property __weak id <IBICDetailDocumentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) DVTStackView_ML *contentStackView; // @synthesize contentStackView=_contentStackView;
- (id)accessibilityLabel;
- (void)keyDown:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)insertText:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)performDelete:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)beginTrackingMenuWithEvent:(id)arg1;
- (void)trackBandSelectionWithInitialMouseDown:(id)arg1 currentMouseEvent:(id)arg2;
- (void)trackBandSelectionWithInitialMouseDown:(id)arg1 currentMouseEvent:(id)arg2 initialSelection:(id)arg3;
- (void)layoutBottomUp;
- (void)didCompleteLayout;
- (void)layoutTopDown;
- (BOOL)isFlipped;
- (struct CGSize)scrollerSize;
- (struct CGSize)fullScrollViewSize;
- (id)beginObservingScrollView;
- (id)scrollView;
- (BOOL)isCenteringStyle;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

