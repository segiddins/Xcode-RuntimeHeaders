//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

@class DVTBorderedView, NSButton, NSTableView;

__attribute__((visibility("hidden")))
@interface _TtC5XCSUI21XCSUIUserGroupsPicker : DVTViewController
{
    // Error parsing type: , name: borderedView
    // Error parsing type: , name: tableView
    // Error parsing type: , name: addButton
    // Error parsing type: , name: removeButton
    // Error parsing type: , name: moveUpCommand
    // Error parsing type: , name: moveDownCommand
    // Error parsing type: , name: insertNewLineCommand
    // Error parsing type: , name: cancelOperationCommand
    // Error parsing type: , name: localEventMonitor
    // Error parsing type: , name: removeUserCallback
    // Error parsing type: , name: selectionCallback
    // Error parsing type: , name: userGroupsController
    // Error parsing type: , name: directoryServices
    // Error parsing type: , name: usersAndGroups
    // Error parsing type: , name: editedRow
    // Error parsing type: , name: queryTimer
    // Error parsing type: , name: editingEnabled
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (BOOL)control:(id)arg1 textShouldBeginEditing:(id)arg2;
- (void)controlTextDidChange:(id)arg1;
- (void)executeQuery:(id)arg1;
- (void)removeSelectedItem:(id)arg1;
- (void)addItem:(id)arg1;
- (void)dealloc;
- (void)loadView;
@property(nonatomic) __weak NSButton *removeButton; // @synthesize removeButton;
@property(nonatomic) __weak NSButton *addButton; // @synthesize addButton;
@property(nonatomic) __weak NSTableView *tableView; // @synthesize tableView;
@property(nonatomic) __weak DVTBorderedView *borderedView; // @synthesize borderedView;

@end

