//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DebuggerUI/IDEDebugOverrideViewController.h>

@class NSButton;

@interface IDEBooleanDebugOverrideViewController : IDEDebugOverrideViewController
{
    NSButton *_checkBoxButton;
}

- (void).cxx_destruct;
@property __weak NSButton *checkBoxButton; // @synthesize checkBoxButton=_checkBoxButton;
- (id)_checkBoxTooltip;
- (void)checkBoxButtonPressed:(id)arg1;
- (void)updateUIWithOverrideState;
- (void)viewDidLoad;

@end

