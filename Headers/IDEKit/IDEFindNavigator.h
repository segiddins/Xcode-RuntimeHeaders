//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDENavigator.h>

#import <IDEKit/IDEFindNavigatorLayoutViewDelegate-Protocol.h>
#import <IDEKit/IDEFindNavigatorQueryParametersControllerDelegate-Protocol.h>
#import <IDEKit/IDEFindNavigatorQueryResultsControllerDelegate-Protocol.h>

@class DVTBorderView, DVTDelayedInvocation, DVTScrollView, IDEFindNavigatorOutlineView, IDEFindNavigatorQueryParametersController, NSString, NSTextField, NSView;

@interface IDEFindNavigator : IDENavigator <IDEFindNavigatorQueryResultsControllerDelegate, IDEFindNavigatorQueryParametersControllerDelegate, IDEFindNavigatorLayoutViewDelegate>
{
    NSView *_summaryRow;
    NSTextField *_summaryTextField;
    IDEFindNavigatorOutlineView *_resultOutlineView;
    DVTScrollView *_resultOutlineScrollView;
    DVTBorderView *_findResultsDividerView;
    DVTDelayedInvocation *_interfaceValidator;
    BOOL _didFirstLayoutAfterInstall;
    BOOL _enableFilter;
    IDEFindNavigatorQueryParametersController *_queryParametersController;
    NSString *_filterPattern;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL enableFilter; // @synthesize enableFilter=_enableFilter;
@property(copy, nonatomic) NSString *filterPattern; // @synthesize filterPattern=_filterPattern;
@property(readonly) IDEFindNavigatorQueryParametersController *queryParametersController; // @synthesize queryParametersController=_queryParametersController;
- (BOOL)delegateFirstResponder;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)contextMenu_revealInProjectNavigator:(id)arg1;
- (void)revealInProjectNavigator:(id)arg1;
- (void)queryResultsController:(id)arg1 searchAgainWithSpecification:(id)arg2;
- (id)queryResultsController:(id)arg1 contextMenuForResultsFromQuery:(id)arg2;
- (void)queryResultsControllerExportedUserInterfaceStateDidChange:(id)arg1;
- (void)queryParametersController:(id)arg1 replaceAllResultsWithText:(id)arg2;
- (void)queryParametersController:(id)arg1 replaceSelectedResultsWithText:(id)arg2;
- (void)queryParametersController:(id)arg1 initiateQueryFromSpecification:(id)arg2;
- (void)queryParametersControllerCancelQuery:(id)arg1;
- (void)cancelQuery;
- (void)queryResultsController:(id)arg1 openResult:(id)arg2 eventType:(unsigned long long)arg3;
- (id)contextMenuSelection;
- (void)queryResultsController:(id)arg1 selectResults:(id)arg2;
- (id)selectionForResults:(id)arg1;
- (void)queryParametersControllerDidChangeExportedUserInterfaceState:(id)arg1;
- (void)setStateToken:(id)arg1;
- (void)viewDidLoad;
- (void)refreshUserInterface:(id)arg1;
- (id)navigatorScrollView;
- (id)filterDefinitionIdentifier;
- (id)domainIdentifier;
- (id)view;
- (id)resultsController;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)findNavigatorLayoutViewDidLayout:(id)arg1;
- (BOOL)focusResultOutlineView;
- (BOOL)focusFindField;
- (void)prepareToFocusUI;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)primitiveInvalidate;
- (BOOL)automaticallyInvalidatesChildViewControllers;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

