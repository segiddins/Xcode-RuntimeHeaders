//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

#import <DVTDeviceKit/DVTDevicesWindowDetailViewController-Protocol.h>
#import <DVTDeviceKit/DVTTableViewDelegate-Protocol.h>
#import <DVTDeviceKit/NSTableViewDataSource-Protocol.h>

@class DVTBorderedView, DVTDevice, DVTDeviceErrorsAndWarningsController, DVTDeviceSummaryAboutViewController, DVTDeviceSummaryAppsViewController, DVTDeviceSummaryRootsViewController, DVTGradientImageButton, DVTStackBacktrace, DVTTableView, NSArray, NSButton, NSImageView, NSMutableArray, NSMutableDictionary, NSScrollView, NSSet, NSStackView, NSString, NSTextField, NSView;
@protocol NSObject;

@interface DVTDeviceSummaryViewController : DVTViewController <DVTDevicesWindowDetailViewController, NSTableViewDataSource, DVTTableViewDelegate>
{
    NSArray *_additionalSliceControllers;
    NSMutableArray *_deviceObservationTokens;
    NSMutableArray *_proxiedDevicesObservingTokens;
    id <NSObject> _devicePrepErrorsObserver;
    BOOL _showViolator;
    BOOL _updateViolatorPending;
    BOOL _rebuildStackViewPending;
    BOOL _addedConstraints;
    DVTDevice *_device;
    NSArray *_additionalSliceViewControllerClasses;
    Class _deviceLogsViewControllerClass;
    DVTDeviceSummaryAboutViewController *_aboutViewController;
    NSTextField *_violatorTitleLabel;
    NSTextField *_violatorDetailLabel;
    NSTextField *_proxiedDeviceLabel;
    DVTTableView *_proxiedDeviceTableView;
    NSScrollView *_proxiedDeviceScrollView;
    DVTBorderedView *_proxiedDeviceScrollViewSeparator;
    DVTBorderedView *_proxiedDevicesFooter;
    NSTextField *_proxiedDevicesNotSupportedLabel;
    NSStackView *_stackView;
    DVTBorderedView *_violatorSlice;
    NSView *_proxiedDeviceSlice;
    NSImageView *_violatorImageView;
    DVTBorderedView *_tableHeaderLine;
    NSButton *_takeScreenshotButton;
    DVTGradientImageButton *_addPairedDeviceButton;
    DVTGradientImageButton *_deletePairedDeviceButton;
    DVTDeviceErrorsAndWarningsController *_errorsController;
    DVTDeviceSummaryAppsViewController *_appsViewController;
    DVTDeviceSummaryRootsViewController *_rootsViewController;
    NSString *_violatorMessage;
    NSString *_violatorDescription;
    NSArray *_deviceInfo;
    NSMutableDictionary *_proxyInfo;
}

+ (id)keyPathsForValuesAffectingActiveProxiedDevice;
+ (id)keyPathsForValuesAffectingProxiedDevices;
+ (id)keyPathsForValuesAffectingShowProxiedDeviceSlice;
+ (id)defaultViewNibBundle;
+ (id)defaultViewNibName;
- (void).cxx_destruct;
@property BOOL addedConstraints; // @synthesize addedConstraints=_addedConstraints;
@property(retain) NSMutableDictionary *proxyInfo; // @synthesize proxyInfo=_proxyInfo;
@property(copy) NSArray *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property BOOL rebuildStackViewPending; // @synthesize rebuildStackViewPending=_rebuildStackViewPending;
@property(retain) NSString *violatorDescription; // @synthesize violatorDescription=_violatorDescription;
@property(retain) NSString *violatorMessage; // @synthesize violatorMessage=_violatorMessage;
@property BOOL updateViolatorPending; // @synthesize updateViolatorPending=_updateViolatorPending;
@property BOOL showViolator; // @synthesize showViolator=_showViolator;
@property(retain) DVTDeviceSummaryRootsViewController *rootsViewController; // @synthesize rootsViewController=_rootsViewController;
@property(retain) DVTDeviceSummaryAppsViewController *appsViewController; // @synthesize appsViewController=_appsViewController;
@property(retain) DVTDeviceErrorsAndWarningsController *errorsController; // @synthesize errorsController=_errorsController;
@property(retain) DVTGradientImageButton *deletePairedDeviceButton; // @synthesize deletePairedDeviceButton=_deletePairedDeviceButton;
@property(retain) DVTGradientImageButton *addPairedDeviceButton; // @synthesize addPairedDeviceButton=_addPairedDeviceButton;
@property(retain) NSButton *takeScreenshotButton; // @synthesize takeScreenshotButton=_takeScreenshotButton;
@property(retain) DVTBorderedView *tableHeaderLine; // @synthesize tableHeaderLine=_tableHeaderLine;
@property(retain) NSImageView *violatorImageView; // @synthesize violatorImageView=_violatorImageView;
@property(retain) NSView *proxiedDeviceSlice; // @synthesize proxiedDeviceSlice=_proxiedDeviceSlice;
@property(retain) DVTBorderedView *violatorSlice; // @synthesize violatorSlice=_violatorSlice;
@property(retain) NSStackView *stackView; // @synthesize stackView=_stackView;
@property(retain) NSTextField *proxiedDevicesNotSupportedLabel; // @synthesize proxiedDevicesNotSupportedLabel=_proxiedDevicesNotSupportedLabel;
@property(retain) DVTBorderedView *proxiedDevicesFooter; // @synthesize proxiedDevicesFooter=_proxiedDevicesFooter;
@property(retain) DVTBorderedView *proxiedDeviceScrollViewSeparator; // @synthesize proxiedDeviceScrollViewSeparator=_proxiedDeviceScrollViewSeparator;
@property(retain) NSScrollView *proxiedDeviceScrollView; // @synthesize proxiedDeviceScrollView=_proxiedDeviceScrollView;
@property(retain) DVTTableView *proxiedDeviceTableView; // @synthesize proxiedDeviceTableView=_proxiedDeviceTableView;
@property(retain) NSTextField *proxiedDeviceLabel; // @synthesize proxiedDeviceLabel=_proxiedDeviceLabel;
@property(retain) NSTextField *violatorDetailLabel; // @synthesize violatorDetailLabel=_violatorDetailLabel;
@property(retain) NSTextField *violatorTitleLabel; // @synthesize violatorTitleLabel=_violatorTitleLabel;
@property(retain) DVTDeviceSummaryAboutViewController *aboutViewController; // @synthesize aboutViewController=_aboutViewController;
@property(readonly) Class deviceLogsViewControllerClass; // @synthesize deviceLogsViewControllerClass=_deviceLogsViewControllerClass;
@property(readonly) NSArray *additionalSliceViewControllerClasses; // @synthesize additionalSliceViewControllerClasses=_additionalSliceViewControllerClasses;
@property(retain, nonatomic) DVTDevice *device; // @synthesize device=_device;
- (id)_simulatorLocator;
- (void)_reloadProxiedDevices;
- (id)_proxiedDeviceForIdentifier:(id)arg1;
- (id)_proxiedDeviceIdentifierForRow:(long long)arg1;
- (id)_proxiedDeviceSummaryForDeviceSummary:(id)arg1;
- (void)_updateViolator;
- (void)violatorNeedsUpdate;
- (id)_regenerateAdditionalSliceViews;
- (void)_rebuildStackView;
- (void)stackViewNeedsUpdate;
- (BOOL)panel:(id)arg1 shouldEnableURL:(id)arg2;
- (void)openConsole:(id)arg1;
- (void)deletePairedDevice:(id)arg1;
- (void)addPairedDevice:(id)arg1;
- (void)selectActivePairedDevice:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
@property(readonly) BOOL showApplicationList;
@property(readonly) BOOL showInstalledRootList;
- (id)activeProxiedDevice;
@property(readonly) NSSet *proxiedDevices;
@property(readonly) BOOL showProxiedDeviceSlice;
- (BOOL)_disableProxiedDeviceSlice;
- (void)viewDidLayout;
- (void)_setPreferredMaxLayoutWidthForTextField:(id)arg1;
- (void)updateViewConstraints;
- (void)viewWillAppear;
- (void)viewDidInstall;
- (void)loadView;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

