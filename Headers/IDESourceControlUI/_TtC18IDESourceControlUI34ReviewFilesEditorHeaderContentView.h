//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class MISSING_TYPE, NSButton, NSTextField;

@interface _TtC18IDESourceControlUI34ReviewFilesEditorHeaderContentView : NSView
{
    MISSING_TYPE *messageField;
    MISSING_TYPE *contractMessageButton;
    MISSING_TYPE *textContainer;
    MISSING_TYPE *layoutManager;
    MISSING_TYPE *textStorage;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layout;
- (BOOL)isFlipped;
- (void)fieldEditorChangedSelectionWithNotification:(id)arg1;
- (void)awakeFromNib;
@property(nonatomic) __weak NSButton *contractMessageButton; // @synthesize contractMessageButton;
@property(nonatomic) __weak NSTextField *messageField; // @synthesize messageField;

// Remaining properties
@property(nonatomic, readonly) BOOL flipped;

@end

