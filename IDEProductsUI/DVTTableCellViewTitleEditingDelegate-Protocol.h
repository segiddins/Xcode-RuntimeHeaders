//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DVTTableCellView;

@protocol DVTTableCellViewTitleEditingDelegate <NSObject>
- (void)titleDidChangeForTableCellView:(DVTTableCellView *)arg1;
- (struct _NSRange)initialSelectionRangeForTableCellView:(DVTTableCellView *)arg1 usingProposedRange:(struct _NSRange)arg2;
@end

