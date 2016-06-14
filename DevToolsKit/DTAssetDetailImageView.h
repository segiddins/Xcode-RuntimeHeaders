//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImageView.h>

@class DTFirstResponderDrawingStrategy, NSEvent, NSString;

@interface DTAssetDetailImageView : NSImageView
{
    NSString *_imagePath;
    NSEvent *_downEvent;
    DTFirstResponderDrawingStrategy *firstResponderDrawingStrategy;
    BOOL showsFirstResponder;
}

- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)showsFirstResponder;
- (void)setShowsFirstResponder:(BOOL)arg1;
- (id)imagePath;
- (void)setImagePath:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_setDownEvent:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)copy:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

