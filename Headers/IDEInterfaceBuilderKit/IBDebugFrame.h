//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBCanvasFrame.h>

@class NSColor, NSString;

@interface IBDebugFrame : IBCanvasFrame
{
    NSColor *_color;
    NSString *_title;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSColor *color; // @synthesize color=_color;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseDown:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (struct CGRect)boundsForHitTesting;

@end

