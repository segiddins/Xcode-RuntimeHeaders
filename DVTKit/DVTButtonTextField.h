//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

@interface DVTButtonTextField : NSTextField
{
    BOOL _resetingCursorRects;
}

+ (void)setCellClass:(Class)arg1;
+ (Class)cellClass;
+ (void)initialize;
- (void)resetCursorRects;
- (struct CGRect)visibleRect;
- (void)mouseDown:(id)arg1;
- (unsigned long long)imagePosition;
- (void)setImagePosition:(unsigned long long)arg1;
- (id)highlightImage;
- (void)setHighlightImage:(id)arg1;
- (id)alternateImage;
- (void)setAlternateImage:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (void)setButtonAction:(SEL)arg1;
- (SEL)buttonAction;
- (void)setButtonTarget:(id)arg1;
- (id)buttonTarget;

@end

