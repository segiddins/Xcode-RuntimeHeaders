//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaIntegration/IBNSRelationshipSegueModeledViewControllerEditor.h>

@class IBNSTabViewControllerView;

@interface IBNSTabViewControllerEditor : IBNSRelationshipSegueModeledViewControllerEditor
{
}

+ (Class)ibDropTargetResolverClass;
- (BOOL)interceptEvent:(id)arg1;
- (void)_tryToDragFromTabIndex:(long long)arg1 withLeftMouseDown:(id)arg2 andLeftMouseDragged:(id)arg3;
- (id)_dragImageOfTabViewItems:(id)arg1 clickedItemIndex:(long long)arg2 dragLocation:(struct CGPoint *)arg3;
- (id)acceptDragInfo:(id)arg1 context:(id)arg2;
- (void)_reorderTabs:(id)arg1 toInsertionIndex:(long long)arg2;
- (void)_reorderTab:(long long)arg1 toInsertionIndex:(long long)arg2;
- (long long)_hitTabViewIndexForEvent:(id)arg1;
- (id)stringEditingContextForEvent:(id)arg1;
- (void)noteDescendant:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (void)_rebuildItems;
- (void)_rebuildView;
- (void)synchronizeWithEditedViewController;
- (id)modelTabView;
- (id)modelView;
- (id)editorTabView;
- (id)editorView;
- (id)modelTabController;
@property(readonly) IBNSTabViewControllerView *tabControllerEditorView;
- (struct CGRect)titleRectInTabView;

@end

