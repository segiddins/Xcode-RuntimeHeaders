//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class DVTTutorialController, NSButton, NSView;

@interface DVTTutorialNavigationController : NSViewController
{
    BOOL _isOnLastPage;
    NSButton *_nextButton;
    NSButton *_previousButton;
    NSButton *_cancelButton;
    NSView *_navigationContainerView;
    DVTTutorialController *_tutorialController;
    NSButton *_currentPageNavigationButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSButton *currentPageNavigationButton; // @synthesize currentPageNavigationButton=_currentPageNavigationButton;
@property __weak DVTTutorialController *tutorialController; // @synthesize tutorialController=_tutorialController;
@property __weak NSView *navigationContainerView; // @synthesize navigationContainerView=_navigationContainerView;
@property __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property __weak NSButton *previousButton; // @synthesize previousButton=_previousButton;
@property __weak NSButton *nextButton; // @synthesize nextButton=_nextButton;
- (void)setNextButtonEnabled:(BOOL)arg1;
- (void)setPageControllerIsOnFirstPage:(BOOL)arg1;
- (void)setPageControllerIsOnLastPage:(BOOL)arg1;
- (void)cancelAction:(id)arg1;
- (void)previousAction:(id)arg1;
- (void)nextAction:(id)arg1;

@end

