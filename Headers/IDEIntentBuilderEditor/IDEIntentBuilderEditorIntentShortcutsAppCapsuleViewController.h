//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEIntentBuilderEditor/IDEIntentBuilderEditorIntentSuggestionsCapsuleViewController.h>

#import <IDEIntentBuilderEditor/IDEIntentBuilderEditorCapsuleViewControllerDelegate-Protocol.h>

@class DVTBorderedView, IDEIntentBuilderEditorIntentInputCapsuleViewController, IDEIntentBuilderEditorIntentManagedParameterCombinationsCapsuleViewController, IDEIntentBuilderEditorIntentManagedParameterCombinationsInfoViewController, NSString;

@interface IDEIntentBuilderEditorIntentShortcutsAppCapsuleViewController : IDEIntentBuilderEditorIntentSuggestionsCapsuleViewController <IDEIntentBuilderEditorCapsuleViewControllerDelegate>
{
    IDEIntentBuilderEditorIntentManagedParameterCombinationsCapsuleViewController *_managedParameterCombinationsViewController;
    IDEIntentBuilderEditorIntentManagedParameterCombinationsInfoViewController *_managedParameterCombinationsInfoViewController;
    IDEIntentBuilderEditorIntentInputCapsuleViewController *_intentInputViewController;
    DVTBorderedView *_separatorView;
}

+ (id)defaultViewNibName;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
@property(readonly, nonatomic) DVTBorderedView *separatorView; // @synthesize separatorView=_separatorView;
- (id)_intentInputViewController;
@property(readonly, nonatomic) IDEIntentBuilderEditorIntentManagedParameterCombinationsInfoViewController *_parameterCombinationsInfoViewController;
@property(readonly, nonatomic) IDEIntentBuilderEditorIntentManagedParameterCombinationsCapsuleViewController *_parameterCombinationsViewController;
- (void)setParentEditor:(id)arg1;
- (void)unbind;
- (void)bind;
- (void)viewDidLayout;
- (void)loadView;
- (id)contentViews;
- (id)title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

