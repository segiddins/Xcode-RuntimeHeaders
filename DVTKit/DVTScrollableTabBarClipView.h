//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSClipView.h>

@interface DVTScrollableTabBarClipView : NSClipView
{
    BOOL _shouldChangeNextScrollFromVerticalToHorizontal;
}

@property(nonatomic) BOOL shouldChangeNextScrollFromVerticalToHorizontal; // @synthesize shouldChangeNextScrollFromVerticalToHorizontal=_shouldChangeNextScrollFromVerticalToHorizontal;
- (BOOL)_scrollTo:(const struct CGPoint *)arg1 animateScroll:(long long)arg2 flashScrollerKnobs:(unsigned long long)arg3;

@end

