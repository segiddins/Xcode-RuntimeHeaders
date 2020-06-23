//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEProjectItemViewController.h>

#import <Xcode3UI/DVTTableViewDelegate-Protocol.h>
#import <Xcode3UI/NSTableViewDataSource-Protocol.h>

@class DVTBorderedView, DVTTableView, NSArray, NSString, Xcode3GameControllersItemModel;

@interface Xcode3GameControllersItemViewController : IDEProjectItemViewController <DVTTableViewDelegate, NSTableViewDataSource>
{
    DVTTableView *_gameControllerTable;
    DVTBorderedView *_gameControllerTableBorder;
    NSArray *_gameControllerInfos;
}

- (void).cxx_destruct;
@property(retain) NSArray *gameControllerInfos; // @synthesize gameControllerInfos=_gameControllerInfos;
@property __weak DVTBorderedView *gameControllerTableBorder; // @synthesize gameControllerTableBorder=_gameControllerTableBorder;
@property __weak DVTTableView *gameControllerTable; // @synthesize gameControllerTable=_gameControllerTable;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)checkboxAction:(id)arg1;
- (void)_updateModelFromUI;
- (void)viewDidLoad;
- (id)initWithEditorItemModel:(id)arg1 portalInfoDelegate:(id)arg2;
- (id)defaultGameControllerInfos;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) Xcode3GameControllersItemModel *model; // @dynamic model;
@property(readonly) Class superclass;

@end
