//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XDInterface/XDGraphLayouter.h>

@class XDDiagramView;

@interface XDGraphicLayouter : XDGraphLayouter
{
    XDDiagramView *_diagramView;
}

+ (id)defaultIdentifier;
+ (void)initialize;
- (void)layoutGraphics:(id)arg1 inView:(id)arg2;
- (id)diagramView;
- (void)endLayouting;
- (void)beginLayouting;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end

