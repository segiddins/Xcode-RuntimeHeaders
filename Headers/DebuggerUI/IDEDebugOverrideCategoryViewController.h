//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <DebuggerUI/IDEDebugOverrideDelegate-Protocol.h>

@class DVTToggleSwitch, IDEDebugSession, NSArray, NSStackView, NSTextField;

@interface IDEDebugOverrideCategoryViewController : NSViewController <IDEDebugOverrideDelegate>
{
    NSTextField *_nameLabel;
    DVTToggleSwitch *_enabledSwitch;
    NSStackView *_overridesStackView;
    NSArray *_debugOverrides;
    IDEDebugSession *_debugSession;
}

+ (id)controllerWithDebugOverrides:(id)arg1 forDebugSession:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) IDEDebugSession *debugSession; // @synthesize debugSession=_debugSession;
@property(copy, nonatomic) NSArray *debugOverrides; // @synthesize debugOverrides=_debugOverrides;
@property __weak NSStackView *overridesStackView; // @synthesize overridesStackView=_overridesStackView;
@property __weak DVTToggleSwitch *enabledSwitch; // @synthesize enabledSwitch=_enabledSwitch;
@property __weak NSTextField *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void)debugOverrideDidUpdate:(id)arg1;
- (void)dealloc;
- (id)_viewControllerForOverride:(id)arg1;
- (void)_setupOverridesUI;
- (BOOL)_isCategoryEnabled;
- (void)_setupEnabledSwitch;
- (void)_setupNameLabel;
- (void)viewDidLoad;
- (id)initWithDebugOverrides:(id)arg1 forDebugSession:(id)arg2;

@end
