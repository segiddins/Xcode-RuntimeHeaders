//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <Xcode3UI/IDECapsuleListViewDataSource-Protocol.h>

@class DVTBorderedView, DVTTabChooserView, DVTTableView, IDECapsuleListView, NSArray, NSDictionary, NSString, NSView, Xcode3TargetEditorCapsuleViewController, _TtC13IDEFoundation28TargetEditorBundleIdentifier;
@protocol IDECapsuleViewController;

@interface Xcode3AutomatorTargetEditor : IDEViewController <IDECapsuleListViewDataSource>
{
    id _targetViewController;
    DVTTabChooserView *_tabChooserView;
    NSView *_tabContentView;
    NSView *_inputView;
    NSView *_outputView;
    NSView *_parametersView;
    NSView *_requiredResourcesView;
    NSView *_warningView;
    NSView *_keywordsView;
    DVTTableView *_inputTypesTable;
    DVTBorderedView *_inputTypesGlassBar;
    DVTTableView *_outputTypesTable;
    DVTBorderedView *_outputTypesGlassBar;
    DVTTableView *_parametersTable;
    DVTBorderedView *_parametersGlassBar;
    DVTTableView *_requiredResourcesTable;
    DVTBorderedView *_resourcesGlassBar;
    DVTTableView *_keywordsTable;
    DVTBorderedView *_keywordsGlassBar;
    Xcode3TargetEditorCapsuleViewController *_identityTargetEditorCapsuleViewController;
    Xcode3TargetEditorCapsuleViewController *_automatorTargetEditorCapsuleViewController;
    IDEViewController<IDECapsuleViewController> *_developmentAssetsViewController;
    IDECapsuleListView *_capsuleListView;
    _TtC13IDEFoundation28TargetEditorBundleIdentifier *_targetEditorBundleIdentifier;
}

+ (id)keyPathsForValuesAffectingTargetBuildVersion;
+ (id)keyPathsForValuesAffectingTargetVersion;
+ (id)keyPathsForValuesAffectingTargetIdentifier;
+ (id)defaultViewNibBundle;
+ (id)defaultViewNibName;
@property(retain, nonatomic) _TtC13IDEFoundation28TargetEditorBundleIdentifier *targetEditorBundleIdentifier; // @synthesize targetEditorBundleIdentifier=_targetEditorBundleIdentifier;
@property(retain) IDECapsuleListView *capsuleListView; // @synthesize capsuleListView=_capsuleListView;
@property(retain) IDEViewController<IDECapsuleViewController> *developmentAssetsViewController; // @synthesize developmentAssetsViewController=_developmentAssetsViewController;
@property(retain) Xcode3TargetEditorCapsuleViewController *automatorTargetEditorCapsuleViewController; // @synthesize automatorTargetEditorCapsuleViewController=_automatorTargetEditorCapsuleViewController;
@property(retain) Xcode3TargetEditorCapsuleViewController *identityTargetEditorCapsuleViewController; // @synthesize identityTargetEditorCapsuleViewController=_identityTargetEditorCapsuleViewController;
@property(retain, nonatomic) id targetViewController; // @synthesize targetViewController=_targetViewController;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)capsuleListView:(id)arg1 viewControllerForRow:(long long)arg2;
- (long long)numberOfObjectsInCapsuleListView:(id)arg1;
- (id)subviewControllers;
- (void)setValue:(id)arg1 forPlistSetting:(id)arg2 withAssociatedBuildSetting:(id)arg3;
- (id)valueForPlistSetting:(id)arg1 withAssociatedBuildSetting:(id)arg2;
@property(copy) NSString *targetBuildVersion;
@property(copy) NSString *targetVersion;
@property(copy) NSString *targetIdentifier;
@property(readonly) NSDictionary *actionCategories;
- (BOOL)canRemoveKeyword;
- (void)removeKeyword:(id)arg1;
- (void)addKeyword:(id)arg1;
- (void)removeRequiredResource:(id)arg1;
- (BOOL)canRemoveRequiredResource;
- (void)addRequiredResource:(id)arg1;
- (void)removeDefaultParameter:(id)arg1;
- (BOOL)canRemoveDefaultParameter;
- (void)addDefaultParameter:(id)arg1;
- (void)removeOutputType:(id)arg1;
- (BOOL)canRemoveOutputType;
- (void)addOutputType:(id)arg1;
- (void)removeInputType:(id)arg1;
- (BOOL)canRemoveInputType;
- (void)addInputType:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
@property(copy) NSArray *actionKeywords;
@property long long actionWarningLevel;
@property(copy) NSString *actionWarningMessage;
@property(copy) NSString *actionWarningIgnore;
@property(copy) NSString *actionWarningApply;
@property(copy) NSString *actionWarningAction;
@property(copy) NSArray *actionRequiredResources;
@property(copy) NSDictionary *actionDefaultParameters;
@property(copy) NSArray *actionOutputTypes;
@property(copy) NSArray *actionInputTypes;
@property BOOL actionInputOptional;
@property(copy) NSString *actionDescriptionRelatedActions;
@property(copy) NSString *actionDescriptionRequires;
@property(copy) NSString *actionDescriptionOptions;
@property(copy) NSString *actionDescriptionOutput;
@property(copy) NSString *actionDescriptionInput;
@property(copy) NSString *actionDescriptionAlert;
@property(copy) NSString *actionDescriptionNote;
@property(copy) NSString *actionDescriptionSummary;
@property(copy) NSString *actionIconName;
@property(copy) NSString *actionPrimaryApplication;
@property(copy) NSString *actionCategory;
- (id)_categoryKeyForValue:(id)arg1;
@property(copy) NSString *actionName;
@property(copy) NSArray *selectedTabChoices;
- (void)_setupTable:(id)arg1 associatedGlassBar:(id)arg2;
- (void)loadView;
- (void)updateTargetEditorBundleIdentifierWithSource:(id)arg1;
- (id)headerFont;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

