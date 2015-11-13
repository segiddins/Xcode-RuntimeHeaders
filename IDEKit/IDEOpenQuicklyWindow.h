//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class NSBezierPath;

@interface IDEOpenQuicklyWindow : NSWindow
{
    NSBezierPath *_clippingPath;
    double _cornerRadius;
}

+ (void)initialize;
@property(readonly) NSBezierPath *clippingPath; // @synthesize clippingPath=_clippingPath;
@property double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void).cxx_destruct;
- (double)animationResizeTime:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1 display:(BOOL)arg2;
- (BOOL)canBecomeKeyWindow;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

@end

