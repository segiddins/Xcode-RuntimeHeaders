//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEStoreKitEditor/_TtC17IDEStoreKitEditor36IDEStoreKitEditorPanelViewController.h>

@class MISSING_TYPE, NSButton, NSTableView, NSTextField;

__attribute__((visibility("hidden")))
@interface _TtC17IDEStoreKitEditor44IDEStoreKitSubscriptionOptionsViewController : _TtC17IDEStoreKitEditor36IDEStoreKitEditorPanelViewController
{
    MISSING_TYPE *cancelButton;
    MISSING_TYPE *doneButton;
    MISSING_TYPE *resubscribeInstructionsLabel;
    MISSING_TYPE *tableView;
    MISSING_TYPE *titleLabel;
    MISSING_TYPE *subscriptionCell;
    MISSING_TYPE *appName;
    MISSING_TYPE *configuration;
    MISSING_TYPE *isActive;
    MISSING_TYPE *selectedRow;
    MISSING_TYPE *subscriptions;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)doneButtonPressed:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)viewDidInstall;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) __weak NSTextField *titleLabel; // @synthesize titleLabel;
@property(nonatomic) __weak NSTableView *tableView; // @synthesize tableView;
@property(nonatomic) __weak NSTextField *resubscribeInstructionsLabel; // @synthesize resubscribeInstructionsLabel;
@property(nonatomic) __weak NSButton *doneButton; // @synthesize doneButton;
@property(nonatomic) __weak NSButton *cancelButton; // @synthesize cancelButton;

@end

