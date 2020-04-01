//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

@class DVTObservingToken, IDEProvisioningTeamManager, NSOrderedSet, NSPopUpButton, NSProgressIndicator, NSView;
@protocol IDETemplateTeamPickerViewControllerDelegate;

@interface IDETemplateTeamPickerViewController : DVTViewController
{
    DVTObservingToken *_teamsToken;
    DVTObservingToken *_busyToken;
    id <IDETemplateTeamPickerViewControllerDelegate> _delegate;
    IDEProvisioningTeamManager *_teamManager;
    NSView *_accountView;
    NSView *_loadingView;
    NSView *_teamsPopupView;
    NSProgressIndicator *_spinner;
    NSPopUpButton *_teamsPopup;
    long long _state;
    NSOrderedSet *_teams;
}

@property(copy, nonatomic) NSOrderedSet *teams; // @synthesize teams=_teams;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSPopUpButton *teamsPopup; // @synthesize teamsPopup=_teamsPopup;
@property(retain, nonatomic) NSProgressIndicator *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) NSView *teamsPopupView; // @synthesize teamsPopupView=_teamsPopupView;
@property(retain, nonatomic) NSView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSView *accountView; // @synthesize accountView=_accountView;
@property(retain, nonatomic) IDEProvisioningTeamManager *teamManager; // @synthesize teamManager=_teamManager;
@property(retain, nonatomic) id <IDETemplateTeamPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_rebuildTeamsMenu;
- (void)_configureViewsForState:(long long)arg1;
- (void)_updateState;
- (void)_observeTeamManager:(id)arg1;
- (void)_markAsLastUsedTeam:(id)arg1;
- (void)_selectLastUsedTeam;
- (void)teamSelectionDidChange:(id)arg1;
- (void)addAccount:(id)arg1;
- (void)viewDidLoad;
- (void)primitiveInvalidate;

@end

