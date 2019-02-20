//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSLayoutManager.h>

@interface XCLayoutManager : NSLayoutManager
{
}

+ (void)initialize;
- (void)drawUnderlineForGlyphRange:(struct _NSRange)arg1 underlineType:(long long)arg2 baselineOffset:(double)arg3 lineFragmentRect:(struct CGRect)arg4 lineFragmentGlyphRange:(struct _NSRange)arg5 containerOrigin:(struct CGPoint)arg6;
- (void)drawBackgroundForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;
- (unsigned long long)layoutOptions;
- (void)addTemporaryAttribute:(id)arg1 value:(id)arg2 forCharacterRange:(struct _NSRange)arg3;
- (void)removeTemporaryAttribute:(id)arg1 forCharacterRange:(struct _NSRange)arg2;
- (void)addTemporaryAttributes:(id)arg1 forCharacterRange:(struct _NSRange)arg2;
- (void)setTemporaryAttributes:(id)arg1 forCharacterRange:(struct _NSRange)arg2;
- (void)textContainerChangedGeometry:(id)arg1;
- (struct _NSRange)_characterRangeCurrentlyInAndAfterContainer:(id)arg1;
- (void)_fillLayoutHoleAtIndex:(unsigned long long)arg1 desiredNumberOfLines:(unsigned long long)arg2;
- (id)init;

@end
