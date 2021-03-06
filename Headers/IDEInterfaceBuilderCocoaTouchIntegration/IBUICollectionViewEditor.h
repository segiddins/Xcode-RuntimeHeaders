//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIScrollViewEditor.h>

@class NSString;

@interface IBUICollectionViewEditor : IBUIScrollViewEditor
{
    NSString *_targetRelation;
}

+ (Class)ibDropTargetResolverClass;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *targetRelation; // @synthesize targetRelation=_targetRelation;
- (BOOL)interceptEvent:(id)arg1;
- (void)reattachDraggedObjects:(id)arg1 dragContext:(id)arg2;
- (id)draggedImageState:(id)arg1;
- (id)draggedImageStateForIdentifiedCells:(id)arg1 cellsAreInEditedCollectionView:(BOOL)arg2 name:(id)arg3;
- (void)resizeChild:(id)arg1 fromKnob:(CDUnion_42e99c75)arg2 withEvent:(id)arg3;
- (CDStruct_b58c4854)activeKnobRectsForObject:(id)arg1;
- (BOOL)shouldChildHaveResizeKnobs:(id)arg1;
- (BOOL)wantsDefaultDragInsertionIndicatorForDragInfo:(id)arg1;
- (void)drawDragAndDropInsertionHints;
- (id)dragInsertionIndicatorPathInView:(id)arg1 shouldFill:(char *)arg2;
- (void)customizePasteboardInsertionContext:(id)arg1 fromPasteboard:(id)arg2 andDraggingInfo:(id)arg3;
- (void)failToAcceptDragInfo:(id)arg1;
- (id)acceptDragInfo:(id)arg1 context:(id)arg2;
- (void)prepareToAcceptDragInfo:(id)arg1;
- (void)noteDescendant:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (id)editedCollectionView;

@end

