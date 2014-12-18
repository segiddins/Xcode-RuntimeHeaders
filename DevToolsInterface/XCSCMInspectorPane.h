//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXInspectorPaneModule.h>

#import "NSTableViewDelegate.h"

@class NSButton, NSMutableArray, NSProgressIndicator, NSSearchField, NSString, NSTextField, NSTextView, PBXExtendedTableView, PBXFileReference, XCExtendedArrayController;

@interface XCSCMInspectorPane : PBXInspectorPaneModule <NSTableViewDelegate>
{
    NSTextField *_stateTextField;
    NSTextField *_tagTextField;
    NSTextField *_localRevisionTextField;
    NSTextField *_repositoryRevisionTextField;
    PBXExtendedTableView *_revisionsTableView;
    NSTextView *_logTextView;
    NSButton *_compareButton;
    NSButton *_diffButton;
    NSButton *_annotateButton;
    NSButton *_scmUpdateButton;
    NSSearchField *_searchTextField;
    NSTextField *_numItemsTextField;
    NSProgressIndicator *_progressIndicator;
    XCExtendedArrayController *_scmRevisionsController;
    PBXFileReference *_fileReference;
    NSString *_searchString;
    NSMutableArray *_pendingSCMRequests;
}

+ (unsigned long long)panelPosition;
+ (id)alternateLabel;
+ (id)label;
+ (id)inspectableClasses;
+ (BOOL)canInspectSelection:(id)arg1;
- (void)_scmRequestHadProgress:(id)arg1;
- (void)_scmWasEnabledOrDisabled:(id)arg1;
- (void)scmLogDidChange:(id)arg1;
- (void)scmStateDidChange:(id)arg1;
- (void)refresh:(id)arg1;
- (void)scmUpdate:(id)arg1;
- (void)_saveEditedDocumentsIfNeeded;
- (void)_confirmUpdateToSpecificRevisionLoseChangesSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_doSCMUpdateToSpecificRevision:(id)arg1;
- (void)_discardLocalChangesSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_doConfirmAbandonChangesAlertWithDidEndSelector:(SEL)arg1 andRevision:(id)arg2;
- (void)scmAnnotate:(id)arg1;
- (void)scmDiff:(id)arg1;
- (void)scmCompare:(id)arg1;
- (void)currentInspectedItemsChanged:(id)arg1;
- (void)update;
- (void)viewDidLoad;
- (id)theInspectorPane;
- (void)setFileReference:(id)arg1;
- (id)_sourceControlManager;
- (id)project;
- (id)fileReference;
- (void)setSearchString:(id)arg1;
- (id)searchString;
- (void)dealloc;
- (void)tableViewSelectionDidChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

