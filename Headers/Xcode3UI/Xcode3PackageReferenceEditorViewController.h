//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class IDESourcePackageRequirement, NSArray, NSButton, NSError, NSString, NSView, Xcode3PackageReferenceEditorSemVerUtililty;

@interface Xcode3PackageReferenceEditorViewController : IDEViewController
{
    NSArray *_versionTags;
    BOOL _editingIsEnabled;
    BOOL _presentedInAssistant;
    NSString *_doneButtonTitle;
    NSString *_repositoryURL;
    double _cancelDoneButtonContainerHeight;
    CDUnknownBlockType _completionBlock;
    long long _requirementKind;
    long long _versionRequirementSubkind;
    NSString *_minimumVersion;
    NSString *_maximumVersion;
    NSString *_branchName;
    NSString *_revision;
    NSButton *_versionRadioButton;
    NSButton *_branchRadioButton;
    NSButton *_revisionRadioButton;
    NSView *_cancelAndDoneContainer;
    NSButton *_cancelButton;
    NSButton *_doneButton;
    Xcode3PackageReferenceEditorSemVerUtililty *_semVerUtility;
}

+ (id)keyPathsForValuesAffectingRevisionSelected;
+ (id)keyPathsForValuesAffectingBranchSelected;
+ (id)keyPathsForValuesAffectingVersionSelected;
+ (id)keyPathsForValuesAffectingCanFinish;
+ (id)keyPathsForValuesAffectingRequirement;
+ (id)keyPathsForValuesAffectingHasValidRequirement;
+ (id)keyPathsForValuesAffectingVersionRequirementDescription;
+ (id)keyPathsForValuesAffectingMaximumVersion;
+ (id)keyPathsForValuesAffectingShouldEnableMaximumVersionTextField;
+ (id)keyPathsForValuesAffectingCurrentVersionRequirementSubkindRequiresSingleVersion;
- (void).cxx_destruct;
@property(readonly, nonatomic) Xcode3PackageReferenceEditorSemVerUtililty *semVerUtility; // @synthesize semVerUtility=_semVerUtility;
@property(retain) NSButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property __weak NSView *cancelAndDoneContainer; // @synthesize cancelAndDoneContainer=_cancelAndDoneContainer;
@property(retain) NSButton *revisionRadioButton; // @synthesize revisionRadioButton=_revisionRadioButton;
@property(retain) NSButton *branchRadioButton; // @synthesize branchRadioButton=_branchRadioButton;
@property(retain) NSButton *versionRadioButton; // @synthesize versionRadioButton=_versionRadioButton;
@property(retain) NSString *revision; // @synthesize revision=_revision;
@property(retain) NSString *branchName; // @synthesize branchName=_branchName;
@property(retain, nonatomic) NSString *maximumVersion; // @synthesize maximumVersion=_maximumVersion;
@property(retain, nonatomic) NSString *minimumVersion; // @synthesize minimumVersion=_minimumVersion;
@property long long versionRequirementSubkind; // @synthesize versionRequirementSubkind=_versionRequirementSubkind;
@property long long requirementKind; // @synthesize requirementKind=_requirementKind;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property double cancelDoneButtonContainerHeight; // @synthesize cancelDoneButtonContainerHeight=_cancelDoneButtonContainerHeight;
@property BOOL presentedInAssistant; // @synthesize presentedInAssistant=_presentedInAssistant;
@property(copy) NSString *repositoryURL; // @synthesize repositoryURL=_repositoryURL;
@property(copy) NSString *doneButtonTitle; // @synthesize doneButtonTitle=_doneButtonTitle;
@property BOOL editingIsEnabled; // @synthesize editingIsEnabled=_editingIsEnabled;
- (void)primitiveInvalidate;
- (void)cancelButtonClicked:(id)arg1;
- (void)doneButtonClicked:(id)arg1;
@property(readonly, getter=isRevisionSelected) BOOL revisionSelected;
@property(readonly, getter=isBranchSelected) BOOL branchSelected;
@property(readonly, getter=isVersionSelected) BOOL versionSelected;
- (void)rulesRadioButtonSelected:(id)arg1;
@property(readonly) BOOL canFinish;
@property(readonly, copy) IDESourcePackageRequirement *requirement;
@property(readonly) BOOL hasValidRequirement;
@property(readonly) NSError *requirementsError;
@property(readonly) NSString *versionRequirementDescription;
- (BOOL)shouldEnableMaximumVersionTextField;
@property(readonly) BOOL currentVersionRequirementSubkindRequiresSingleVersion;
- (void)viewDidLoad;
- (void)updateVersionsFromTags;
- (id)initWithCoder:(id)arg1;
@property(copy) NSArray *versionTags;
- (id)initWithRepositoryURL:(id)arg1 versionTags:(id)arg2 requirement:(id)arg3;
- (id)initWithRepositoryURL:(id)arg1 requirement:(id)arg2;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
