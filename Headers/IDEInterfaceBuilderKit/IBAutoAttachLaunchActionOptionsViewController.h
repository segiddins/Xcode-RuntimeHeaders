//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDELaunchActionOptionViewController.h>

@class NSButton;

@interface IBAutoAttachLaunchActionOptionsViewController : IDELaunchActionOptionViewController
{
    NSButton *_autoAttachToRemoteToolsCheckBox;
}

+ (BOOL)availableForScheme:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSButton *autoAttachToRemoteToolsCheckBox; // @synthesize autoAttachToRemoteToolsCheckBox=_autoAttachToRemoteToolsCheckBox;
- (void)didToggleAutoAttachToRemoteTools:(id)arg1;
- (void)loadView;

@end

