//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTTableRowView.h>

@class NSTrackingArea;

@interface DVTFavoriteTableRowView : DVTTableRowView
{
    NSTrackingArea *trackingArea_;
    BOOL mouseIsOver_;
}

- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)invalidateCellContents;
- (void)setSelected:(BOOL)arg1;
- (void)updateTrackingAreas;
- (void)setSelectionHighlightStyle:(long long)arg1;
- (void)awakeFromNib;

@end

