//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTFoldingLayoutManagerDelegate-Protocol.h>

@class DVTLayoutManager, DVTMutableRangeArray, NSColor;

@protocol DVTLayoutManagerDelegate <DVTFoldingLayoutManagerDelegate>

@optional
- (void)didEndTokenizedEditingWithRanges:(DVTMutableRangeArray *)arg1;
- (void)willStartTokenizedEditingWithRanges:(DVTMutableRangeArray *)arg1;
- (void)tokenizableRangesWithRange:(struct _NSRange)arg1 completionBlock:(void (^)(NSArray *))arg2;
- (NSColor *)layoutManager:(DVTLayoutManager *)arg1 shouldUseTextBackgroundColor:(NSColor *)arg2 rectArray:(const struct CGRect *)arg3 count:(unsigned long long)arg4 forCharacterRange:(struct _NSRange)arg5;
@end
