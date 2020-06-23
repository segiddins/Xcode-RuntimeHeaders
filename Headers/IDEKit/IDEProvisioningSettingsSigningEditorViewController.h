//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDESigningEditorSectionViewController.h>

#import <IDEKit/IDESigningEditorCapsuleViewStateRestorationRecordProvider-Protocol.h>

@class DVTObservingToken, DVTStackView_ML, IDEProvisioningBundleIdentifierViewController, IDEProvisioningIssuesViewController, IDEProvisioningProfileSelectionViewController, IDEProvisioningProgressIndicatorViewController, IDEProvisioningRepairProgressIndicatorViewController, IDEProvisioningSigningSelectionViewController, IDEProvisioningStyleSettingsViewController, IDEProvisioningTeamSelectionViewController, IDEVerticalResizeToContentLayoutView, _TtC13IDEFoundation46SigningEditorCapsuleViewStateRestorationRecord, _TtC6IDEKit38ProvisioningPlatformNameViewController;
@protocol IDESigningEditorAssetSelectionDataSource, IDESigningEditorCapsuleViewStateRestorationRecordProviderDelegate;

@interface IDEProvisioningSettingsSigningEditorViewController : IDESigningEditorSectionViewController <IDESigningEditorCapsuleViewStateRestorationRecordProvider>
{
    BOOL _showStyleSelectionView;
    BOOL _showSigningSelectionView;
    BOOL _showProgressIndicatorView;
    BOOL _showNoAccountsView;
    BOOL _showBundleIdentifierView;
    BOOL _showIOSMacViews;
    id <IDESigningEditorCapsuleViewStateRestorationRecordProviderDelegate> _restorationRecordProviderDelegate;
    id <IDESigningEditorAssetSelectionDataSource> _dataSource;
    DVTObservingToken *_errorsObserver;
    DVTObservingToken *_repairBusyObserver;
    DVTObservingToken *_showProgressIndicatorViewObserver;
    DVTStackView_ML *_stackView;
    IDEProvisioningStyleSettingsViewController *_provisioningStyleSettingsViewController;
    IDEProvisioningTeamSelectionViewController *_provisioningTeamSelectionViewController;
    _TtC6IDEKit38ProvisioningPlatformNameViewController *_provisioningFirstPlatformNameViewController;
    IDEProvisioningBundleIdentifierViewController *_provisioningBundleIdentifierViewController;
    IDEProvisioningProfileSelectionViewController *_provisioningProfileSelectionViewController;
    IDEProvisioningSigningSelectionViewController *_provisioningSigningSelectionViewController;
    IDEProvisioningRepairProgressIndicatorViewController *_provisioningRepairProgressIndicatorViewController;
    IDEProvisioningIssuesViewController *_provisioningIssuesViewController;
    IDEProvisioningProgressIndicatorViewController *_provisioningProgressIndicatorViewController;
    IDEVerticalResizeToContentLayoutView *_verticalResizingContentView;
    _TtC6IDEKit38ProvisioningPlatformNameViewController *_provisioningSecondPlatformNameViewController;
    IDEProvisioningBundleIdentifierViewController *_iOSMacBundleIdentifierViewController;
    IDEProvisioningProfileSelectionViewController *_iOSMacProvisioningProfileSelectionViewController;
    IDEProvisioningSigningSelectionViewController *_iOSMacSigningSelectionViewController;
}

+ (id)provisioningSettingsSigningEditorViewControllersWithDataSourceProvider:(id)arg1 configuration:(id)arg2 reusableViewControllers:(id)arg3 discardedViewControllers:(id *)arg4;
+ (id)provisioningSettingsSigningEditorViewControllersWithDataSourceProvider:(id)arg1 configuration:(id)arg2 reuseStore:(id)arg3 reusableViewControllers:(id)arg4 discardedViewControllers:(id *)arg5;
+ (id)provisioningSettingsSigningEditorViewControllerCreatedOrDequeuedWithReuseStore:(id)arg1 dataSource:(id)arg2 showProgressIndicatorView:(BOOL)arg3 showStyleSelection:(BOOL)arg4 showSigningSelectionView:(BOOL)arg5 showBundleIdentifierView:(BOOL)arg6 showIOSMacViews:(BOOL)arg7;
@property(readonly, nonatomic) BOOL showIOSMacViews; // @synthesize showIOSMacViews=_showIOSMacViews;
@property(readonly, nonatomic) BOOL showBundleIdentifierView; // @synthesize showBundleIdentifierView=_showBundleIdentifierView;
@property(readonly, nonatomic) BOOL showNoAccountsView; // @synthesize showNoAccountsView=_showNoAccountsView;
@property(readonly, nonatomic) BOOL showProgressIndicatorView; // @synthesize showProgressIndicatorView=_showProgressIndicatorView;
@property(readonly, nonatomic) BOOL showSigningSelectionView; // @synthesize showSigningSelectionView=_showSigningSelectionView;
@property(readonly, nonatomic) BOOL showStyleSelectionView; // @synthesize showStyleSelectionView=_showStyleSelectionView;
@property(retain, nonatomic) IDEProvisioningSigningSelectionViewController *iOSMacSigningSelectionViewController; // @synthesize iOSMacSigningSelectionViewController=_iOSMacSigningSelectionViewController;
@property(retain, nonatomic) IDEProvisioningProfileSelectionViewController *iOSMacProvisioningProfileSelectionViewController; // @synthesize iOSMacProvisioningProfileSelectionViewController=_iOSMacProvisioningProfileSelectionViewController;
@property(retain, nonatomic) IDEProvisioningBundleIdentifierViewController *iOSMacBundleIdentifierViewController; // @synthesize iOSMacBundleIdentifierViewController=_iOSMacBundleIdentifierViewController;
@property(retain, nonatomic) _TtC6IDEKit38ProvisioningPlatformNameViewController *provisioningSecondPlatformNameViewController; // @synthesize provisioningSecondPlatformNameViewController=_provisioningSecondPlatformNameViewController;
@property __weak IDEVerticalResizeToContentLayoutView *verticalResizingContentView; // @synthesize verticalResizingContentView=_verticalResizingContentView;
@property(retain, nonatomic) IDEProvisioningProgressIndicatorViewController *provisioningProgressIndicatorViewController; // @synthesize provisioningProgressIndicatorViewController=_provisioningProgressIndicatorViewController;
@property(retain, nonatomic) IDEProvisioningIssuesViewController *provisioningIssuesViewController; // @synthesize provisioningIssuesViewController=_provisioningIssuesViewController;
@property(retain, nonatomic) IDEProvisioningRepairProgressIndicatorViewController *provisioningRepairProgressIndicatorViewController; // @synthesize provisioningRepairProgressIndicatorViewController=_provisioningRepairProgressIndicatorViewController;
@property(retain, nonatomic) IDEProvisioningSigningSelectionViewController *provisioningSigningSelectionViewController; // @synthesize provisioningSigningSelectionViewController=_provisioningSigningSelectionViewController;
@property(retain, nonatomic) IDEProvisioningProfileSelectionViewController *provisioningProfileSelectionViewController; // @synthesize provisioningProfileSelectionViewController=_provisioningProfileSelectionViewController;
@property(retain, nonatomic) IDEProvisioningBundleIdentifierViewController *provisioningBundleIdentifierViewController; // @synthesize provisioningBundleIdentifierViewController=_provisioningBundleIdentifierViewController;
@property(retain, nonatomic) _TtC6IDEKit38ProvisioningPlatformNameViewController *provisioningFirstPlatformNameViewController; // @synthesize provisioningFirstPlatformNameViewController=_provisioningFirstPlatformNameViewController;
@property(retain, nonatomic) IDEProvisioningTeamSelectionViewController *provisioningTeamSelectionViewController; // @synthesize provisioningTeamSelectionViewController=_provisioningTeamSelectionViewController;
@property(retain, nonatomic) IDEProvisioningStyleSettingsViewController *provisioningStyleSettingsViewController; // @synthesize provisioningStyleSettingsViewController=_provisioningStyleSettingsViewController;
@property __weak DVTStackView_ML *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) DVTObservingToken *showProgressIndicatorViewObserver; // @synthesize showProgressIndicatorViewObserver=_showProgressIndicatorViewObserver;
@property(retain, nonatomic) DVTObservingToken *repairBusyObserver; // @synthesize repairBusyObserver=_repairBusyObserver;
@property(retain, nonatomic) DVTObservingToken *errorsObserver; // @synthesize errorsObserver=_errorsObserver;
@property(retain, nonatomic) id <IDESigningEditorAssetSelectionDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <IDESigningEditorCapsuleViewStateRestorationRecordProviderDelegate> restorationRecordProviderDelegate; // @synthesize restorationRecordProviderDelegate=_restorationRecordProviderDelegate;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (BOOL)disclosedByDefault;
@property(readonly, nonatomic) _TtC13IDEFoundation46SigningEditorCapsuleViewStateRestorationRecord *restorationRecord;
- (void)startObservations;
@property(readonly, nonatomic) BOOL showRepairBusyView;
@property(readonly, nonatomic) BOOL showIssuesView;
- (void)refreshStackView;
- (void)viewDidLoad;
- (void)setShowProgressIndicatorView:(BOOL)arg1 dataSource:(id)arg2 showStyleSelection:(BOOL)arg3 showSigningSelectionView:(BOOL)arg4 showBundleIdentifierView:(BOOL)arg5 showIOSMacViews:(BOOL)arg6;
- (id)initWithShowProgressIndicatorView:(BOOL)arg1 dataSource:(id)arg2 showStyleSelection:(BOOL)arg3 showSigningSelectionView:(BOOL)arg4 showBundleIdentifierView:(BOOL)arg5 showIOSMacViews:(BOOL)arg6;

@end

