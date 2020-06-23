//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class IDECapsuleListView, MISSING_TYPE, NSImageView, NSMutableArray, NSOutlineView, NSTableColumn, NSTextField, NSTextFieldCell, NSTreeController, _TtC19IDEMLModelEditorKit31IDEMLModelCapsuleViewController, _TtC19IDEMLModelEditorKit39IDEMLModelExperimentationViewController;

__attribute__((visibility("hidden")))
@interface _TtC19IDEMLModelEditorKit30IDEMLModelEditorViewController : IDEViewController
{
    MISSING_TYPE *errorDocumentMode;
    MISSING_TYPE *isUpdatableModel;
    MISSING_TYPE *hasParameters;
    MISSING_TYPE *hasDependencies;
    MISSING_TYPE *isExperimentationSupported;
    MISSING_TYPE *modelNameLabel;
    MISSING_TYPE *modelTypeDisplay;
    MISSING_TYPE *modelSizeDisplay;
    MISSING_TYPE *DependencyListView;
    MISSING_TYPE *authorDisplay;
    MISSING_TYPE *licenseDisplay;
    MISSING_TYPE *predictionFeatures;
    MISSING_TYPE *predictionListView;
    MISSING_TYPE *predictionFeatureTree;
    MISSING_TYPE *predictionFeatureFlexibilityColumn;
    MISSING_TYPE *updateFeatures;
    MISSING_TYPE *updateListView;
    MISSING_TYPE *updateFeatureTree;
    MISSING_TYPE *updateFeatureFlexibilityColumn;
    MISSING_TYPE *parameters;
    MISSING_TYPE *parametersListView;
    MISSING_TYPE *parametersTree;
    MISSING_TYPE *dependencies;
    MISSING_TYPE *dependencyTree;
    MISSING_TYPE *modelDescriptionView;
    MISSING_TYPE *modelClassFileLabel;
    MISSING_TYPE *modelClassFileMessage;
    MISSING_TYPE *modelClassFileError;
    MISSING_TYPE *modelClassIcon;
    MISSING_TYPE *issueTitleField;
    MISSING_TYPE *issueField;
    MISSING_TYPE *descriptionText;
    MISSING_TYPE *capsuleListView;
    MISSING_TYPE *capsulesListViewController;
    MISSING_TYPE *identityCapsuleViewController;
    MISSING_TYPE *predictionFeaturesCapsuleViewController;
    MISSING_TYPE *updateFeaturesCapsuleViewController;
    MISSING_TYPE *parametersCapsuleViewController;
    MISSING_TYPE *DependenciesCapsuleViewController;
    MISSING_TYPE *generatedInterfaceCapsuleViewController;
    MISSING_TYPE *issueCapsuleViewController;
    MISSING_TYPE *experimentationCapsuleViewController;
    MISSING_TYPE *issueImage;
    MISSING_TYPE *fileLinkClicked;
    MISSING_TYPE *fileLinkEnabled;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)clickedClass:(id)arg1;
@property(nonatomic) BOOL fileLinkEnabled; // @synthesize fileLinkEnabled;
@property(nonatomic) __weak NSImageView *issueImage; // @synthesize issueImage;
@property(nonatomic, retain) _TtC19IDEMLModelEditorKit39IDEMLModelExperimentationViewController *experimentationCapsuleViewController; // @synthesize experimentationCapsuleViewController;
@property(nonatomic, retain) _TtC19IDEMLModelEditorKit31IDEMLModelCapsuleViewController *issueCapsuleViewController; // @synthesize issueCapsuleViewController;
@property(nonatomic, retain) _TtC19IDEMLModelEditorKit31IDEMLModelCapsuleViewController *generatedInterfaceCapsuleViewController; // @synthesize generatedInterfaceCapsuleViewController;
@property(nonatomic, retain) _TtC19IDEMLModelEditorKit31IDEMLModelCapsuleViewController *DependenciesCapsuleViewController; // @synthesize DependenciesCapsuleViewController;
@property(nonatomic, retain) _TtC19IDEMLModelEditorKit31IDEMLModelCapsuleViewController *parametersCapsuleViewController; // @synthesize parametersCapsuleViewController;
@property(nonatomic, retain) _TtC19IDEMLModelEditorKit31IDEMLModelCapsuleViewController *updateFeaturesCapsuleViewController; // @synthesize updateFeaturesCapsuleViewController;
@property(nonatomic, retain) _TtC19IDEMLModelEditorKit31IDEMLModelCapsuleViewController *predictionFeaturesCapsuleViewController; // @synthesize predictionFeaturesCapsuleViewController;
@property(nonatomic, retain) _TtC19IDEMLModelEditorKit31IDEMLModelCapsuleViewController *identityCapsuleViewController; // @synthesize identityCapsuleViewController;
@property(nonatomic, retain) IDEViewController *capsulesListViewController; // @synthesize capsulesListViewController;
@property(nonatomic) __weak IDECapsuleListView *capsuleListView; // @synthesize capsuleListView;
@property(nonatomic) __weak NSTextFieldCell *descriptionText; // @synthesize descriptionText;
@property(nonatomic) __weak NSTextField *issueField; // @synthesize issueField;
@property(nonatomic) __weak NSTextField *issueTitleField; // @synthesize issueTitleField;
@property(nonatomic) __weak NSImageView *modelClassIcon; // @synthesize modelClassIcon;
@property(nonatomic) __weak NSTextField *modelClassFileError; // @synthesize modelClassFileError;
@property(nonatomic) __weak NSTextField *modelClassFileMessage; // @synthesize modelClassFileMessage;
@property(nonatomic) __weak NSTextField *modelClassFileLabel; // @synthesize modelClassFileLabel;
@property(nonatomic, retain) NSTextField *modelDescriptionView; // @synthesize modelDescriptionView;
@property(nonatomic, retain) NSTreeController *dependencyTree; // @synthesize dependencyTree;
@property(nonatomic, retain) NSMutableArray *dependencies; // @synthesize dependencies;
@property(nonatomic) __weak NSTreeController *parametersTree; // @synthesize parametersTree;
@property(nonatomic) __weak NSOutlineView *parametersListView; // @synthesize parametersListView;
@property(nonatomic, retain) NSMutableArray *parameters; // @synthesize parameters;
@property(nonatomic) __weak NSTableColumn *updateFeatureFlexibilityColumn; // @synthesize updateFeatureFlexibilityColumn;
@property(nonatomic) __weak NSTreeController *updateFeatureTree; // @synthesize updateFeatureTree;
@property(nonatomic) __weak NSOutlineView *updateListView; // @synthesize updateListView;
@property(nonatomic, retain) NSMutableArray *updateFeatures; // @synthesize updateFeatures;
@property(nonatomic) __weak NSTableColumn *predictionFeatureFlexibilityColumn; // @synthesize predictionFeatureFlexibilityColumn;
@property(nonatomic) __weak NSTreeController *predictionFeatureTree; // @synthesize predictionFeatureTree;
@property(nonatomic) __weak NSOutlineView *predictionListView; // @synthesize predictionListView;
@property(nonatomic, retain) NSMutableArray *predictionFeatures; // @synthesize predictionFeatures;
@property(nonatomic) __weak NSTextField *licenseDisplay; // @synthesize licenseDisplay;
@property(nonatomic) __weak NSTextField *authorDisplay; // @synthesize authorDisplay;
@property(nonatomic) __weak NSOutlineView *DependencyListView; // @synthesize DependencyListView;
@property(nonatomic) __weak NSTextField *modelSizeDisplay; // @synthesize modelSizeDisplay;
@property(nonatomic) __weak NSTextField *modelTypeDisplay; // @synthesize modelTypeDisplay;
@property(nonatomic) __weak NSTextField *modelNameLabel; // @synthesize modelNameLabel;

@end
