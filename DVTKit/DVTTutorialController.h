//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTKit/DVTInvalidation-Protocol.h>
#import <DVTKit/NSPageControllerDelegate-Protocol.h>

@class DVTPageController, DVTStackBacktrace, DVTTutorialNavigationController, NSButton, NSStoryboard, NSString, NSView;

@interface DVTTutorialController : NSObject <DVTInvalidation, NSPageControllerDelegate>
{
    CDUnknownBlockType _cancelHandler;
    DVTPageController *_pageController;
    NSButton *_currentPageNavigationButton;
    NSStoryboard *_storyboard;
    DVTTutorialNavigationController *_navigationController;
}

+ (id)linkColor;
+ (void)initialize;
@property(retain) DVTTutorialNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain) NSStoryboard *storyboard; // @synthesize storyboard=_storyboard;
@property(nonatomic) __weak NSButton *currentPageNavigationButton; // @synthesize currentPageNavigationButton=_currentPageNavigationButton;
@property(retain) DVTPageController *pageController; // @synthesize pageController=_pageController;
@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)pageController:(id)arg1 prepareViewController:(id)arg2 withObject:(id)arg3;
- (void)pageController:(id)arg1 didTransitionToObject:(id)arg2;
- (void)_updateNavigationButtons;
- (void)pageControllerDidEndLiveTransition:(id)arg1;
- (void)_ensureNavigationIsOnTop;
- (id)pageController:(id)arg1 viewControllerForIdentifier:(id)arg2;
- (id)pageController:(id)arg1 identifierForObject:(id)arg2;
- (id)init;
- (BOOL)currentPageShouldEnableNextButton;
- (void)validateCurrentPage;
- (void)reloadIdentifiers;
- (id)identifierForPageController;
- (id)identifiersForPagesInStoryboard;
@property(readonly) NSView *tutorialView;
- (void)cancel;
- (void)showViewControllerWithIdentifier:(id)arg1;
- (void)previousPage;
- (void)nextPage;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

