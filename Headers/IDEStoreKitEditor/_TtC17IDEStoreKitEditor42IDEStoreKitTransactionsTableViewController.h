//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTEmptyContentPlaceholder, MISSING_TYPE, NSTableView;

__attribute__((visibility("hidden")))
@interface _TtC17IDEStoreKitEditor42IDEStoreKitTransactionsTableViewController : IDEViewController
{
    MISSING_TYPE *tableView;
    MISSING_TYPE *emptyContentPlaceholder;
    MISSING_TYPE *bundleID;
    MISSING_TYPE *configuration;
    MISSING_TYPE *channel;
    MISSING_TYPE *rightClickMenu;
    MISSING_TYPE *transactionCell;
    MISSING_TYPE *transactions;
    MISSING_TYPE *timer;
    MISSING_TYPE *enabledTransactionActions;
    MISSING_TYPE *delegate;
    MISSING_TYPE *session;
    MISSING_TYPE *hidePlaceholder;
}

- (void).cxx_destruct;
- (void)resolveIssuePressed:(id)arg1;
- (void)refundPressed:(id)arg1;
- (void)deleteButtonPressed:(id)arg1;
- (void)declineATBPressed:(id)arg1;
- (void)approveATBPressed:(id)arg1;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)primitiveInvalidate;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;
@property(nonatomic) __weak DVTEmptyContentPlaceholder *emptyContentPlaceholder; // @synthesize emptyContentPlaceholder;
@property(nonatomic) __weak NSTableView *tableView; // @synthesize tableView;

@end

