//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTBorderedView, DVTGradientImageButton, DVTObservingToken, NSArray, NSMapTable, NSMutableSet, NSString;
@protocol IDEDebugBarContentProvider, IDEDebuggerBarEditorInfoProvider;

@interface IDEDebugBar : IDEViewController
{
    DVTBorderedView *_containerView;
    DVTGradientImageButton *_showHideDebuggerAreaButton;
    NSString *_currentDefaultCategory;
    NSString *_currentCategory;
    NSString *_currentInstalledCategory;
    DVTObservingToken *_showDebuggerAreaObserverToken;
    BOOL _viewIsUninstalling;
    NSMapTable *_contentProvidersToShownControlViews;
    NSMapTable *_contentProvidersToControlViewsObserverTokens;
    NSMapTable *_contentProvidersToPrefersDebugBarToBeShownObserverTokens;
    NSMutableSet *_contentProvidersWantingDebugBarToBeShown;
    id <IDEDebugBarContentProvider> _grabRectProvider;
    id <IDEDebugBarContentProvider> _sharedLibrariesXOffsetProvider;
    BOOL _prefersToAlwaysBeShown;
    NSArray *_contentProviders;
    id <IDEDebuggerBarEditorInfoProvider> _editorInfoProvider;
    id _selectedModelObject;
}

+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (id)standardDebugBarButtonWithImage:(id)arg1 toolTip:(id)arg2 accessibilityDescription:(id)arg3;
+ (struct CGSize)standardDebugBarButtonSize;
- (void).cxx_destruct;
@property BOOL prefersToAlwaysBeShown; // @synthesize prefersToAlwaysBeShown=_prefersToAlwaysBeShown;
@property(retain) id selectedModelObject; // @synthesize selectedModelObject=_selectedModelObject;
@property(retain) id <IDEDebuggerBarEditorInfoProvider> editorInfoProvider; // @synthesize editorInfoProvider=_editorInfoProvider;
@property(retain, nonatomic) NSArray *contentProviders; // @synthesize contentProviders=_contentProviders;
- (void)primitiveInvalidate;
- (void)showSharedLibrariesPopUp;
- (double)_sharedLibrariesPopUpXOffset;
- (struct CGRect)additionalGrabRectInTermsOfView:(id)arg1;
- (id)_contentProvidersForCategory:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)_updateShowDebugAreaButtonToolTipAndAccessibilityLabel;
- (void)_doToolTipWorkaround;
- (void)_updatePrefersToAlwaysBeShown;
- (void)_prefersDebugBarToBeShownDidChangeForCotentProvider:(id)arg1;
- (void)tile;
- (void)installContentProvidersForNewDefaultCategory:(id)arg1;
- (void)installContentProvidersForCategory:(id)arg1;
- (void)installContentProvidersForDefaultCategory;
- (void)_showHideDebugAreaButtonAction:(id)arg1;
- (id)_createShowHideDebugAreaButton;
- (void)loadView;

@end

