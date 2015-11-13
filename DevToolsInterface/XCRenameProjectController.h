//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSButtonCell, NSDictionary, NSImageCell, NSMutableDictionary, NSOperationQueue, NSProgressIndicator, NSTextField, NSTreeController, PBXProjectDocument, XCProjectRenameItem, XCProjectRenameOutlineView;

@interface XCRenameProjectController : NSWindowController
{
    PBXProjectDocument *_projectDocument;
    XCProjectRenameItem *_rootItem;
    NSMutableDictionary *_iconDictionary;
    NSDictionary *_blackAttributes;
    NSDictionary *_lightGrayAttributes;
    NSOperationQueue *_operationQueue;
    NSButtonCell *_buttonCell;
    NSImageCell *_imageCell;
    BOOL _processing;
    BOOL _displayingResults;
    NSTreeController *_treeController;
    NSTextField *_newNameField;
    XCProjectRenameOutlineView *_preflightTable;
    NSButton *_okButton;
    NSButton *_cancelButton;
    NSButton *_takeSnapshotCheckbox;
    NSProgressIndicator *_progressIndicator;
    NSTextField *_progressField;
}

@property BOOL processing; // @synthesize processing=_processing;
- (void)cancelAction:(id)arg1;
- (void)okAction:(id)arg1;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (void)controlTextDidChange:(id)arg1;
- (void)displayResults;
- (void)updateState;
- (void)updateAttributedProposedNamesFromItem:(id)arg1;
- (void)updateProposedNamesFromItem:(id)arg1;
- (void)setOriginalNamesForItem:(id)arg1;
- (id)itemsWithErrorsFromItem:(id)arg1;
- (void)validateItemsFromItem:(id)arg1;
- (void)expandAllNonXibChildrenOfNode:(id)arg1;
- (void)removeUnnecessaryTargets;
- (void)removeUnnecessaryXibs;
- (void)coalesceChildrenOfItem:(id)arg1;
- (void)loadChildrenOfXibItem:(id)arg1;
- (void)loadXibsForTargetItem:(id)arg1;
- (void)loadXibs;
- (void)finishLoading;
- (void)loadRenameItems;
- (void)loadIcons;
- (void)loadCells;
- (void)windowDidLoad;
- (void)dealloc;
- (id)initWithProjectDocument:(id)arg1;

@end

