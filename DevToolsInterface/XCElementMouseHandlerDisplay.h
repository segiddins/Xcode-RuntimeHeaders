//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCElementDisplay.h>

@interface XCElementMouseHandlerDisplay : XCElementDisplay
{
    BOOL _mouseInside;
    BOOL _withinMinimumDuration;
}

- (BOOL)displayer:(struct NSObject *)arg1 validMouseDownLoc:(struct CGPoint)arg2 inFrame:(struct CGRect)arg3;
- (void)displayer:(struct NSObject *)arg1 performDelegateAction:(id)arg2;
- (void)displayer:(struct NSObject *)arg1 drawForeground:(struct CGRect)arg2 forFrame:(struct CGRect)arg3;
- (BOOL)displayer:(struct NSObject *)arg1 handleMouseDownOnElement:(struct NSObject *)arg2 event:(id)arg3;
- (void)_endOfMinimumDurationForDisplayer:(struct NSObject *)arg1;

@end

