//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaIntegration/IBNSViewEditor.h>

@interface IBNSTableColumnEditor : IBNSViewEditor
{
}

+ (Class)ibDropTargetResolverClass;
- (BOOL)interceptEvent:(id)arg1;
- (void)resizeChild:(id)arg1 fromKnob:(CDUnion_42e99c75)arg2 withEvent:(id)arg3;
- (BOOL)interceptMouseDragged:(id)arg1;
- (id)lastMouseDown;
- (void)dragTableCellView:(id)arg1 withLeftMouseDown:(id)arg2 andLeftMouseDragged:(id)arg3;
- (void)reattachDraggedObjects:(id)arg1 dragContext:(id)arg2;
- (BOOL)shouldChildHaveResizeKnobs:(id)arg1;
- (CDStruct_b58c4854)activeKnobRectsForObject:(id)arg1;
- (BOOL)isContainedPrototypeCellView:(id)arg1;
- (id)editedTableColumn;
- (id)editedView;

@end

