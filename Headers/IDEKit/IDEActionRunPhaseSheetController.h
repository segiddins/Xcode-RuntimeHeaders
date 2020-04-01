//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/IDEActionSliceViewControllerDelegate-Protocol.h>
#import <IDEKit/IDECapsuleListViewDataSource-Protocol.h>
#import <IDEKit/NSTableViewDataSource-Protocol.h>

@class DVTGradientImageButton, DVTGradientImagePopUpButton, DVTObservingToken, IDEActionStackView, IDEControlGroup, IDESchemeAction, NSArray, NSMutableArray, NSString;

@interface IDEActionRunPhaseSheetController : IDEViewController <NSTableViewDataSource, IDECapsuleListViewDataSource, IDEActionSliceViewControllerDelegate>
{
    IDESchemeAction *_runPhase;
    NSArray *_actionTypeExtensions;
    IDEActionStackView *_actionStackView;
    IDEControlGroup *_controlGroup;
    DVTGradientImagePopUpButton *_addPopUpButton;
    DVTGradientImageButton *_removeButton;
    DVTObservingToken *_actionsObservingToken;
    DVTObservingToken *_actionSelectionObservingToken;
    NSMutableArray *_arrangedActionSliceControllers;
    NSArray *_actionUIExtensions;
    BOOL _isMovingActions;
}

+ (id)defaultViewNibName;
+ (void)initialize;
@property(retain) IDESchemeAction *runPhase; // @synthesize runPhase=_runPhase;
- (void).cxx_destruct;
- (unsigned long long)capsuleListView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3;
- (BOOL)capsuleListView:(id)arg1 acceptDrop:(id)arg2 draggedRow:(unsigned long long)arg3 destinationRow:(unsigned long long)arg4;
- (BOOL)capsuleListView:(id)arg1 allowDragOfRowAtIndex:(unsigned long long)arg2;
- (id)capsuleListView:(id)arg1 viewControllerForRow:(long long)arg2;
- (long long)numberOfObjectsInCapsuleListView:(id)arg1;
- (void)_moveActionFromIndex:(unsigned long long)arg1 toIndex:(long long)arg2;
- (void)deleteActionSlice:(id)arg1;
- (void)deleteSelectedAction:(id)arg1;
- (void)addAction:(id)arg1;
- (id)_mutablePhaseActions;
- (id)_phaseActions;
- (id)_actionsKey;
- (id)_newExecutionActionForType:(id)arg1;
@property(readonly) NSArray *actionTypeExtensions;
- (void)_actionsChanged:(id)arg1;
- (id)newActionSliceViewControllerForAction:(id)arg1;
- (void)_setUpAddMenu;
- (void)primitiveInvalidate;
- (void)awakeFromNib;
- (void)updateBoundContent;
- (void)updateBoundIDEWorkspaceBinding;
- (void)updateBoundIDERunContextBinding;
- (id)dvt_extraBindings;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

