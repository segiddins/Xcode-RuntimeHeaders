//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEIntentBuilderEditor/IDEIntentBuilderEditorCapsuleViewController.h>

@class DVTObservingToken, IDEIntentBuilderEditorImageButton, NSArrayController, NSTableView;

@interface IDEIntentBuilderEditorCapsuleTableViewController : IDEIntentBuilderEditorCapsuleViewController
{
    DVTObservingToken *_contentArrayObservationToken;
    NSTableView *_tableView;
    NSArrayController *_contentArrayController;
    IDEIntentBuilderEditorImageButton *_addButton;
    IDEIntentBuilderEditorImageButton *_deleteButton;
}

@property __weak IDEIntentBuilderEditorImageButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property __weak IDEIntentBuilderEditorImageButton *addButton; // @synthesize addButton=_addButton;
@property __weak NSArrayController *contentArrayController; // @synthesize contentArrayController=_contentArrayController;
@property __weak NSTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (BOOL)tableView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
@property(readonly, nonatomic) double verticalContentMargin;
@property(readonly, nonatomic) unsigned long long numberOfRows;
@property(readonly, nonatomic) unsigned long long minimumNumberOfRows;
- (void)resize;
- (void)selectionChanged;
- (id)selectedObjects;
- (void)delete:(id)arg1;
- (void)add:(id)arg1;
- (void)bind;
- (void)unbind;
- (void)loadView;

@end

