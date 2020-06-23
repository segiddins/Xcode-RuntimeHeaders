//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

#import <DebuggerUI/NSOutlineViewDataSource-Protocol.h>
#import <DebuggerUI/NSOutlineViewDelegate-Protocol.h>

@class DBGSnapshotProperty, IDEInspectorKeyPath, NSOutlineView, NSString;

@interface DBGDynamicInspectorProperty : IDEInspectorProperty <NSOutlineViewDataSource, NSOutlineViewDelegate>
{
    NSOutlineView *_outlineView;
    IDEInspectorKeyPath *_valueKeyPath;
    DBGSnapshotProperty *_property;
}

- (void).cxx_destruct;
@property(nonatomic) __weak DBGSnapshotProperty *property; // @synthesize property=_property;
@property(retain) IDEInspectorKeyPath *valueKeyPath; // @synthesize valueKeyPath=_valueKeyPath;
@property __weak NSOutlineView *outlineView; // @synthesize outlineView=_outlineView;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (void)updateHeightForOutlineView;
- (double)heightForOutline;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (double)baseline;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

