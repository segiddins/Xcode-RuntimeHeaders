//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface DBGDataTipsDotView : NSView
{
    long long _tag;
    BOOL _inside;
    int _type;
    CDUnknownBlockType _actionBlock;
}

+ (double)controlDimension;
- (void).cxx_destruct;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)addActionButtonWithImage:(id)arg1 andActionBlock:(CDUnknownBlockType)arg2;
- (void)_callActionBlock:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)addSubview:(id)arg1;
- (void)_checkDataTipEvent:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

