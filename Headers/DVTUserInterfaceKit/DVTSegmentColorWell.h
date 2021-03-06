//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTAbstractColorPicker.h>

@class NSImage, NSImageCell;

@interface DVTSegmentColorWell : DVTAbstractColorPicker
{
    NSImageCell *_iconCell;
    BOOL _drawsAsFirstResponder;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL drawsAsFirstResponder; // @synthesize drawsAsFirstResponder=_drawsAsFirstResponder;
- (void)drawFocusRingMask;
- (struct CGRect)focusRingMaskBounds;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (struct CGRect)swatchRect;
- (double)swatchHeight;
- (void)mouseDown:(id)arg1;
- (id)effectiveBorderColor;
- (id)effectiveDarkColor;
- (id)effectiveLightColor;
- (void)setColor:(id)arg1;
@property(retain, nonatomic) NSImage *icon;

@end

