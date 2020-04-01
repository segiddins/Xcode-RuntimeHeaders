//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class NSFont;

@interface DVTFilterTokenCompletionTextFieldCell : NSTextFieldCell
{
    double _beforeMargin;
    double _afterMargin;
    NSFont *_baselineFont;
}

@property(retain, nonatomic) NSFont *baselineFont; // @synthesize baselineFont=_baselineFont;
@property double afterMargin; // @synthesize afterMargin=_afterMargin;
@property double beforeMargin; // @synthesize beforeMargin=_beforeMargin;
- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (struct CGRect)expansionFrameWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)_adjustFrameToVerticallyCenterText:(struct CGRect)arg1 inView:(id)arg2 singleLine:(BOOL)arg3;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (id)highlightColorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

