//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBezierPath, NSView, SKGKStateQuickLookView;

@interface SKGKTransitionQuickLookView : NSObject
{
    struct CGPoint _lastFromPos;
    struct CGPoint _lastToPos;
    NSBezierPath *_arrowPath;
    NSBezierPath *_linePath;
    BOOL _selected;
    BOOL _current;
    SKGKStateQuickLookView *_fromState;
    SKGKStateQuickLookView *_toState;
    NSView *_parent;
}

@property(readonly, nonatomic) NSView *parent; // @synthesize parent=_parent;
@property(nonatomic, getter=isCurrent) BOOL current; // @synthesize current=_current;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) SKGKStateQuickLookView *toState; // @synthesize toState=_toState;
@property(readonly, nonatomic) SKGKStateQuickLookView *fromState; // @synthesize fromState=_fromState;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)_generatePaths;
- (double)_angleForHookEdge:(unsigned long long)arg1;
- (struct CGPoint)_positionForToEdge:(unsigned long long)arg1 fromEdge:(unsigned long long)arg2 ofState:(id)arg3;
- (unsigned long long)_transitionHookEdgeFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
@property(readonly, nonatomic) struct CGRect frame;
- (id)initFromPoints:(id)arg1 arrowStartFlag:(BOOL)arg2 arrowEndFlag:(BOOL)arg3;
- (id)initFromPoints:(id)arg1 isSelfEdge:(BOOL)arg2;
- (void)_generateHermiteSpline:(id)arg1 isSelfEdge:(BOOL)arg2;
- (void)_generateBezierSpline:(id)arg1;
- (id)initFromState:(id)arg1 toState:(id)arg2 parentView:(id)arg3;

@end

