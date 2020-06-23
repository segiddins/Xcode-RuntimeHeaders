//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaIntegration/IBNSRelationshipSegueModeledViewControllerEditor.h>

@class DVTDelayedInvocation, IBNSTabViewControllerView;

@interface IBNSTabViewControllerEditor : IBNSRelationshipSegueModeledViewControllerEditor
{
    DVTDelayedInvocation *_synchronizeInvocation;
}

+ (id)_placeholderTabViewItemWithViewType:(long long)arg1 title:(id)arg2 forModelController:(id)arg3;
+ (id)_placeholderTabViewItemsWithViewType:(long long)arg1 fromModelController:(id)arg2;
+ (void)populateDisplayTabViewController:(id)arg1 withViewType:(long long)arg2 fromModelController:(id)arg3;
+ (void)populateDisplayTabView:(id)arg1 withViewType:(long long)arg2 fromModelController:(id)arg3;
+ (Class)ibDropTargetResolverClass;
- (void).cxx_destruct;
- (void)willClose;
- (void)didOpen;
- (BOOL)interceptEvent:(id)arg1;
- (void)_tryToDragFromTabIndex:(long long)arg1 withLeftMouseDown:(id)arg2 andLeftMouseDragged:(id)arg3;
- (id)_dragImageOfTabViewItems:(id)arg1 clickedItemIndex:(long long)arg2 dragLocation:(struct CGPoint *)arg3;
- (id)acceptDragInfo:(id)arg1 context:(id)arg2;
- (void)_reorderTabs:(id)arg1 toInsertionIndex:(long long)arg2;
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

