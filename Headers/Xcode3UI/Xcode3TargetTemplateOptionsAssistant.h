//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDETemplateOptionsAssistant.h>

#import <Xcode3UI/IDECompletionDestinationDelegate-Protocol.h>
#import <Xcode3UI/IDETemplateTeamPickerViewControllerDelegate-Protocol.h>

@class IDECompletionDestinationManager, IDETemplateTeamPickerViewController, NSArray, NSMutableDictionary, NSPopUpButton, NSString, Xcode3Target, Xcode3TargetChooserViewController;

@interface Xcode3TargetTemplateOptionsAssistant : IDETemplateOptionsAssistant <IDETemplateTeamPickerViewControllerDelegate, IDECompletionDestinationDelegate>
{
    NSPopUpButton *_destinationPopUp;
    IDECompletionDestinationManager *_destinationManager;
    NSPopUpButton *_targetPopUp;
    Xcode3Target *_selectedTarget;
    NSArray *_associatedTargetAllowableProductTypes;
    NSArray *_associatedTargetAllowablePlatforms;
    BOOL _associatedTargetIsRequired;
    BOOL _associatedTargetIsDependent;
    BOOL _associatedTargetIsTargetToBeTested;
    BOOL _associatedTargetNeedsProductBuildPhaseInjection;
    NSString *_associatedTargetPopUpTitle;
    NSString *_associatedTargetPopUpDescription;
    NSMutableDictionary *_prevOptionValuesFromConstraints;
    IDETemplateTeamPickerViewController *_teamPickerViewController;
    Xcode3TargetChooserViewController *_blueprintChooser;
}

+ (id)keyPathsForValuesAffectingCanFinish;
@property(retain) Xcode3TargetChooserViewController *blueprintChooser; // @synthesize blueprintChooser=_blueprintChooser;
- (void).cxx_destruct;
- (id)targetWorkspacesForDestinationManager:(id)arg1;
- (void)destinationManagerWorkspaceDidChange:(id)arg1;
- (void)destinationManagerGroupDidChange:(id)arg1;
- (BOOL)destinationManager:(id)arg1 shouldAddItemToMenu:(id)arg2;
- (void)didSelectTeam:(id)arg1;
- (void)restoreSelectionFromUserDefaults;
- (void)setAssistantContext:(id)arg1;
- (void)takeSelectedTargetFromMenuItem:(id)arg1;
- (void)updateOptionConstraints;
- (void)rebuildTargetPopupIfNeeded;
- (BOOL)_targetCanBeAssociatedTarget:(id)arg1;
- (void)updateClassPrefix;
- (void)finishWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)alwaysShowFinish;
- (BOOL)canFinish;
- (BOOL)canGoForward;
- (BOOL)canGoBack;
- (BOOL)validatePackageName:(id)arg1 error:(id *)arg2;
- (void)viewWillUninstall;
- (BOOL)itemIsProject:(id)arg1;
- (struct CGRect)_frameForControl:(id)arg1 option:(id)arg2 mainViewBounds:(struct CGRect)arg3 minLabelWidth:(double)arg4;
- (id)createControlForOption:(id)arg1 withOptionArray:(id)arg2;
- (id)additionalSortedOptions;
- (id)additionalOptions;
- (void)primitiveInvalidate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

