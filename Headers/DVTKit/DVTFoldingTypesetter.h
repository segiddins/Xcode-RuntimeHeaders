//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSATSTypesetter.h>

@class DVTFoldingLayoutManager;

@interface DVTFoldingTypesetter : NSATSTypesetter
{
    DVTFoldingLayoutManager *_foldingLayoutManager;
}

- (void).cxx_destruct;
@property __weak DVTFoldingLayoutManager *foldingLayoutManager; // @synthesize foldingLayoutManager=_foldingLayoutManager;
- (unsigned long long)_getRemainingNominalParagraphRange:(struct _NSRange *)arg1 andParagraphSeparatorRange:(struct _NSRange *)arg2 charactarIndex:(unsigned long long)arg3 layoutManager:(id)arg4 string:(id)arg5;
- (struct CGRect)boundingBoxForControlGlyphAtIndex:(unsigned long long)arg1 forTextContainer:(id)arg2 proposedLineFragment:(struct CGRect)arg3 glyphPosition:(struct CGPoint)arg4 characterIndex:(unsigned long long)arg5;
- (void)getLineFragmentRect:(struct CGRect *)arg1 usedRect:(struct CGRect *)arg2 remainingRect:(struct CGRect *)arg3 forStartingGlyphAtIndex:(unsigned long long)arg4 proposedRect:(struct CGRect)arg5 lineSpacing:(double)arg6 paragraphSpacingBefore:(double)arg7 paragraphSpacingAfter:(double)arg8;
- (BOOL)shouldBreakLineByWordBeforeCharacterAtIndex:(unsigned long long)arg1;
- (unsigned long long)actionForControlCharacterAtIndex:(unsigned long long)arg1;

@end

