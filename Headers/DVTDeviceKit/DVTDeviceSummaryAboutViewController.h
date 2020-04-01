//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

@class DVTBorderedView, DVTDevice, NSAppleScript, NSButton, NSImageView, NSStackView, NSString, NSTextField, NSView;
@protocol DVTDeviceAction;

@interface DVTDeviceSummaryAboutViewController : DVTViewController
{
    BOOL _stackViewsComplete;
    DVTDevice *_device;
    Class _deviceLogsViewControllerClass;
    NSView *_gridViewPlaceholder;
    DVTBorderedView *_backgroundView;
    NSTextField *_osVersionTextField;
    NSTextField *_modelTextField;
    NSButton *_showAsDestinationsButton;
    NSTextField *_capacityTextField;
    NSButton *_openSimulatorButton;
    NSTextField *_serialNumberTextField;
    NSButton *_connectWiFiButton;
    NSButton *_openConsoleButton;
    NSImageView *_image;
    NSView *_identifierContainerView;
    NSView *_buttonContainerView;
    NSButton *_takeScreenshotButton;
    NSButton *_viewLogsButton;
    NSView *_widthAdjustmentView1;
    NSView *_widthAdjustmentView2;
    NSStackView *_leftStackView;
    NSStackView *_rightStackView;
    id <DVTDeviceAction> _networkAccessAction;
    NSAppleScript *_openConsoleScript;
}

+ (id)keyPathsForValuesAffectingWifiConnectionEnabled;
+ (id)keyPathsForValuesAffectingEnableOpenConsole;
+ (id)keyPathsForValuesAffectingEnableScreenshots;
+ (id)keyPathsForValuesAffectingConnectWiFiButtonTooltip;
+ (id)keyPathsForValuesAffectingEnableConnectWiFiButton;
+ (id)keyPathsForValuesAffectingHideConnectWiFiButton;
@property(retain, nonatomic) NSAppleScript *openConsoleScript; // @synthesize openConsoleScript=_openConsoleScript;
@property(retain) id <DVTDeviceAction> networkAccessAction; // @synthesize networkAccessAction=_networkAccessAction;
@property BOOL stackViewsComplete; // @synthesize stackViewsComplete=_stackViewsComplete;
@property(retain) NSStackView *rightStackView; // @synthesize rightStackView=_rightStackView;
@property(retain) NSStackView *leftStackView; // @synthesize leftStackView=_leftStackView;
@property(retain) NSView *widthAdjustmentView2; // @synthesize widthAdjustmentView2=_widthAdjustmentView2;
@property(retain) NSView *widthAdjustmentView1; // @synthesize widthAdjustmentView1=_widthAdjustmentView1;
@property(retain) NSButton *viewLogsButton; // @synthesize viewLogsButton=_viewLogsButton;
@property(retain) NSButton *takeScreenshotButton; // @synthesize takeScreenshotButton=_takeScreenshotButton;
@property(retain) NSView *buttonContainerView; // @synthesize buttonContainerView=_buttonContainerView;
@property(retain) NSView *identifierContainerView; // @synthesize identifierContainerView=_identifierContainerView;
@property(retain) NSImageView *image; // @synthesize image=_image;
@property(retain) NSButton *openConsoleButton; // @synthesize openConsoleButton=_openConsoleButton;
@property(retain) NSButton *connectWiFiButton; // @synthesize connectWiFiButton=_connectWiFiButton;
@property(retain) NSTextField *serialNumberTextField; // @synthesize serialNumberTextField=_serialNumberTextField;
@property(retain) NSButton *openSimulatorButton; // @synthesize openSimulatorButton=_openSimulatorButton;
@property(retain) NSTextField *capacityTextField; // @synthesize capacityTextField=_capacityTextField;
@property(retain) NSButton *showAsDestinationsButton; // @synthesize showAsDestinationsButton=_showAsDestinationsButton;
@property(retain) NSTextField *modelTextField; // @synthesize modelTextField=_modelTextField;
@property(retain) NSTextField *osVersionTextField; // @synthesize osVersionTextField=_osVersionTextField;
@property(retain) DVTBorderedView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain) NSView *gridViewPlaceholder; // @synthesize gridViewPlaceholder=_gridViewPlaceholder;
@property(retain) Class deviceLogsViewControllerClass; // @synthesize deviceLogsViewControllerClass=_deviceLogsViewControllerClass;
@property(retain, nonatomic) DVTDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)_completeStackViews:(id)arg1;
- (void)_buildStackViews;
- (void)openConsole:(id)arg1;
- (void)takeScreenshot:(id)arg1;
- (void)launchSimulator:(id)arg1;
- (void)viewLogs:(id)arg1;
- (void)_performAction:(id)arg1 onDevice:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(nonatomic) long long wifiConnectionEnabled;
@property(readonly) NSString *connectWiFiButtonTooltip;
@property(readonly) BOOL enableOpenConsole;
@property(readonly) BOOL enableScreenshots;
@property(readonly) BOOL enableConnectWiFiButton;
@property(readonly) BOOL hideConnectWiFiButton;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

