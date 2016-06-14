//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTLayoutView_ML.h>

#import <IDEInterfaceBuilderKit/IBMouseMovedObservingView-Protocol.h>

@class NSButton, NSImageView, NSTextField;
@protocol IBInspectorReferencingConstraintViewDelegate;

@interface IBInspectorReferencingConstraintView : DVTLayoutView_ML <IBMouseMovedObservingView>
{
    BOOL _pressed;
    BOOL highlighted;
    BOOL _selected;
    long long borderAttributes;
    id <IBInspectorReferencingConstraintViewDelegate> delegate;
    NSImageView *imageView;
    NSTextField *relatedViewTypeLabel;
    NSTextField *constantTypeLabel;
    NSTextField *relatedViewNameLabel;
    NSTextField *constantValueLabel;
    long long layoutType;
    NSButton *_editButton;
}

@property(retain, nonatomic) NSButton *editButton; // @synthesize editButton=_editButton;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) long long layoutType; // @synthesize layoutType;
@property(retain, nonatomic) NSTextField *constantValueLabel; // @synthesize constantValueLabel;
@property(retain, nonatomic) NSTextField *relatedViewNameLabel; // @synthesize relatedViewNameLabel;
@property(retain, nonatomic) NSTextField *constantTypeLabel; // @synthesize constantTypeLabel;
@property(retain, nonatomic) NSTextField *relatedViewTypeLabel; // @synthesize relatedViewTypeLabel;
@property(retain, nonatomic) NSImageView *imageView; // @synthesize imageView;
@property(nonatomic) __weak id <IBInspectorReferencingConstraintViewDelegate> delegate; // @synthesize delegate;
@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted;
@property(nonatomic) long long borderAttributes; // @synthesize borderAttributes;
- (void).cxx_destruct;
- (void)userDidSelectEditButton:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)layoutBottomUp;
- (void)layoutEditButton;
- (struct CGRect)editButtonFrame;
- (void)layoutConstantValueLabel;
- (void)layoutRelatedViewNameLabel;
- (void)layoutRightHandLabel:(id)arg1 alignedToLabel:(id)arg2 unlessInLayoutMode:(long long)arg3;
- (void)layoutConstantTypeLabel;
- (void)layoutRelatedViewTypeLabel;
- (void)layoutSubview:(id)arg1 unlessInLayoutMode:(long long)arg2 withBlock:(CDUnknownBlockType)arg3;
- (double)baselineForLabel:(id)arg1;
- (double)yOriginForRightHandLabel:(id)arg1 alignedToLabel:(id)arg2;
- (double)widthForRightHandLabel;
- (double)widthForLeftHandLabel;
- (double)xOriginForRightHandLabel;
- (double)xOriginForLeftHandLabel;
- (struct CGRect)contentBounds;
- (BOOL)isFlipped;
- (void)drawRect:(struct CGRect)arg1;
- (id)highlightColor;
- (id)borderColor;
- (id)borderPath;
- (struct CGRect)borderRect;
- (double)borderThickness;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)observeMouseMoved:(struct CGPoint)arg1 buttonState:(unsigned long long)arg2;
- (void)deleteBackward:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)acceptsFirstResponder;

@end

