//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBEditor.h>

@interface IBNSApplicationEditor : IBEditor
{
}

- (void)resizeFrameViewWithEvent:(id)arg1 fromEditorCanvasFrameKnob:(CDUnion_42e99c75)arg2;
- (id)mainMenu;
- (id)mainMenuView;
- (BOOL)descendantAffectsMainMenuView:(id)arg1;
- (BOOL)propertyChangeAffectsMainMenuView:(id)arg1;
- (void)noteDescendant:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (id)editedApplication;

@end
