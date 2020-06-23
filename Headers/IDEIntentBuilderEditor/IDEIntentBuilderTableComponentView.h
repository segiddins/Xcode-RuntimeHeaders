//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEIntentBuilderEditor/IDEIntentBuilderComponentView.h>

#import <IDEIntentBuilderEditor/NSTableViewDelegate-Protocol.h>

@class DVTBorderedView, DVTObservingToken, DVTTableView, IDEIntentBuilderArrayController, IDEIntentBuilderEditorImageButton, NSArray, NSString;

@interface IDEIntentBuilderTableComponentView : IDEIntentBuilderComponentView <NSTableViewDelegate>
{
    DVTObservingToken *_arrayObservationToken;
    IDEIntentBuilderArrayController *primaryControl;
    NSArray *_tableColumns;
    Class _itemClass;
    id _addTarget;
    SEL _addSelector;
    IDEIntentBuilderEditorImageButton *_addButton;
    id _deleteTarget;
    SEL _deleteSelector;
    IDEIntentBuilderEditorImageButton *_deleteButton;
    DVTTableView *_tableView;
    DVTBorderedView *_bottomBar;
}

@property __weak DVTBorderedView *bottomBar; // @synthesize bottomBar=_bottomBar;
@property __weak DVTTableView *tableView; // @synthesize tableView=_tableView;
@property __weak IDEIntentBuilderEditorImageButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property SEL deleteSelector; // @synthesize deleteSelector=_deleteSelector;
@property __weak id deleteTarget; // @synthesize deleteTarget=_deleteTarget;
@property __weak IDEIntentBuilderEditorImageButton *addButton; // @synthesize addButton=_addButton;
@property SEL addSelector; // @synthesize addSelector=_addSelector;
@property __weak id addTarget; // @synthesize addTarget=_addTarget;
@property(retain) Class itemClass; // @synthesize itemClass=_itemClass;
@property(retain) NSArray *tableColumns; // @synthesize tableColumns=_tableColumns;
@property(retain) IDEIntentBuilderArrayController *primaryControl; // @synthesize primaryControl;
- (void).cxx_destruct;
- (void)_resize;
- (void)_updateContentViewFrame;
- (void)_removeTableColumns;
- (void)_addColumns;
- (void)deleteButtonPressed:(id)arg1;
- (void)addButtonPressed:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)primitiveInvalidate;
- (void)unbind;
- (BOOL)bindTo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

