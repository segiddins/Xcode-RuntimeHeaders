//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class HFLineCountingRepresenter, NSDictionary, NSFont, NSLayoutManager, NSTextContainer, NSTextStorage;

@interface HFLineCountingView : NSView
{
    NSFont *font;
    double lineHeight;
    CDStruct_b3ff9733 lineRangeToDraw;
    NSLayoutManager *layoutManager;
    NSTextStorage *textStorage;
    NSTextContainer *textContainer;
    NSDictionary *textAttributes;
    HFLineCountingRepresenter *representer;
    unsigned long long bytesPerLine;
    unsigned long long storedLineIndex;
    unsigned long long storedLineCount;
    unsigned long long lineNumberFormat;
    BOOL useStringDrawingPath;
    unsigned long long _startingLineNumber;
}

+ (unsigned long long)digitsRequiredToDisplayLineNumber:(unsigned long long)arg1 inFormat:(unsigned long long)arg2;
- (id)representer;
- (void)setRepresenter:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (double)lineHeight;
- (void)setLineHeight:(double)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (BOOL)canUseStringDrawingPathForFont:(id)arg1;
- (unsigned long long)lineNumberFormat;
@property unsigned long long startingLineNumber; // @synthesize startingLineNumber=_startingLineNumber;
- (void)setLineNumberFormat:(unsigned long long)arg1;
- (unsigned long long)bytesPerLine;
- (void)setBytesPerLine:(unsigned long long)arg1;
- (CDStruct_b3ff9733)lineRangeToDraw;
- (void)setLineRangeToDraw:(CDStruct_b3ff9733)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawLineNumbersWithClip:(struct CGRect)arg1;
- (void)drawLineNumbersWithClipFullLayoutManager:(struct CGRect)arg1;
- (void)drawLineNumbersWithClipSingleStringCellDrawing:(struct CGRect)arg1;
- (void)drawLineNumbersWithClipSingleStringDrawing:(struct CGRect)arg1;
- (void)updateLayoutManagerWithLineIndex:(unsigned long long)arg1 lineCount:(unsigned long long)arg2;
- (id)createLineStringForRange:(CDStruct_91ee6ea3)arg1;
- (unsigned long long)characterCountForLineRange:(CDStruct_91ee6ea3)arg1;
- (void)drawLineNumbersWithClipStringDrawing:(struct CGRect)arg1;
- (void)drawLineNumbersWithClipLayoutManagerPerLine:(struct CGRect)arg1;
- (void)drawDividerWithClip:(struct CGRect)arg1;
- (void)drawGradientWithClip:(struct CGRect)arg1;
- (void)getLineNumberFormatString:(char *)arg1 length:(unsigned long long)arg2;
- (BOOL)isFlipped;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_sharedInitLineCountingView;

@end

