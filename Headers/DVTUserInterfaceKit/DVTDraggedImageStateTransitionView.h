//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class DVTDraggedImageState;

@interface DVTDraggedImageStateTransitionView : NSView
{
    float _progress;
    DVTDraggedImageState *_fromState;
    DVTDraggedImageState *_toState;
}

@property(readonly) DVTDraggedImageState *toState; // @synthesize toState=_toState;
@property(readonly) DVTDraggedImageState *fromState; // @synthesize fromState=_fromState;
@property float progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
@property(readonly) double duration;
@property(readonly) struct CGPoint anchorPoint;
- (id)initWithFromState:(id)arg1 toState:(id)arg2;

@end

