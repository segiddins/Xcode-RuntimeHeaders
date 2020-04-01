//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBEditor.h>

@interface IBUIMenuEditor : IBEditor
{
}

+ (Class)ibDropTargetResolverClass;
- (void)dragSelectionWithMouseDown:(id)arg1 andMouseDragged:(id)arg2;
- (void)detachDraggedObjects:(id)arg1 dragContext:(id)arg2;
- (void)reattachDraggedObjects:(id)arg1 dragContext:(id)arg2;
- (id)initialDragImageState:(id)arg1;
- (id)draggedImageState:(id)arg1;
- (id)draggedImageStateForMenuItems:(id)arg1;
- (id)draggedImageStateForIdentifiedItems:(id)arg1;
- (BOOL)interceptEvent:(id)arg1;
- (void)beginEditingTitle:(id)arg1;
- (id)lastMouseDown;
- (void)noteDescendant:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (void)selectionOwner:(id)arg1 didSelect:(id)arg2 andDeselect:(id)arg3;
- (id)menuView;
- (void)positionChildEditorFrames;
- (void)resizeFrameViewWithEvent:(id)arg1 fromEditorCanvasFrameKnob:(CDUnion_42e99c75)arg2;
- (id)editedMenu;

@end

