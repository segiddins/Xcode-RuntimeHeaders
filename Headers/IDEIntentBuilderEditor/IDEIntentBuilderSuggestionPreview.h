//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEIntentBuilderEditor/IDEIntentBuilderPreviewView.h>

@class CALayer, IDEIntentBuilderTokenTextField, NSView;

@interface IDEIntentBuilderSuggestionPreview : IDEIntentBuilderPreviewView
{
    IDEIntentBuilderTokenTextField *_titleTextField;
    IDEIntentBuilderTokenTextField *_subtitleTextField;
    CALayer *_imageLayer;
    NSView *_containerView;
    NSView *_actionArrowImageView;
}

- (void).cxx_destruct;
@property(retain) NSView *actionArrowImageView; // @synthesize actionArrowImageView=_actionArrowImageView;
@property(retain) NSView *containerView; // @synthesize containerView=_containerView;
@property(retain) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
@property(readonly) IDEIntentBuilderTokenTextField *subtitleTextField; // @synthesize subtitleTextField=_subtitleTextField;
@property(readonly) IDEIntentBuilderTokenTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
- (struct CGRect)_containerViewFrameThatFitsWidth:(double)arg1;
- (double)_containerViewWidthThatFitsWidth:(double)arg1;
- (double)_containerViewLeadingOffset;
- (struct CGRect)_subtitleTextFieldFrameThatFitsWidth:(double)arg1;
- (struct CGRect)_titleTextFieldFrameThatFitsWidth:(double)arg1;
- (struct CGRect)_imageLayerFrameThatFitsWidth:(double)arg1;
- (struct CGRect)_actionArrowImageViewFrameThatFitsWidth:(double)arg1;
- (void)_commonInit;
- (void)updateLayer;
- (void)layout;
- (struct CGSize)contentSizeThatFitsWidth:(double)arg1;
- (void)setAvailableTokens:(id)arg1;

@end

