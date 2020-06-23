//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaIntegration/IBNSRelationshipSegueModeledViewControllerEditor.h>

@class DVTDelayedInvocation, IBNSSplitViewControllerView;

@interface IBNSSplitViewControllerEditor : IBNSRelationshipSegueModeledViewControllerEditor
{
    DVTDelayedInvocation *_synchronizeInvocation;
}

+ (id)createSplitViewItemWithBehavior:(long long)arg1 childViewController:(id)arg2;
+ (id)_placeholderSplitViewItemsWithViewType:(long long)arg1 fromModelController:(id)arg2;
+ (void)populateDisplaySplitViewController:(id)arg1 withViewType:(long long)arg2 fromModelController:(id)arg3;
+ (void)populateDisplaySplitView:(id)arg1 withViewType:(long long)arg2 fromModelController:(id)arg3;
- (void).cxx_destruct;
- (void)willClose;
- (void)childViewControllerChanged:(id)arg1 keyPath:(id)arg2 previousValue:(id)arg3;
- (void)noteDescendant:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (void)_rebuildItems;
- (void)synchronizeWithEditedViewController;
- (id)modelSplitView;
- (id)editorSplitView;
- (id)modelView;
- (id)editorView;
- (id)editedSplitController;
@property(readonly) IBNSSplitViewControllerView *splitControllerEditorView;

@end

