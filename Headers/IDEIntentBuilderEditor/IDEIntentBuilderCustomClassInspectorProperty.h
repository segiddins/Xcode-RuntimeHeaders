//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class DVTNotificationToken, DVTObservingToken, IDEInspectorKeyPath, IDEIntentBuilderClassTextField, NSArray, NSTextField;

@interface IDEIntentBuilderCustomClassInspectorProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    DVTNotificationToken *_sourceGenerationNotificationObserver;
    DVTObservingToken *_generatedClassNameObservingToken;
    NSTextField *_titleTextField;
    IDEIntentBuilderClassTextField *_textField;
    NSArray *_generatedFilePaths;
}

@property(retain, nonatomic) NSArray *generatedFilePaths; // @synthesize generatedFilePaths=_generatedFilePaths;
@property __weak IDEIntentBuilderClassTextField *textField; // @synthesize textField=_textField;
@property __weak NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
- (void).cxx_destruct;
- (void)_unbind;
- (id)findIndicatorContentViewWithContext:(id)arg1;
- (double)baseline;
- (id)nibName;
- (void)primitiveInvalidate;
- (void)_checkClassLinkEnabled;
- (void)_updateGeneratedClassWithInfo:(id)arg1;
- (void)_updateGeneratedClassWithBuildSettings;
- (void)classButtonClicked:(id)arg1;
- (id)inspectedDocument;
- (id)inspectedObject;
- (void)userDidChangeClassName:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;

@end

