//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <DVTDeviceKit/DVTDevicesListViewControllerDelegate-Protocol.h>
#import <DVTDeviceKit/NSMenuDelegate-Protocol.h>
#import <DVTDeviceKit/NSToolbarDelegate-Protocol.h>
#import <DVTDeviceKit/NSWindowDelegate-Protocol.h>

@class DVTDeviceProvisioningProfilesSheetController, DVTDevicesWindowToolbarViewController, DVTOnboardingTutorialController, NSMutableSet, NSString, NSWindow;

@interface DVTDevicesWindowController : NSWindowController <NSToolbarDelegate, DVTDevicesListViewControllerDelegate, NSMenuDelegate, NSWindowDelegate>
{
    DVTDeviceProvisioningProfilesSheetController *_provisioningProfilesSheet;
    CDUnknownBlockType _devicesWindowCompletionHandler;
    NSWindow *_tutorialWindow;
    DVTOnboardingTutorialController *_tutorialController;
    DVTDevicesWindowToolbarViewController *_toolbarVC;
    NSMutableSet *_loadedTabIndexes;
}

+ (id)supportedFileDataTypeIdentifiers;
+ (id)_provisioningProfileTypeIdentifers;
+ (BOOL)shouldShowDeviceConsole;
+ (id)sharedDevicesWindowController;
+ (id)logAspect;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain) NSMutableSet *loadedTabIndexes; // @synthesize loadedTabIndexes=_loadedTabIndexes;
@property(retain) DVTDevicesWindowToolbarViewController *toolbarVC; // @synthesize toolbarVC=_toolbarVC;
@property(retain) DVTOnboardingTutorialController *tutorialController; // @synthesize tutorialController=_tutorialController;
@property(retain) NSWindow *tutorialWindow; // @synthesize tutorialWindow=_tutorialWindow;
@property(copy) CDUnknownBlockType devicesWindowCompletionHandler; // @synthesize devicesWindowCompletionHandler=_devicesWindowCompletionHandler;
- (void)changeMode:(long long)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (void)selectDevice:(id)arg1;
- (void)selectTabIndex:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)selectTabForMode:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)showProvisioningProfiles:(id)arg1;
- (void)didFinishLoadingDevices:(id)arg1;
- (void)beginOnboardingTutorialSheet;
- (BOOL)openFileURL:(id)arg1 withFileType:(id)arg2 error:(id *)arg3;
- (void)windowWillClose:(id)arg1;
- (void)showWindow:(id)arg1;
- (void)showWindowWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

