//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTStructuredLayoutKit/DVTLayoutView_ML.h>

@class DVTStackView_ML, IBEditedMenu, IBMenuItemEditorView, IBMutableIdentityDictionary, NSArray, NSFont, NSMenu, NSSet;

@interface IBMenuEditorView : DVTLayoutView_ML
{
    IBMenuItemEditorView *_itemViewDrawingKeyEquivalentRect;
    IBMutableIdentityDictionary *_representedObjectsToItems;
    IBMutableIdentityDictionary *_itemsToViews;
    DVTStackView_ML *_itemStack;
    NSSet *_selectedItems;
    BOOL _rebuildViewList;
    IBEditedMenu *_editedMenu;
    NSFont *_font;
    double _minimumFixedDimensionMagnitude;
    NSArray *_menuItemViews;
}

- (void).cxx_destruct;
@property(readonly) NSArray *menuItemViews; // @synthesize menuItemViews=_menuItemViews;
@property(nonatomic) double minimumFixedDimensionMagnitude; // @synthesize minimumFixedDimensionMagnitude=_minimumFixedDimensionMagnitude;
@property(copy, nonatomic) NSFont *font; // @synthesize font=_font;
@property(retain, nonatomic) IBEditedMenu *editedMenu; // @synthesize editedMenu=_editedMenu;
- (id)copyForDisplayingMenu:(id)arg1;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (struct CGRect)paddingRectWithMagnitude:(double)arg1;
- (id)distanceToDragToRemoveItem;
- (id)distanceToDragToAddItem;
- (double)maxEdgeInset;
- (double)minEdgeInset;
- (double)itemPadding;
- (struct CGRect)editingTitleRectForRepresentedObject:(id)arg1;
- (struct CGRect)stateImageHitTestRectForRepresentedObject:(id)arg1;
- (struct CGRect)keyEquivalentHitTestRectForRepresentedObject:(id)arg1;
- (struct CGRect)frameForMenuItemWithRepresentedObject:(id)arg1;
- (unsigned long long)layoutDirection;
- (id)createMenuItemEditorViewForMenuItem:(id)arg1;
- (Class)menuItemEditorViewClass;
- (id)representedObjectAtPoint:(struct CGPoint)arg1;
- (id)menuItemViewAtPoint:(struct CGPoint)arg1;
- (void)setSelectedItems:(id)arg1;
- (id)itemsWithRepresentedObjects:(id)arg1;
- (BOOL)containsItemRepresentingObject:(id)arg1;
- (id)viewForRepresentedObject:(id)arg1;
- (id)menuItemForRepresentedObject:(id)arg1;
- (id)viewForMenuItem:(id)arg1;
- (void)setDrawsKeyEquivalentRectForItemWithRepresentedObject:(id)arg1;
- (id)initWithEditedMenu:(id)arg1;

// Remaining properties
@property(retain) NSMenu *menu; // @dynamic menu;

@end

