//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableHeaderCell.h"

@interface DVTModernTableHeaderCell : NSTableHeaderCell
{
    double _leftTitleMargin;
}

@property double leftTitleMargin; // @synthesize leftTitleMargin=_leftTitleMargin;
- (void)drawSortIndicatorWithFrame:(struct CGRect)arg1 inView:(id)arg2 ascending:(BOOL)arg3 priority:(long long)arg4;
- (struct CGRect)sortIndicatorRectForBounds:(struct CGRect)arg1;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)init;

@end

