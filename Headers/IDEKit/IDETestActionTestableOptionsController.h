//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTUserInterfaceKit/DVTPopoverContentViewController.h>

@class IDESimulateLocationMenuController, IDETestableReference, IDEWorkspace, IDEWorkspaceTabController, NSButton, NSPopUpButton, NSView;
@protocol IDETestActionTestableOptionsControllerDelegate;

@interface IDETestActionTestableOptionsController : DVTPopoverContentViewController
{
    id <IDETestActionTestableOptionsControllerDelegate> _delegate;
    IDETestableReference *_testableReference;
    IDESimulateLocationMenuController *_simulatedLocationMenuController;
    IDEWorkspaceTabController *_workspaceTabController;
    IDEWorkspace *_workspace;
    unsigned long long _supportedOptions;
    NSPopUpButton *_simulatedLocationPopupButton;
    NSPopUpButton *_appDataPopupButton;
    NSButton *_parallelizationEnabledCheckbox;
    NSButton *_randomExecutionEnabledCheckbox;
    NSView *_simulatedLocationContainerView;
    NSView *_appDataContainerView;
    NSView *_horizontalDivider;
}

@property(retain) NSView *horizontalDivider; // @synthesize horizontalDivider=_horizontalDivider;
@property(retain) NSView *appDataContainerView; // @synthesize appDataContainerView=_appDataContainerView;
@property(retain) NSView *simulatedLocationContainerView; // @synthesize simulatedLocationContainerView=_simulatedLocationContainerView;
@property(retain) NSButton *randomExecutionEnabledCheckbox; // @synthesize randomExecutionEnabledCheckbox=_randomExecutionEnabledCheckbox;
@property(retain) NSButton *parallelizationEnabledCheckbox; // @synthesize parallelizationEnabledCheckbox=_parallelizationEnabledCheckbox;
@property(retain) NSPopUpButton *appDataPopupButton; // @synthesize appDataPopupButton=_appDataPopupButton;
@property(retain) NSPopUpButton *simulatedLocationPopupButton; // @synthesize simulatedLocationPopupButton=_simulatedLocationPopupButton;
@property unsigned long long supportedOptions; // @synthesize supportedOptions=_supportedOptions;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(retain) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
@property(retain) IDESimulateLocationMenuController *simulatedLocationMenuController; // @synthesize simulatedLocationMenuController=_simulatedLocationMenuController;
@property(retain) IDETestableReference *testableReference; // @synthesize testableReference=_testableReference;
@property __weak id <IDETestActionTestableOptionsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property BOOL automaticallyIncludeNewTests;
- (void)configureParallelizationEnabledCheckbox;
@property BOOL parallelizable;
- (void)hideRandomExecutionOrderUI;
@property BOOL randomizeExecutionOrder;
- (void)hideAppDataUI;
- (void)updateAppDataPackageSelection;
- (void)appDataPackagedSelected:(id)arg1;
- (void)initializeAppDataUI;
- (void)hideSimulatedLocationUI;
- (void)updateSimulatedLocationSelection;
- (void)initializeSimulatedLocationUI;
- (void)viewDidLoad;
- (void)notifyDelegateOfTestableReferenceModification;
- (void)primitiveInvalidate;
- (id)initWithTestableReference:(id)arg1 workspace:(id)arg2 workspaceTabController:(id)arg3 supportedOptions:(unsigned long long)arg4;

@end

