//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorViewController.h>

#import <Xcode3UI/NSTableViewDelegate-Protocol.h>

@class IDENavigatorDataCell, NSArray, NSArrayController, NSMutableArray, NSString, Xcode3Project, Xcode3TargetMembershipInspectorContentView;

@interface Xcode3TargetMembershipInspector : IDEInspectorViewController <NSTableViewDelegate>
{
    NSMutableArray *_targetMemberships;
    NSArrayController *_targetMembershipsArrayController;
    Xcode3TargetMembershipInspectorContentView *_inspectorContentView;
    IDENavigatorDataCell *_nameAndImageCell;
    NSArray *_cachedInspectedItems;
    Xcode3Project *_cachedProject;
    NSArray *_cachedReferences;
}

@property(retain) NSArray *targetMemberships; // @synthesize targetMemberships=_targetMemberships;
- (void).cxx_destruct;
- (id)nibBundle;
- (id)nibName;
- (void)primitiveInvalidate;
- (void)loadView;
- (void)_itemsChangedInProject:(id)arg1;
- (void)selectionChanged:(id)arg1;
- (void)_completeUpdate;
- (id)tableView:(id)arg1 dataCellForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (void)_updateTargetMemberships;
- (void)_addRef:(id)arg1 toList:(id)arg2;
- (void)_updateCachedInspectedItems;
- (void)_stopListeningForProjectChanges;
- (void)_startListeningForProjectChanges;
- (id)_references;
- (id)_pbxProject;
- (id)_project;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

