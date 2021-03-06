//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

#import <IDESourceControlUI/DVTTableViewDelegate-Protocol.h>
#import <IDESourceControlUI/DVTTableViewFloatingRowViewController-Protocol.h>
#import <IDESourceControlUI/NSTableViewDataSource-Protocol.h>
#import <IDESourceControlUI/_TtP18IDESourceControlUI45IDESourceControlRepositoriesTableViewDelegate_-Protocol.h>

@class DVTTableView, MISSING_TYPE, NSTableRowView, NSTableView;

@interface _TtC18IDESourceControlUI47IDESourceControlRepositoriesTableViewController : DVTViewController <NSTableViewDataSource, DVTTableViewDelegate, DVTTableViewFloatingRowViewController, _TtP18IDESourceControlUI45IDESourceControlRepositoriesTableViewDelegate_>
{
    MISSING_TYPE *previousSelectedRow;
    MISSING_TYPE *changingSelectionThroughKeyPress;
    MISSING_TYPE *headerRowView;
    MISSING_TYPE *hostViewController;
    MISSING_TYPE *repositoriesTableView;
    MISSING_TYPE *isConfiguringDataSource;
    MISSING_TYPE *dataSource;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)handleMoveUpInTableView;
- (void)tableViewKeyDown:(id)arg1;
- (void)doubleAction:(id)arg1;
- (void)tableViewSelectionIsChanging:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)primitiveInvalidate;
- (void)loadView;
@property(nonatomic, readonly) NSTableView *tableView;
@property(nonatomic) __weak DVTTableView *repositoriesTableView; // @synthesize repositoriesTableView;
@property(nonatomic, retain) NSTableRowView *headerRowView; // @synthesize headerRowView;

@end

