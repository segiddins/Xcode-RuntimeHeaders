//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Xcode3UI/Xcode3BuildPhaseViewController.h>

@class DVTBorderedView, DVTGradientImageButton, DVTStackView_ML, DVTTableView, MISSING_TYPE, NSButton, NSScrollView, NSString, _TtC8Xcode3UI50Xcode3PegasusShellScriptBuildPhaseSourceEditorView;

__attribute__((visibility("hidden")))
@interface _TtC8Xcode3UI48Xcode3PegasusShellScriptBuildPhaseViewController : Xcode3BuildPhaseViewController
{
    MISSING_TYPE *canRemoveInputFiles;
    MISSING_TYPE *canRemoveOutputFiles;
    MISSING_TYPE *canRemoveInputFileLists;
    MISSING_TYPE *canRemoveOutputFileLists;
    MISSING_TYPE *frameChangeToken;
    MISSING_TYPE *delayedUpdateLayoutInvocation;
    MISSING_TYPE *scriptChangeDelayedInvocation;
    MISSING_TYPE *scriptSourceEditorView;
    MISSING_TYPE *scriptBorderedView;
    MISSING_TYPE *inputFileTableView;
    MISSING_TYPE *inputFileScrollView;
    MISSING_TYPE *inputFileBorderedView;
    MISSING_TYPE *addInputFileButton;
    MISSING_TYPE *removeInputFilesButton;
    MISSING_TYPE *inputFileListTableView;
    MISSING_TYPE *inputFileListScrollView;
    MISSING_TYPE *inputFileListBorderedView;
    MISSING_TYPE *addInputFileListButton;
    MISSING_TYPE *removeInputFileListsButton;
    MISSING_TYPE *outputFileTableView;
    MISSING_TYPE *outputFileScrollView;
    MISSING_TYPE *outputFileBorderedView;
    MISSING_TYPE *addOutputFileButton;
    MISSING_TYPE *removeOutputFilesButton;
    MISSING_TYPE *outputFileListTableView;
    MISSING_TYPE *outputFileListScrollView;
    MISSING_TYPE *outputFileListBorderedView;
    MISSING_TYPE *addOutputFileListButton;
    MISSING_TYPE *removeOutputFileListsButton;
    MISSING_TYPE *showEnvironmentVariablesCheckBox;
    MISSING_TYPE *runScriptOnlyWhenInstallingCheckBox;
    MISSING_TYPE *dependencyFileCheckBox;
    MISSING_TYPE *stackView;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dependencyFileChanged:(id)arg1;
- (void)toggleDependencyFile:(id)arg1;
- (void)removeFiles:(id)arg1;
- (void)addFile:(id)arg1;
- (BOOL)tableView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)viewDidLoad;
@property(nonatomic, readonly) NSString *nibName;
- (void)primitiveInvalidate;
- (id)initWithCoder:(id)arg1;
- (id)initWithBuildPhase:(id)arg1;
@property(nonatomic, retain) DVTStackView_ML *stackView; // @synthesize stackView;
@property(nonatomic, retain) NSButton *dependencyFileCheckBox; // @synthesize dependencyFileCheckBox;
@property(nonatomic, retain) NSButton *runScriptOnlyWhenInstallingCheckBox; // @synthesize runScriptOnlyWhenInstallingCheckBox;
@property(nonatomic, retain) NSButton *showEnvironmentVariablesCheckBox; // @synthesize showEnvironmentVariablesCheckBox;
@property(nonatomic, retain) DVTGradientImageButton *removeOutputFileListsButton; // @synthesize removeOutputFileListsButton;
@property(nonatomic, retain) DVTGradientImageButton *addOutputFileListButton; // @synthesize addOutputFileListButton;
@property(nonatomic, retain) DVTBorderedView *outputFileListBorderedView; // @synthesize outputFileListBorderedView;
@property(nonatomic, retain) NSScrollView *outputFileListScrollView; // @synthesize outputFileListScrollView;
@property(nonatomic, retain) DVTTableView *outputFileListTableView; // @synthesize outputFileListTableView;
@property(nonatomic, retain) DVTGradientImageButton *removeOutputFilesButton; // @synthesize removeOutputFilesButton;
@property(nonatomic, retain) DVTGradientImageButton *addOutputFileButton; // @synthesize addOutputFileButton;
@property(nonatomic, retain) DVTBorderedView *outputFileBorderedView; // @synthesize outputFileBorderedView;
@property(nonatomic, retain) NSScrollView *outputFileScrollView; // @synthesize outputFileScrollView;
@property(nonatomic, retain) DVTTableView *outputFileTableView; // @synthesize outputFileTableView;
@property(nonatomic, retain) DVTGradientImageButton *removeInputFileListsButton; // @synthesize removeInputFileListsButton;
@property(nonatomic, retain) DVTGradientImageButton *addInputFileListButton; // @synthesize addInputFileListButton;
@property(nonatomic, retain) DVTBorderedView *inputFileListBorderedView; // @synthesize inputFileListBorderedView;
@property(nonatomic, retain) NSScrollView *inputFileListScrollView; // @synthesize inputFileListScrollView;
@property(nonatomic, retain) DVTTableView *inputFileListTableView; // @synthesize inputFileListTableView;
@property(nonatomic, retain) DVTGradientImageButton *removeInputFilesButton; // @synthesize removeInputFilesButton;
@property(nonatomic, retain) DVTGradientImageButton *addInputFileButton; // @synthesize addInputFileButton;
@property(nonatomic, retain) DVTBorderedView *inputFileBorderedView; // @synthesize inputFileBorderedView;
@property(nonatomic, retain) NSScrollView *inputFileScrollView; // @synthesize inputFileScrollView;
@property(nonatomic, retain) DVTTableView *inputFileTableView; // @synthesize inputFileTableView;
@property(nonatomic, retain) DVTBorderedView *scriptBorderedView; // @synthesize scriptBorderedView;
@property(nonatomic, retain) _TtC8Xcode3UI50Xcode3PegasusShellScriptBuildPhaseSourceEditorView *scriptSourceEditorView; // @synthesize scriptSourceEditorView;
@property(nonatomic) BOOL canRemoveOutputFileLists; // @synthesize canRemoveOutputFileLists;
@property(nonatomic) BOOL canRemoveInputFileLists; // @synthesize canRemoveInputFileLists;
@property(nonatomic) BOOL canRemoveOutputFiles; // @synthesize canRemoveOutputFiles;
@property(nonatomic) BOOL canRemoveInputFiles; // @synthesize canRemoveInputFiles;

@end

