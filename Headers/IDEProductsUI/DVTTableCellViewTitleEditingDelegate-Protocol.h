//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEProductsUI/NSObject-Protocol.h>

@class DVTTableCellView;

@protocol DVTTableCellViewTitleEditingDelegate <NSObject>
- (void)titleDidChangeForTableCellView:(DVTTableCellView *)arg1;
- (struct _NSRange)initialSelectionRangeForTableCellView:(DVTTableCellView *)arg1 usingProposedRange:(struct _NSRange)arg2;
@end

