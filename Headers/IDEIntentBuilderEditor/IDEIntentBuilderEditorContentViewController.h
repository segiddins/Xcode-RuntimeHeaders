//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEIntentBuilderEditor/IDEIntentBuilderEditorViewController.h>

#import <IDEIntentBuilderEditor/IDECapsuleListViewDataSource-Protocol.h>

@class IDECapsuleListView, IDEIntentBuilderEditorEnumCapsuleViewController, IDEIntentBuilderEditorEnumValuesCapsuleViewController, IDEIntentBuilderEditorEnumValuesDetailsCapsuleViewController, IDEIntentBuilderEditorIntentCapsuleViewController, IDEIntentBuilderEditorIntentParameterCombinationsCapsuleViewController, IDEIntentBuilderEditorIntentParametersCapsuleViewController, IDEIntentBuilderEditorIntentResponseCapsuleViewController, IDEIntentBuilderEditorIntentResponseCodesCapsuleViewController, IDEIntentBuilderEditorIntentResponseOutputCapsuleViewController, IDEIntentBuilderEditorIntentResponsePropertiesCapsuleViewController, IDEIntentBuilderEditorIntentShortcutsAppCapsuleViewController, IDEIntentBuilderEditorIntentSuggestionsCapsuleViewController, IDEIntentBuilderEditorPropertiesCapsuleViewController, IDEIntentBuilderEditorPropertiesDetailsCapsuleViewController, IDEIntentBuilderEditorTypeCapsuleViewController, IDEIntentBuilderGroupItem, NSArray, NSScrollView, NSString;

@interface IDEIntentBuilderEditorContentViewController : IDEIntentBuilderEditorViewController <IDECapsuleListViewDataSource>
{
    NSArray *_capsuleViewControllers;
    IDEIntentBuilderGroupItem *_previouslySelectedGroupItem;
    IDEIntentBuilderEditorIntentCapsuleViewController *_intentCapsuleViewController;
    IDEIntentBuilderEditorIntentParametersCapsuleViewController *_parametersCapsuleViewController;
    IDEIntentBuilderEditorPropertiesCapsuleViewController *_propertiesCapsuleViewController;
    IDEIntentBuilderEditorPropertiesDetailsCapsuleViewController *_propertiesDetailsCapsuleViewController;
    IDEIntentBuilderEditorEnumValuesCapsuleViewController *_enumValuesCapsuleViewController;
    IDEIntentBuilderEditorIntentParameterCombinationsCapsuleViewController *_parameterCombinationsCapsuleViewController;
    IDEIntentBuilderEditorIntentResponseCapsuleViewController *_intentResponseCapsuleViewController;
    IDEIntentBuilderEditorTypeCapsuleViewController *_typeCapsuleViewController;
    IDEIntentBuilderEditorEnumCapsuleViewController *_enumCapsuleViewController;
    IDEIntentBuilderEditorIntentResponseOutputCapsuleViewController *_responseOutputCapsuleViewController;
    IDEIntentBuilderEditorIntentResponsePropertiesCapsuleViewController *_responsePropertiesCapsuleViewController;
    IDEIntentBuilderEditorEnumValuesDetailsCapsuleViewController *_enumValuesDetailsCapsuleViewController;
    IDEIntentBuilderEditorIntentSuggestionsCapsuleViewController *_intentSuggestionsCapsuleViewController;
    IDEIntentBuilderEditorIntentShortcutsAppCapsuleViewController *_intentShortcutsAppCapsuleViewController;
    IDEIntentBuilderEditorIntentResponseCodesCapsuleViewController *_intentResponseCodesCapsuleViewController;
    NSScrollView *_capsuleListScrollView;
    IDECapsuleListView *_capsuleListView;
}

- (void).cxx_destruct;
@property __weak IDECapsuleListView *capsuleListView; // @synthesize capsuleListView=_capsuleListView;
@property __weak NSScrollView *capsuleListScrollView; // @synthesize capsuleListScrollView=_capsuleListScrollView;
@property(retain, nonatomic, setter=_setIntentResponseCodesCapsuleViewController:) IDEIntentBuilderEditorIntentResponseCodesCapsuleViewController *_intentResponseCodesCapsuleViewController; // @synthesize _intentResponseCodesCapsuleViewController;
@property(retain, nonatomic, setter=_setIntentShortcutsAppCapsuleViewController:) IDEIntentBuilderEditorIntentShortcutsAppCapsuleViewController *_intentShortcutsAppCapsuleViewController; // @synthesize _intentShortcutsAppCapsuleViewController;
@property(retain, nonatomic, setter=_setIntentSuggestionsCapsuleViewController:) IDEIntentBuilderEditorIntentSuggestionsCapsuleViewController *_intentSuggestionsCapsuleViewController; // @synthesize _intentSuggestionsCapsuleViewController;
@property(retain, nonatomic, setter=_setEnumValuesDetailsCapsuleViewController:) IDEIntentBuilderEditorEnumValuesDetailsCapsuleViewController *_enumValuesDetailsCapsuleViewController; // @synthesize _enumValuesDetailsCapsuleViewController;
@property(retain, nonatomic, setter=_setResponsePropertiesCapsuleViewController:) IDEIntentBuilderEditorIntentResponsePropertiesCapsuleViewController *_responsePropertiesCapsuleViewController; // @synthesize _responsePropertiesCapsuleViewController;
@property(retain, nonatomic, setter=_setResponseOutputCapsuleViewController:) IDEIntentBuilderEditorIntentResponseOutputCapsuleViewController *_responseOutputCapsuleViewController; // @synthesize _responseOutputCapsuleViewController;
@property(retain, nonatomic, setter=_setEnumCapsuleViewController:) IDEIntentBuilderEditorEnumCapsuleViewController *_enumCapsuleViewController; // @synthesize _enumCapsuleViewController;
@property(retain, nonatomic, setter=_setTypeCapsuleViewController:) IDEIntentBuilderEditorTypeCapsuleViewController *_typeCapsuleViewController; // @synthesize _typeCapsuleViewController;
@property(retain, nonatomic, setter=_setIntentResponseCapsuleViewController:) IDEIntentBuilderEditorIntentResponseCapsuleViewController *_intentResponseCapsuleViewController; // @synthesize _intentResponseCapsuleViewController;
@property(retain, nonatomic, setter=_setParameterCombinationsCapsuleViewController:) IDEIntentBuilderEditorIntentParameterCombinationsCapsuleViewController *_parameterCombinationsCapsuleViewController; // @synthesize _parameterCombinationsCapsuleViewController;
@property(retain, nonatomic, setter=_setEnumValuesCapsuleViewController:) IDEIntentBuilderEditorEnumValuesCapsuleViewController *_enumValuesCapsuleViewController; // @synthesize _enumValuesCapsuleViewController;
@property(retain, nonatomic, setter=_setPropertiesDetailsCapsuleViewController:) IDEIntentBuilderEditorPropertiesDetailsCapsuleViewController *_propertiesDetailsCapsuleViewController; // @synthesize _propertiesDetailsCapsuleViewController;
@property(retain, nonatomic, setter=_setPropertiesCapsuleViewController:) IDEIntentBuilderEditorPropertiesCapsuleViewController *_propertiesCapsuleViewController; // @synthesize _propertiesCapsuleViewController;
@property(retain, nonatomic, setter=_setParametersCapsuleViewController:) IDEIntentBuilderEditorIntentParametersCapsuleViewController *_parametersCapsuleViewController; // @synthesize _parametersCapsuleViewController;
@property(retain, nonatomic, setter=_setIntentCapsuleViewController:) IDEIntentBuilderEditorIntentCapsuleViewController *_intentCapsuleViewController; // @synthesize _intentCapsuleViewController;
- (BOOL)_needsToReloadData;
- (id)_capsuleViewControllersForGroup:(id)arg1;
- (id)_capsuleViewControllers;
- (void)selectionDidChange;
- (void)selectionWillChange;
- (void)modelDidChange;
- (void)modelWillChange;
- (void)primitiveInvalidate;
- (id)capsuleListView:(id)arg1 viewControllerForRow:(long long)arg2;
- (long long)numberOfObjectsInCapsuleListView:(id)arg1;
- (void)addParameter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

