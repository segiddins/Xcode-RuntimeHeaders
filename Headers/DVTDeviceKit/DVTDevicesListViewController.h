//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

#import <DVTDeviceKit/NSMenuDelegate-Protocol.h>
#import <DVTDeviceKit/NSOutlineViewDelegate-Protocol.h>

@class DVTDelayedInvocation, DVTDevice, DVTGradientImageButton, DVTObservingToken, DVTSearchField, NSArray, NSMenu, NSMenuItem, NSMutableDictionary, NSMutableSet, NSOutlineView, NSString, NSTreeController;
@protocol DVTDeviceAction, DVTDevicesListViewControllerDelegate;

@interface DVTDevicesListViewController : DVTViewController <NSOutlineViewDelegate, NSMenuDelegate>
{
    DVTObservingToken *_devicesObserver;
    NSMutableDictionary *_deviceObservationTokens;
    DVTDelayedInvocation *_delayedDevicesDisplayUpdateInvocation;
    BOOL _updatingDevicesForDisplay;
    BOOL _helpMenuItemAdded;
    BOOL _promptingForDelete;
    BOOL _restoringExpansionState;
    long long _mode;
    id <DVTDevicesListViewControllerDelegate> _delegate;
    NSTreeController *_devicesTreeController;
    NSOutlineView *_devicesOutline;
    DVTGradientImageButton *_addDevice;
    DVTSearchField *_searchField;
    NSMenu *_devicesMenu;
    NSMenuItem *_deleteSimMenuItem;
    NSMenuItem *_connectViaAddressMenuItem;
    NSMenuItem *_forgetDeviceSeparatorMenuItem;
    NSMenuItem *_forgetDeviceMenuItem;
    NSMenu *_addDeviceMenu;
    NSMutableSet *_devices;
    NSArray *_devicesOutlineSelectionIndexPaths;
    NSString *_filterString;
    NSMutableDictionary *_wirelessEnablingFutures;
    NSMutableDictionary *_headerItems;
    NSMutableDictionary *_deviceItems;
    NSMutableDictionary *_indexPathForDeviceIdentifier;
    id <DVTDeviceAction> _forgetDeviceAction;
}

+ (id)_deviceActionsToSkip;
@property(retain) id <DVTDeviceAction> forgetDeviceAction; // @synthesize forgetDeviceAction=_forgetDeviceAction;
@property(readonly) NSMutableDictionary *indexPathForDeviceIdentifier; // @synthesize indexPathForDeviceIdentifier=_indexPathForDeviceIdentifier;
@property(readonly) NSMutableDictionary *deviceItems; // @synthesize deviceItems=_deviceItems;
@property(readonly) NSMutableDictionary *headerItems; // @synthesize headerItems=_headerItems;
@property BOOL restoringExpansionState; // @synthesize restoringExpansionState=_restoringExpansionState;
@property BOOL promptingForDelete; // @synthesize promptingForDelete=_promptingForDelete;
@property(retain) NSMutableDictionary *wirelessEnablingFutures; // @synthesize wirelessEnablingFutures=_wirelessEnablingFutures;
@property(copy, nonatomic) NSString *filterString; // @synthesize filterString=_filterString;
@property(retain, nonatomic) NSArray *devicesOutlineSelectionIndexPaths; // @synthesize devicesOutlineSelectionIndexPaths=_devicesOutlineSelectionIndexPaths;
@property(retain) NSMutableSet *devices; // @synthesize devices=_devices;
@property(retain) NSMenu *addDeviceMenu; // @synthesize addDeviceMenu=_addDeviceMenu;
@property(retain) NSMenuItem *forgetDeviceMenuItem; // @synthesize forgetDeviceMenuItem=_forgetDeviceMenuItem;
@property(retain) NSMenuItem *forgetDeviceSeparatorMenuItem; // @synthesize forgetDeviceSeparatorMenuItem=_forgetDeviceSeparatorMenuItem;
@property(retain) NSMenuItem *connectViaAddressMenuItem; // @synthesize connectViaAddressMenuItem=_connectViaAddressMenuItem;
@property(retain) NSMenuItem *deleteSimMenuItem; // @synthesize deleteSimMenuItem=_deleteSimMenuItem;
@property(retain) NSMenu *devicesMenu; // @synthesize devicesMenu=_devicesMenu;
@property(retain) DVTSearchField *searchField; // @synthesize searchField=_searchField;
@property(retain) DVTGradientImageButton *addDevice; // @synthesize addDevice=_addDevice;
@property(retain) NSOutlineView *devicesOutline; // @synthesize devicesOutline=_devicesOutline;
@property(retain) NSTreeController *devicesTreeController; // @synthesize devicesTreeController=_devicesTreeController;
@property __weak id <DVTDevicesListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (id)_deviceWithIdentifier:(id)arg1;
- (void)_removeDevices:(id)arg1;
- (void)_addDevices:(id)arg1;
- (void)_restoreDeviceSelection;
- (id)_categoryDescriptionForDevice:(id)arg1;
- (void)_updateDeviceDisplayWithDelay:(BOOL)arg1;
- (id)_deviceListSortDescriptors;
- (id)_deviceItemForDevice:(id)arg1;
- (id)_headerItemForName:(id)arg1;
- (void)_updateDevices;
- (void)_stopObservingDeviceAvailabilty;
- (void)_startObservingDeviceAvailabilty;
- (id)_simulatorLocator;
- (id)_contextuallySelectedDevice;
- (void)selectDevice:(id)arg1;
- (BOOL)includesDevice:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)_restoreOutlineViewExpansionState;
- (void)_persistOutlineViewExpansionState;
- (id)_keyForCollapsedStatePersistence;
- (void)_selectDeviceWithIdentifier:(id)arg1;
- (id)tableView:(id)arg1 rowActionsForRow:(long long)arg2 edge:(long long)arg3;
- (id)_purportedSelectedDeviceWithSelectionIndexPaths:(id)arg1;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)noAction:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)performDeviceAction:(id)arg1;
- (void)_deleteSimulator:(id)arg1 prompt:(BOOL)arg2;
- (void)deleteSimulator:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)showProvisioningProfiles:(id)arg1;
- (void)connectViaAddress:(id)arg1;
- (void)renameDevice:(id)arg1;
- (void)copyDeviceIdentifier:(id)arg1;
- (void)copyDeviceName:(id)arg1;
- (void)addDevice:(id)arg1;
- (void)addSimulator:(id)arg1;
@property(readonly) DVTDevice *selectedDevice;
@property(copy) NSString *selectedDeviceIdentifier;
- (id)_selectedDeviceDefaultsKey;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)primitiveInvalidate;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

