//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBViewEditor.h>

@class NSString;

@interface IBUINavigationItemEditor : IBViewEditor
{
    BOOL _shouldDrawBarButtonItemInsertionIndicator;
    NSString *_lastDropTargetRelation;
    struct CGRect _dragTargetViewInsertionFrame;
}

+ (Class)ibDropTargetResolverClass;
@property(nonatomic) BOOL shouldDrawBarButtonItemInsertionIndicator; // @synthesize shouldDrawBarButtonItemInsertionIndicator=_shouldDrawBarButtonItemInsertionIndicator;
@property(nonatomic) struct CGRect dragTargetViewInsertionFrame; // @synthesize dragTargetViewInsertionFrame=_dragTargetViewInsertionFrame;
@property(copy, nonatomic) NSString *lastDropTargetRelation; // @synthesize lastDropTargetRelation=_lastDropTargetRelation;
- (void).cxx_destruct;
- (id)editableStringAreas;
- (BOOL)interceptEvent:(id)arg1;
- (void)_dragObjects:(id)arg1 withEvent:(id)arg2 lastMouseDown:(id)arg3 draggedImageState:(id)arg4 effectiveHitObject:(id)arg5 originalRelation:(id)arg6 originalRelationValue:(id)arg7;
- (id)_barButtonItemAtPoint:(struct CGPoint)arg1;
- (void)reattachDraggedObjects:(id)arg1 dragContext:(id)arg2;
- (BOOL)shouldChildHaveResizeKnobs:(id)arg1;
- (CDStruct_b58c4854)activeKnobRectsForObject:(id)arg1;
- (id)trackerForChild:(id)arg1 withView:(id)arg2 fromKnob:(CDUnion_42e99c75)arg3;
- (id)editedView;
- (BOOL)wantsDefaultDragInsertionIndicatorForDragInfo:(id)arg1;
- (void)drawDragAndDropInsertionHints;
- (void)customizePasteboardInsertionContext:(id)arg1 fromPasteboard:(id)arg2 andDraggingInfo:(id)arg3;
- (id)acceptDragInfo:(id)arg1 context:(id)arg2;
- (void)failToAcceptDragInfo:(id)arg1;
- (void)prepareToAcceptDragInfo:(id)arg1;
- (id)draggedImageState:(id)arg1;
- (id)initialDragImageState:(id)arg1;
- (id)draggedImageStateForViews:(id)arg1 withName:(id)arg2;
- (id)draggedImageStateWithName:(id)arg1 forBarButtonItems:(id)arg2 itemRelation:(id)arg3;
- (id)decodeBarButtonItemsFromPasteboard:(id)arg1 context:(id)arg2;
- (id)targetRelationForDragInfo:(id)arg1;
- (id)targetRelationForDragInfo:(id)arg1 pasteboardTypeOut:(id *)arg2;
- (id)targetRelationForPoint:(struct CGPoint)arg1 andPasteboard:(id)arg2 pasteboardTypeOut:(id *)arg3;
- (id)imagesAfterAlteringWithClonedNavigationItem:(CDUnknownBlockType)arg1;
- (id)editedNavigationItem;

@end

