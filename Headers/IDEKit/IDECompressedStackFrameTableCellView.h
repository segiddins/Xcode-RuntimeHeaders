//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class IDECompressedStackFrameIndicatorView, NSColor;

@interface IDECompressedStackFrameTableCellView : NSTableCellView
{
    IDECompressedStackFrameIndicatorView *_compressedIndicatorView;
}

+ (void)registerNibWithOutlineView:(id)arg1 forIdentifier:(id)arg2;
- (void).cxx_destruct;
@property(retain) IDECompressedStackFrameIndicatorView *compressedIndicatorView; // @synthesize compressedIndicatorView=_compressedIndicatorView;
@property(copy) NSColor *color;

@end

