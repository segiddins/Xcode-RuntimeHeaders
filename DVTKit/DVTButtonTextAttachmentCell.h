//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextAttachmentCell.h>

@class NSButtonCell;

@interface DVTButtonTextAttachmentCell : NSTextAttachmentCell
{
    NSButtonCell *_buttonCell;
}

@property(readonly, nonatomic) NSButtonCell *buttonCell; // @synthesize buttonCell=_buttonCell;
- (void).cxx_destruct;
- (struct CGRect)cellFrameForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (struct CGSize)cellSize;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (id)controlView;
- (void)setControlView:(id)arg1;
- (id)initWithButtonCell:(id)arg1;

@end

