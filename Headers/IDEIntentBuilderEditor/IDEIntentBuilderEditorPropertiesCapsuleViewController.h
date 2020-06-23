//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEIntentBuilderEditor/IDEIntentBuilderEditorCapsuleTableViewController.h>

#import <IDEIntentBuilderEditor/IDEIntentBuilderEditorTypeMenuDelegate-Protocol.h>
#import <IDEIntentBuilderEditor/NSMenuDelegate-Protocol.h>
#import <IDEIntentBuilderEditor/NSTableViewDataSource-Protocol.h>
#import <IDEIntentBuilderEditor/NSTableViewDelegate-Protocol.h>
#import <IDEIntentBuilderEditor/NSUserInterfaceValidations-Protocol.h>

@class NSArrayController, NSString;

@interface IDEIntentBuilderEditorPropertiesCapsuleViewController : IDEIntentBuilderEditorCapsuleTableViewController <NSTableViewDelegate, NSMenuDelegate, IDEIntentBuilderEditorTypeMenuDelegate, NSTableViewDataSource, NSUserInterfaceValidations>
{
    NSArrayController *_typesArrayController;
}

@property __weak NSArrayController *typesArrayController; // @synthesize typesArrayController=_typesArrayController;
- (void).cxx_destruct;
- (id)_propertiesColumnTitle;
- (void)_addItemToGroup:(id)arg1;
- (void)selectPropertyType:(id)arg1;
- (void)addType;
- (void)addEnum;
- (void)bind;
- (void)unbind;
- (void)menuNeedsUpdate:(id)arg1;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)selectionDidChange;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)awakeFromNib;
- (unsigned long long)minimumNumberOfRows;
- (void)selectionChanged;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)delete:(id)arg1;
- (void)add:(id)arg1;
- (id)title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

