//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

__attribute__((visibility("hidden")))
@interface _TtC8RCShared19ColorPickerGridView : NSView
{
    // Error parsing type: , name: numberOfRows
    // Error parsing type: , name: numberOfColumns
    // Error parsing type: , name: delegate
    // Error parsing type: , name: colors
    // Error parsing type: , name: columns
    // Error parsing type: , name: lastSelection
}

- (void).cxx_destruct;
- (void)handleColorSelection:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)layout;
- (void)updateLayer;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isFlipped;
@property(nonatomic, readonly) BOOL wantsUpdateLayer;

// Remaining properties
@property(nonatomic, readonly) BOOL flipped;

@end

