//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTStructuredLayoutKit/DVTLayoutView_ML.h>

@class IBEditedMenuItem, IBKeyEquivalent;

@interface IBMenuItemEditorView : DVTLayoutView_ML
{
    BOOL _mainMenuOrDescendantOfMainMenu;
    BOOL _highlighted;
    BOOL _drawsKeyEquivalentRect;
    IBEditedMenuItem *_menuItem;
}

+ (void)layoutItemViewsCollectively:(id)arg1 minimumFixedDimensionMagnitude:(double)arg2;
@property BOOL drawsKeyEquivalentRect; // @synthesize drawsKeyEquivalentRect=_drawsKeyEquivalentRect;
@property(getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(getter=isMainMenuOrDescendantOfMainMenu) BOOL mainMenuOrDescendantOfMainMenu; // @synthesize mainMenuOrDescendantOfMainMenu=_mainMenuOrDescendantOfMainMenu;
@property(readonly) IBEditedMenuItem *menuItem; // @synthesize menuItem=_menuItem;
- (void).cxx_destruct;
- (struct CGRect)editingTitleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)stateImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)keyEquivalentHitTestRectForBounds:(struct CGRect)arg1;
@property(readonly) IBKeyEquivalent *keyEquivalent;
- (id)attributedTitle;
- (id)effectiveFont;
- (id)initWithMenuItem:(id)arg1;

@end

