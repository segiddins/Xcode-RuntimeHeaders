//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEAssistant.h>

@class XCSUIBotDefinition_DevicePickerEditor;

@interface XCSUICreateBotDevicePickerAssistant : IDEAssistant
{
    BOOL _viewIsInstalled;
    XCSUIBotDefinition_DevicePickerEditor *_devicePickerEditor;
}

+ (id)keyPathsForValuesAffectingCanGoForward;
@property(retain, nonatomic) XCSUIBotDefinition_DevicePickerEditor *devicePickerEditor; // @synthesize devicePickerEditor=_devicePickerEditor;
@property(nonatomic) BOOL viewIsInstalled; // @synthesize viewIsInstalled=_viewIsInstalled;
- (void).cxx_destruct;
- (id)nextAssistantIdentifier;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (id)assistantTitle;
- (BOOL)canGoForward;
- (id)createBotAssistantContext;
- (void)primitiveInvalidate;
- (void)loadView;

@end

