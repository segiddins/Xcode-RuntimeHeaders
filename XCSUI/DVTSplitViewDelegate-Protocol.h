/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSSplitViewDelegate-Protocol.h"

@protocol DVTSplitViewDelegate <NSSplitViewDelegate>

@optional
- (id)splitView:(id)arg1 additionalEffectiveRectsOfDividerAtIndex:(long long)arg2;
- (void)splitViewDidEndLiveResize:(id)arg1;
- (void)splitViewWillStartLiveResize:(id)arg1;
- (id)splitView:(id)arg1 needsRectanglesForViewsWithState:(id)arg2 forSize:(struct CGSize)arg3;
- (void)splitViewItemDidExpandOrCollapseBecauseUserDraggedDivider:(id)arg1;
@end
