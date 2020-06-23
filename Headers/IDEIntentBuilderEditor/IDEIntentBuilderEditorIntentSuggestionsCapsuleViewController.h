//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEIntentBuilderEditor/IDEIntentBuilderEditorCapsuleViewController.h>

#import <IDEIntentBuilderEditor/IDEIntentBuilderEditorCapsuleViewControllerDelegate-Protocol.h>

@class DVTBorderedView, DVTObservingToken, IDEIntentBuilderEditorIntentParameterCombinationsCapsuleViewController, IDEIntentBuilderEditorIntentParameterCombinationsInfoViewController, NSArray, NSString;

@interface IDEIntentBuilderEditorIntentSuggestionsCapsuleViewController : IDEIntentBuilderEditorCapsuleViewController <IDEIntentBuilderEditorCapsuleViewControllerDelegate>
{
    DVTObservingToken *_observationToken;
    BOOL _contentHidden;
    IDEIntentBuilderEditorIntentParameterCombinationsCapsuleViewController *_parameterCombinationsViewController;
    IDEIntentBuilderEditorIntentParameterCombinationsInfoViewController *_parameterCombinationsInfoViewController;
    DVTBorderedView *_borderedView;
}

- (void).cxx_destruct;
@property(retain) DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(nonatomic, getter=isContentHidden) BOOL contentHidden; // @synthesize contentHidden=_contentHidden;
@property(readonly, nonatomic, getter=_isHiddenValueNegated) BOOL _hiddenValueNegated;
@property(readonly, copy, nonatomic) NSString *_hiddenKeyPath;
@property(readonly, nonatomic) IDEIntentBuilderEditorIntentParameterCombinationsInfoViewController *_parameterCombinationsInfoViewController; // @synthesize _parameterCombinationsInfoViewController;
@property(readonly, nonatomic) IDEIntentBuilderEditorIntentParameterCombinationsCapsuleViewController *_parameterCombinationsViewController; // @synthesize _parameterCombinationsViewController;
@property(readonly, nonatomic) double _separatorFrameX;
- (void)_resize;
- (void)_updateVisibilityAndResize;
- (void)editorCapsuleViewControllerDidResize:(id)arg1;
- (void)setParentEditor:(id)arg1;
- (void)unbind;
- (void)bind;
- (void)primitiveInvalidate;
- (void)viewDidLayout;
- (void)viewDidLoad;
- (void)loadView;
@property(readonly, nonatomic) NSArray *contentViews;
- (void)selectionDidChange;
- (id)title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
