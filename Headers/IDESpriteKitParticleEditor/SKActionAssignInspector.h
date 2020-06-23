//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorViewController.h>

#import <IDESpriteKitParticleEditor/SKActionAssignAddPopoverDelegate-Protocol.h>

@class DVTBorderedView, DVTGradientImageButton, DVTTableView, IDEControlGroup, NSArray, NSArrayController, NSString, SKActionAssignAddPopoverViewController;

@interface SKActionAssignInspector : IDEInspectorViewController <SKActionAssignAddPopoverDelegate>
{
    DVTBorderedView *_controlBar;
    IDEControlGroup *_controlGroup;
    DVTTableView *_tableView;
    DVTGradientImageButton *_removeButton;
    DVTGradientImageButton *_addButton;
    SKActionAssignAddPopoverViewController *_assignActionPopoverController;
    NSArrayController *_assignedActions;
    NSArray *_selectedObjects;
}

+ (BOOL)supportsMultipleObjectInspection;
- (void).cxx_destruct;
- (void)keyDown:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)removeSelectedAssignments:(id)arg1;
- (void)addAssignment:(id)arg1;
- (void)actionAssignPopoverAssignedActionsNamed:(id)arg1;
- (void)didSetInspectedObjects:(id)arg1;
- (void)primitiveInvalidate;
- (void)refreshRemoveButtonEnabledState;
- (void)loadView;
- (void)setupControlBarAfterLoading;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

