//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class GTFActionTimelineModel, NSImage, NSMutableParagraphStyle;

@interface GTFActionRefPopoverView : NSView
{
    NSMutableParagraphStyle *_paragraphStyle;
    NSImage *_infiniteImage;
    GTFActionTimelineModel *_referenceAction;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) __weak GTFActionTimelineModel *referenceAction; // @synthesize referenceAction=_referenceAction;
- (struct CGSize)intrinsicContentSize;
- (void)createCGRoundedRect:(struct CGRect)arg1 radius:(double)arg2 context:(struct CGContext *)arg3;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (void)awakeFromNib;

@end

