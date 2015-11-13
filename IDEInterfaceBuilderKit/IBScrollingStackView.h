//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTStackView_ML.h>

@class NSArray, NSView;

@interface IBScrollingStackView : DVTStackView_ML
{
    NSArray *views;
    NSView *firstVisible;
    long long maxVisibleViews;
}

- (void).cxx_destruct;
- (void)replaceView:(id)arg1 withView:(id)arg2;
- (void)layoutTopDown;
- (BOOL)canScrollDown;
- (BOOL)canScrollUp;
- (void)scrollTo:(long long)arg1;
- (long long)indexOfFirstVisibleView;
- (struct _NSRange)visibleRange;
- (long long)numberOfViews;
- (long long)maxVisibleViews;
- (void)setMaxVisibleViews:(long long)arg1;

@end

