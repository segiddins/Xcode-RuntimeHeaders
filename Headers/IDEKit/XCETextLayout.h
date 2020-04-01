//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTCocoaAdditionsKit/DVTDealloc2Main_Object.h>

@class NSArray, NSLayoutManager, NSTextContainer, NSTextStorage;

@interface XCETextLayout : DVTDealloc2Main_Object
{
    NSLayoutManager *_layoutManager;
    NSTextStorage *_textStorage;
    struct _NSRange _glyphRange;
    double _usedHeight;
    BOOL _layoutDone;
    NSArray *_coloredRects;
}

@property(readonly, nonatomic) NSTextStorage *textStorage; // @synthesize textStorage=_textStorage;
@property(retain, nonatomic) NSArray *coloredRects; // @synthesize coloredRects=_coloredRects;
@property(nonatomic) struct _NSRange glyphRange; // @synthesize glyphRange=_glyphRange;
@property(readonly, nonatomic) NSLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
- (void).cxx_destruct;
- (void)addColoredRectsForRange:(struct _NSRange)arg1 color:(id)arg2 reference:(id)arg3 toArray:(id)arg4;
- (void)drawColoredRects:(id)arg1 forTextOrigin:(struct CGPoint)arg2;
- (double)heightAtCharacterPosition:(unsigned long long)arg1;
- (void)drawAt:(struct CGPoint)arg1 inView:(id)arg2;
@property(readonly, nonatomic) double usedHeight;
@property(nonatomic) double width; // @dynamic width;
- (void)_doLayout;
- (void)setAttributedString:(id)arg1;
- (void)invalidateLayout;
@property(readonly, nonatomic) NSTextContainer *textContainer;
- (void)dealloc;
- (id)init;

@end

