//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXAbstractProductSettingsModule.h>

@class NSButton, NSTextField, PBXExtendedTableView;

@interface PBXProductCocoaJavaSettingsModule : PBXAbstractProductSettingsModule
{
    NSButton *_javaNeededCheckbox;
    NSTextField *_javaRootField;
    PBXExtendedTableView *_javaPathTable;
    NSButton *_addItemButton;
    NSButton *_removeItemButton;
    double _viewHeightSansTable;
    long long _numRowsTableSizedTo;
}

- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
- (void)tableViewSelectionIsChanging:(id)arg1;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)setJavaNeededFrom:(id)arg1;
- (void)update;
- (void)_resizeViewIfNeeded;
- (void)viewDidLoad;
- (void)dealloc;
- (void)_updateButtonState;

@end

