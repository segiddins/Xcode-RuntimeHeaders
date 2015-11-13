//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GPUDebuggerGLSupport/NSObject-Protocol.h>

@class GPUDataTableView, NSColor;

@protocol GPUDataTableViewDelegate <NSObject>

@optional
- (double)dataTableView:(GPUDataTableView *)arg1 minimumWidthForColumn:(long long)arg2 inGroup:(long long)arg3;
- (void)dataTableViewWillShowContextMenu:(GPUDataTableView *)arg1;
- (NSColor *)dataTableView:(GPUDataTableView *)arg1 colorForCellAtRow:(long long)arg2 column:(long long)arg3 inGroup:(long long)arg4;
@end

