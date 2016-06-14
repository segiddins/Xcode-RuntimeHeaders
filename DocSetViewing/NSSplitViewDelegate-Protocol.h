//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DocSetViewing/NSObject-Protocol.h>

@class NSNotification, NSSplitView, NSView;

@protocol NSSplitViewDelegate <NSObject>

@optional
- (void)splitViewDidResizeSubviews:(NSNotification *)arg1;
- (void)splitViewWillResizeSubviews:(NSNotification *)arg1;
- (struct CGRect)splitView:(NSSplitView *)arg1 additionalEffectiveRectOfDividerAtIndex:(long long)arg2;
- (struct CGRect)splitView:(NSSplitView *)arg1 effectiveRect:(struct CGRect)arg2 forDrawnRect:(struct CGRect)arg3 ofDividerAtIndex:(long long)arg4;
- (BOOL)splitView:(NSSplitView *)arg1 shouldHideDividerAtIndex:(long long)arg2;
- (BOOL)splitView:(NSSplitView *)arg1 shouldAdjustSizeOfSubview:(NSView *)arg2;
- (void)splitView:(NSSplitView *)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (double)splitView:(NSSplitView *)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(NSSplitView *)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(NSSplitView *)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(NSSplitView *)arg1 shouldCollapseSubview:(NSView *)arg2 forDoubleClickOnDividerAtIndex:(long long)arg3;
- (BOOL)splitView:(NSSplitView *)arg1 canCollapseSubview:(NSView *)arg2;
@end

