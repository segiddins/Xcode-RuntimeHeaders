//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBEditor.h>

@interface IBExternalPrimarySceneObjectEditor : IBEditor
{
}

- (id)chooseReferencedFilePathFromCandidates:(id)arg1;
- (void)invokeWithReferencedStoryboardDocument:(CDUnknownBlockType)arg1;
- (id)findReferencedControllerInDocument:(id)arg1;
- (void)showReferencedController;
- (void)resizeFrameViewWithEvent:(id)arg1 fromEditorCanvasFrameKnob:(CDUnion_31865a80)arg2;
- (BOOL)shouldDragFrameWithMouseDownInEditedRect:(id)arg1;
- (BOOL)interceptEvent:(id)arg1;
- (void)noteDescendant:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (id)editedExternalPrimarySceneObject;

@end

