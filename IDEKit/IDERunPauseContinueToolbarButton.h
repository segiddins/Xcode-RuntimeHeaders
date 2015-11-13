//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTDelayedMenuButton.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTObservingToken, DVTStackBacktrace, IDEWorkspaceWindowController, NSString, NSToolbarItem;

@interface IDERunPauseContinueToolbarButton : DVTDelayedMenuButton <DVTInvalidation>
{
    IDEWorkspaceWindowController *_windowController;
    DVTObservingToken *_toolbarIdleObservingToken;
    DVTObservingToken *_runContextRunnableObservingToken;
    DVTObservingToken *_runContextBuildableObservingToken;
    DVTObservingToken *_workspaceIsCleaningObservingToken;
    NSString *_label;
    NSString *_tooltip;
    NSToolbarItem *_toolbarItem;
    BOOL _isValidToolbarItem;
}

+ (void)initialize;
@property BOOL isValidToolbarItem; // @synthesize isValidToolbarItem=_isValidToolbarItem;
- (void).cxx_destruct;
- (void)performProfileAction:(id)arg1;
- (void)performRunAction:(id)arg1;
- (void)performTestAction:(id)arg1;
- (void)performAnalyzeAction:(id)arg1;
- (BOOL)menuItemRepresentsBuildOnly:(id)arg1;
- (void)setToolbarItem:(id)arg1;
- (id)_toolbarItem;
- (void)_setButtonToBuildStyle:(id)arg1 menuItem:(id)arg2;
- (void)_setButtonToProfileStyle:(id)arg1 menuItem:(id)arg2;
- (void)_setButtonToTestStyle:(id)arg1 menuItem:(id)arg2;
- (void)_setButtonToAnalyzeStyle:(id)arg1 menuItem:(id)arg2;
- (void)_setButtonToRunStyle:(id)arg1 menuItem:(id)arg2;
- (void)_updateEnablement;
- (void)_updateToolbarItem;
- (void)_buttonIsMovingToWindowController:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithWindowController:(id)arg1;
- (id)addProfileButtonToMenu:(id)arg1;
- (id)addRunButtonToMenu:(id)arg1;
- (id)addTestButtonToMenu:(id)arg1;
- (id)addAnalyzeButtonToMenu:(id)arg1;
- (id)_newToolbarViewHitTest:(struct CGPoint)arg1;
- (void)_swizzleToolbarViewHitTest;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

