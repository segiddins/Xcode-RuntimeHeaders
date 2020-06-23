//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTKit/NSObject-Protocol.h>

@class NSColor, NSScrollView;

@protocol DVTSourceCodeComparisonTextView <NSObject>
@property(readonly) double defaultLineHeight;
@property(readonly) unsigned long long numberOfLines;
@property(readonly, copy) NSColor *backgroundColor;
- (void)getParagraphRect:(struct CGRect *)arg1 firstLineRect:(struct CGRect *)arg2 forLineRange:(struct _NSRange)arg3 ensureLayout:(BOOL)arg4;
- (struct _NSRange)visibleParagraphRange;
- (double)fmc_startOfLine:(long long)arg1;
- (long long)fmc_lineNumberForPosition:(double)arg1;

@optional
@property BOOL postsLayoutManagerNotifications;
- (BOOL)scrollToRange:(struct _NSRange)arg1;
- (void)scrollViewDidSetFrameSize:(NSScrollView *)arg1;
- (void)ensureLayoutForCharacterRange:(struct _NSRange)arg1;
- (struct _NSRange)characterRangeForLineRange:(struct _NSRange)arg1;
@end

