//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class MISSING_TYPE, NSButton, NSTextField;

@interface _TtC15IDEAnalyticsKit35DiskWriteLogStackFrameTableCellView : NSTableCellView
{
    MISSING_TYPE *diskWriteLogViewController;
    MISSING_TYPE *isUserFrame;
    MISSING_TYPE *frameDescription;
    MISSING_TYPE *jumpButton;
    MISSING_TYPE *stackFrame;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)clickedJumpButton:(id)arg1;
@property(nonatomic) __weak NSButton *jumpButton; // @synthesize jumpButton;
@property(nonatomic) __weak NSTextField *frameDescription; // @synthesize frameDescription;

@end

