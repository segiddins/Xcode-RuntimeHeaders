//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <XCSUI/DVTToggleSwitchAuthorizatonDelegate-Protocol.h>

@class DVTBorderedView, DVTReplacementView, DVTTabChooserView, DVTToggleSwitch, NSImageView, NSProgressIndicator, NSTextField, XCSUIAuthorizationViewHelper;

__attribute__((visibility("hidden")))
@interface _TtC5XCSUI8PrefPane : IDEViewController <DVTToggleSwitchAuthorizatonDelegate>
{
    // Error parsing type: , name: toggleSwitch
    // Error parsing type: , name: statusField
    // Error parsing type: , name: statusImageView
    // Error parsing type: , name: progressHostView
    // Error parsing type: , name: progressSpinner
    // Error parsing type: , name: borderedView
    // Error parsing type: , name: tabChooserView
    // Error parsing type: , name: replacement
    // Error parsing type: , name: saveProgress
    // Error parsing type: , name: savingLabel
    // Error parsing type: , name: authViewHelper
    // Error parsing type: , name: buildServiceUserController
    // Error parsing type: , name: progressController
    // Error parsing type: , name: fetchedSettings
    // Error parsing type: , name: fetchedPermissions
    // Error parsing type: , name: buildServiceUser
    // Error parsing type: , name: serviceDataLocation
    // Error parsing type: , name: compatibility
    // Error parsing type: , name: adminSession
    // Error parsing type: , name: requestManager
    // Error parsing type: , name: workspaceSessionBecameActive
    // Error parsing type: , name: workspaceSessionResignedActive
    // Error parsing type: , name: isAttemptingUpgrade
    // Error parsing type: , name: $__lazy_storage_$_choices
    // Error parsing type: , name: $__lazy_storage_$_emptyChoices
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)primitiveInvalidate;
- (void)attemptAuthorizationViaToggleSwitch:(CDUnknownBlockType)arg1;
- (void)loadView;
@property(nonatomic, retain) XCSUIAuthorizationViewHelper *authViewHelper; // @synthesize authViewHelper;
@property(nonatomic) __weak NSTextField *savingLabel; // @synthesize savingLabel;
@property(nonatomic) __weak NSProgressIndicator *saveProgress; // @synthesize saveProgress;
@property(nonatomic) __weak DVTReplacementView *replacement; // @synthesize replacement;
@property(nonatomic) __weak DVTTabChooserView *tabChooserView; // @synthesize tabChooserView;
@property(nonatomic) __weak DVTBorderedView *borderedView; // @synthesize borderedView;
@property(nonatomic) __weak NSProgressIndicator *progressSpinner; // @synthesize progressSpinner;
@property(nonatomic) __weak DVTBorderedView *progressHostView; // @synthesize progressHostView;
@property(nonatomic) __weak NSImageView *statusImageView; // @synthesize statusImageView;
@property(nonatomic) __weak NSTextField *statusField; // @synthesize statusField;
@property(nonatomic) __weak DVTToggleSwitch *toggleSwitch; // @synthesize toggleSwitch;

@end

