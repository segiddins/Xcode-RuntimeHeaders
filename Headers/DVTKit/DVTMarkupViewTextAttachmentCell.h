//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewTextAttachmentCell.h>

@class NSView;

@interface DVTMarkupViewTextAttachmentCell : NSViewTextAttachmentCell
{
    NSView *_markupView;
}

@property(retain) NSView *markupView; // @synthesize markupView=_markupView;
- (void).cxx_destruct;
- (id)viewWithFrame:(struct CGRect)arg1 forView:(id)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(id)arg4;
- (struct CGSize)cellSize;

@end

