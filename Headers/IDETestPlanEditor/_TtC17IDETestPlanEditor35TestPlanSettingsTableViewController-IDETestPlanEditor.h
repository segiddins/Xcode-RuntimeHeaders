//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDETestPlanEditor/_TtC17IDETestPlanEditor35TestPlanSettingsTableViewController.h>

#import <IDETestPlanEditor/DVTOutlineViewDelegate-Protocol.h>
#import <IDETestPlanEditor/NSControlTextEditingDelegate-Protocol.h>
#import <IDETestPlanEditor/NSOutlineViewDataSource-Protocol.h>

@interface _TtC17IDETestPlanEditor35TestPlanSettingsTableViewController (IDETestPlanEditor) <NSOutlineViewDataSource, NSControlTextEditingDelegate, DVTOutlineViewDelegate>
+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)control:(id)arg1 didFailToFormatString:(id)arg2 errorDescription:(id)arg3;
- (void)clickedOutlineView:(id)arg1;
- (BOOL)outlineView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (void)popUpButtonWillPopUp:(id)arg1;
- (void)commitEditForTextField:(id)arg1;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
@end

