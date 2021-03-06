//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaIntegration/IBNSViewControllerEditor.h>

@class IBNSRelationshipSegueModeledViewControllerView, NSSet;

@interface IBNSRelationshipSegueModeledViewControllerEditor : IBNSViewControllerEditor
{
    IBNSRelationshipSegueModeledViewControllerView *_viewControllerEditorView;
    NSSet *_observers;
}

+ (id)createPlaceholderViewForType:(long long)arg1 withFrame:(struct CGRect)arg2 title:(id)arg3;
- (void).cxx_destruct;
@property(retain) NSSet *observers; // @synthesize observers=_observers;
@property(retain) IBNSRelationshipSegueModeledViewControllerView *viewControllerEditorView; // @synthesize viewControllerEditorView=_viewControllerEditorView;
- (void)resizeFrameViewWithEvent:(id)arg1 fromEditorCanvasFrameKnob:(CDUnion_42e99c75)arg2;
- (id)viewEditorFrameController;
- (id)modelView;
- (id)editorView;
- (id)editedNSViewController;
- (void)noteDescendant:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (void)_updateEditorCanvasFrameSize;
- (void)willClose;
- (void)didOpen;
- (void)_teardownObservations;
- (void)childViewControllerChanged:(id)arg1 keyPath:(id)arg2 previousValue:(id)arg3;
- (void)_setupObservations;
- (id)editedViewController;
- (void)synchronizeWithEditedViewController;
- (id)initWithEditedObject:(id)arg1 parentEditor:(id)arg2 frameController:(id)arg3;

@end

