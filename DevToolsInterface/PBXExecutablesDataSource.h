//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXFileTableDataSource.h>

@interface PBXExecutablesDataSource : PBXFileTableDataSource
{
}

- (void)tableView:(id)arg1 deleteRows:(id)arg2;
- (BOOL)openWorkspaceEditorOnClick;
- (CDUnknownFunctionPointerType)stringFunctionForColumnIdentifier:(id)arg1;
- (void)didBecomeSelectionContext;
- (void)initializeContextMenu:(id)arg1;
- (void)renameItem:(id)arg1;
- (id)summary;
- (id)convertObjectForAction:(id)arg1;
- (CDUnknownFunctionPointerType)sortFunctionForColumnIdentifier:(id)arg1;
- (void)refresh;
- (BOOL)tableView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 typeSelectStringForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 hasChangedActiveState:(BOOL)arg2;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (id)columnForIdentifier:(id)arg1;
- (BOOL)isColumnEditable:(id)arg1;
- (id)optionalColumnIdentifiers:(id)arg1;
- (id)requiredColumnIdentifiers:(id)arg1;
- (void)configureColumnsForTable:(id)arg1;
- (id)detailView;
- (id)_setupMenuDictionary;

@end

