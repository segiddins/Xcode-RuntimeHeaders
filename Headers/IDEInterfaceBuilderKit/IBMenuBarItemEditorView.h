//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBMenuItemEditorView.h>

@interface IBMenuBarItemEditorView : IBMenuItemEditorView
{
}

+ (void)layoutItemViewsCollectively:(id)arg1 minimumFixedDimensionMagnitude:(double)arg2;
- (struct CGSize)idealSize;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)titleRect;
- (struct CGRect)editingTitleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (id)attributedTitle;
- (id)textAttributes;
- (id)effectiveTextColor;
- (id)effectiveFont;
- (void)setHighlighted:(BOOL)arg1;

@end
