//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDESceneKitEditor/IDECapsuleListViewDataSource-Protocol.h>

@class DVTGradientImagePopUpButton, DVTObservingToken, DVTScopeBarView, IDECapsuleListView, NSArray, NSString;

@interface SKEShadableEditorMainViewController : IDEViewController <IDECapsuleListViewDataSource>
{
    NSArray *_content;
    DVTObservingToken *_shadableContentsObservingToken;
    DVTGradientImagePopUpButton *_actionPopUpButton;
    DVTScopeBarView *_scopeBarView;
    IDECapsuleListView *_entryPointsCapsuleListView;
}

- (void).cxx_destruct;
- (id)capsuleListView:(id)arg1 viewControllerForRow:(long long)arg2;
- (long long)numberOfObjectsInCapsuleListView:(id)arg1;
- (void)shaderModifiersCountDidChange;
- (void)addShaderModifierAction:(id)arg1;
- (void)configureAddMenu;
- (void)refreshEmptyContentString;
- (id)shadableMember;
@property(copy, nonatomic) NSArray *content;
- (void)viewDidLoad;
- (void)primitiveInvalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

