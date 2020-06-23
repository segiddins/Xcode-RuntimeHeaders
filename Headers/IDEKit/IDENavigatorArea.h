//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/DVTReplacementViewDelegate-Protocol.h>
#import <IDEKit/DVTStatefulObject-Protocol.h>
#import <IDEKit/NSTouchBarDelegate-Protocol.h>
#import <IDEKit/NSTouchBarProvider-Protocol.h>

@class DVTBorderView, DVTBorderedView, DVTChooserView, DVTExtension, DVTObservingToken, DVTReplacementView, DVTStateToken, IDENavigator, IDENavigatorAreaDFRController, IDENavigatorSearchFilterControlBar, NSArrayController, NSMutableDictionary, NSString, NSTouchBar, NSVisualEffectView;

@interface IDENavigatorArea : IDEViewController <NSTouchBarProvider, NSTouchBarDelegate, DVTReplacementViewDelegate, DVTStatefulObject>
{
    DVTChooserView *_chooserView;
    DVTObservingToken *_workspaceActivityObservingToken;
    NSMutableDictionary *_perNavigatorCache;
    BOOL _isInvalidating;
    IDENavigatorSearchFilterControlBar *_filterControlBar;
    DVTReplacementView *_replacementView;
    NSArrayController *_choicesController;
    DVTExtension *_currentExtension;
    NSVisualEffectView *_visualEffectView;
    DVTBorderedView *_borderedView;
    DVTBorderView *_chooserNavigatorSeparatorView;
    IDENavigatorAreaDFRController *_touchBarSupportController;
}

+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)keyPathsForValuesAffectingCurrentNavigator;
+ (id)_explorableNavigatorAlternates;
+ (id)navigatorsForContext:(id)arg1;
+ (id)_explorableNavigatorIdsForKnownNavigators;
+ (id)keyPathsForValuesAffectingWorkspace;
- (void).cxx_destruct;
@property(retain) IDENavigatorAreaDFRController *touchBarSupportController; // @synthesize touchBarSupportController=_touchBarSupportController;
@property __weak DVTBorderView *chooserNavigatorSeparatorView; // @synthesize chooserNavigatorSeparatorView=_chooserNavigatorSeparatorView;
@property __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(retain) NSVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(retain, nonatomic) DVTExtension *currentExtension; // @synthesize currentExtension=_currentExtension;
@property(retain) NSArrayController *choicesController; // @synthesize choicesController=_choicesController;
@property(retain) DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property(retain) IDENavigatorSearchFilterControlBar *filterControlBar; // @synthesize filterControlBar=_filterControlBar;
- (double)minimumContentWidth;
- (void)commitStateToDictionary:(id)arg1;
@property(readonly) BOOL canRevertWithEmptyStateDictionary;
- (void)revertStateWithDictionary:(id)arg1;
- (void)_setCurrentExtensionIdentifier:(id)arg1;
- (id)_currentExtensionIdentifier;
- (BOOL)delegateFirstResponder;
@property(readonly) NSString *currentNavigatorIdentifier;
@property(readonly) IDENavigator *currentNavigator;
- (void)_clearPerNavigatorCache;
- (void)showNavigatorWithIdentifier:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (void)replacementView:(id)arg1 willInstallViewController:(id)arg2;
- (void)replacementView:(id)arg1 willCloseViewController:(id)arg2;
- (id)cacheDictionaryForNavigatorID:(id)arg1;
- (id)perNavigatorCacheKeyForNavigator:(id)arg1;
- (void)activateFilterFieldForFocus;
- (void)installFilterControlBarForNavigator:(id)arg1;
- (void)primitiveInvalidate;
- (id)_imageForNavigator:(id)arg1 withName:(id)arg2;
- (void)_setFilterControlBarVisible:(BOOL)arg1;
- (void)_layoutViewSubviews;
- (void)loadView;
- (void)_rebuildNavigatorOptions;
- (id)_playgroundExcludedNavigators;
- (id)supportedContext;
- (void)clearSearchFieldForControlBar:(id)arg1;
- (void)activateSearchFieldForControlBar:(id)arg1;
- (id)_dfrImageForImageName:(id)arg1;
- (id)_filterContextsForStandardNavigator;
- (id)_filterContextsForCurrentNavigator;
- (void)filterToggled:(id)arg1;
- (id)_filterBarGroupItemWithIdentifier:(id)arg1;
- (id)_makeItemForIdentifier:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)navigatorAreaDFRController;
- (id)_touchBarForNavigators;
- (id)_touchBarForCurrentNavigator;
- (void)_registerForObserversAndNotifications;
- (id)makeTouchBar;
- (id)findNavigator_switchToNavigatorWithIdentifier:(id)arg1 andAssertClass:(Class)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain) DVTStateToken *stateToken; // @dynamic stateToken;
@property(readonly) Class superclass;
@property(readonly) NSTouchBar *touchBar;

@end

