//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXModule.h>

#import <DevToolsInterface/NSMenuDelegate-Protocol.h>
#import <DevToolsInterface/NSOpenSavePanelDelegate-Protocol.h>

@class NSButton, NSIndexSet, NSMenu, NSMenuItem, NSMutableDictionary, NSPathControl, NSPopUpButton, NSScrollView, NSSplitView, NSString, NSTabView, NSTextField, NSTreeController, NSView, PBXExtendedOutlineView, XCBinderItem, XCOrganizerFileSystemNodeInfo, XCUserScriptGroup, XCUserScriptNode;

@interface XCUserScriptEditorModule : PBXModule <NSMenuDelegate, NSOpenSavePanelDelegate>
{
    NSTreeController *_treeController;
    NSSplitView *_splitView;
    NSScrollView *_outlineScrollView;
    PBXExtendedOutlineView *_outlineView;
    NSMenu *_addItemMenu;
    NSButton *_removeItemButton;
    BOOL _viewsLoaded;
    NSTabView *_editorTabView;
    NSView *_emptyEditorView;
    NSView *_textEditorView;
    id _editorTextView;
    NSView *_fileEditorView;
    NSView *_textRunActionEditorView;
    NSView *_fileRunActionEditorView;
    NSView *_fullRightEditorView;
    NSTabView *_fullEditorTabView;
    NSView *_restrictedRightEditorView;
    NSTabView *_restrictedEditorTabView;
    NSButton *_okButton;
    NSButton *_cancelButton;
    NSMenuItem *_addGroupMenuItem;
    NSPathControl *_pathControl;
    NSTextField *_scriptInputLabel;
    NSTextField *_scriptOutputLabel;
    NSTextField *_scriptErrorLabel;
    NSPopUpButton *_scriptInputPopup;
    NSPopUpButton *_scriptOutputPopup;
    NSPopUpButton *_scriptErrorPopup;
    XCBinderItem *_binderItem;
    XCOrganizerFileSystemNodeInfo *_binderNode;
    int _editingActionType;
    NSMutableDictionary *_pathToActionsMapping;
    NSString *_currentBinderPath;
    XCUserScriptGroup *_rootNode;
    NSIndexSet *_allowedScriptInputs;
    NSIndexSet *_allowedScriptOutputs;
    NSIndexSet *_allowedScriptErrors;
    NSIndexSet *_allowedScriptWorkingDirectories;
    int _defaultInputSource;
    int _defaultOutputDestination;
    int _defaultErrorDestination;
    int _defaultWorkingDirectory;
    BOOL _suppressObservations;
    BOOL _isGlobalEditor;
    BOOL _allowsScriptIO;
    Class _scriptClass;
    NSString *_editorStatusMessage;
}

+ (void)runStartupScript;
+ (void)setShouldRunStartupScript:(BOOL)arg1;
+ (BOOL)shouldRunStartupScript;
+ (id)startupScript;
+ (id)startupScriptLocation;
+ (id)locationForSavingUserScriptsPlist;
+ (id)userScriptsPlistLocation;
+ (id)editorModuleForBinderActionsOfType:(int)arg1;
+ (id)globalEditorModule;
+ (BOOL)accessInstanceVariablesDirectly;
@property BOOL allowsScriptIO; // @synthesize allowsScriptIO=_allowsScriptIO;
@property int editingActionType; // @synthesize editingActionType=_editingActionType;
@property BOOL isGlobalEditor; // @synthesize isGlobalEditor=_isGlobalEditor;
@property(copy) NSString *editorStatusMessage; // @synthesize editorStatusMessage=_editorStatusMessage;
@property int defaultWorkingDirectory; // @synthesize defaultWorkingDirectory=_defaultWorkingDirectory;
@property int defaultErrorDestination; // @synthesize defaultErrorDestination=_defaultErrorDestination;
@property int defaultOutputDestination; // @synthesize defaultOutputDestination=_defaultOutputDestination;
@property int defaultInputSource; // @synthesize defaultInputSource=_defaultInputSource;
@property(copy) NSIndexSet *allowedScriptWorkingDirectories; // @synthesize allowedScriptWorkingDirectories=_allowedScriptWorkingDirectories;
@property(copy) NSIndexSet *allowedScriptErrors; // @synthesize allowedScriptErrors=_allowedScriptErrors;
@property(copy) NSIndexSet *allowedScriptOutputs; // @synthesize allowedScriptOutputs=_allowedScriptOutputs;
@property(copy) NSIndexSet *allowedScriptInputs; // @synthesize allowedScriptInputs=_allowedScriptInputs;
@property(readonly) XCUserScriptGroup *rootNode; // @synthesize rootNode=_rootNode;
- (id)_groupFromDirectory:(id)arg1;
- (id)_nodesFromPasteboard:(id)arg1;
- (id)_nodeFromObject:(id)arg1;
- (void)_insertFile:(id)arg1;
- (void)_insertNode:(id)arg1;
- (void)_moveNode:(id)arg1 under:(id)arg2 atIndex:(unsigned long long)arg3;
@property(readonly) unsigned long long indexForInsertion; // @dynamic indexForInsertion;
@property(readonly) XCUserScriptGroup *parentNodeForInsertion; // @dynamic parentNodeForInsertion;
@property(retain) XCUserScriptNode *selectedNode; // @dynamic selectedNode;
- (void)_pullFromPathToActionsMapping;
- (void)_pushToPathToActionsMapping;
- (void)_setupMainPathControl;
- (void)_saveGlobalTreeContent;
- (void)_loadGlobalTreeContent;
- (void)_configureAsGlobalEditor;
- (void)_loadNibIfNeeded;
@property Class userScriptClass; // @dynamic userScriptClass;
- (void)_reloadScripts:(id)arg1;
- (void)changeSourceLanguageAction:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)editFileScript:(id)arg1;
- (BOOL)canEditSelectedFileScript;
- (void)chooseFileScriptLocation:(id)arg1;
- (void)duplicateScript:(id)arg1;
- (id)uniqueNameForDuplicateOfNode:(id)arg1;
- (void)addNewTextScript:(id)arg1;
- (void)addNewWorkflow:(id)arg1;
- (void)addNewFileScript:(id)arg1;
- (void)addNewFileScriptConformingTo:(id)arg1;
- (void)addNewSeparator:(id)arg1;
- (void)addNewGroup:(id)arg1;
- (void)beginEditingUserScripts:(id)arg1;
- (void)endSheetWithCancel:(id)arg1;
- (void)endSheetWithOK:(id)arg1;
- (void)beginModalEditingForWindow:(id)arg1 delegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void *)arg4;
- (void)_sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)openPanelDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (BOOL)panel:(id)arg1 shouldShowFilename:(id)arg2;
- (void)menuNeedsUpdate:(id)arg1;
- (BOOL)outlineView:(id)arg1 createItemsFromPasteboard:(id)arg2;
- (void)outlineView:(id)arg1 deleteItems:(id)arg2;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (unsigned long long)outlineView:(id)arg1 draggingSourceOperationMaskForLocal:(BOOL)arg2;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)pathControl:(id)arg1 acceptDrop:(id)arg2;
- (unsigned long long)pathControl:(id)arg1 validateDrop:(id)arg2;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (id)validatedKeyEquivalent:(id)arg1;
- (void)keyEquivalentCellDidEndEditing:(id)arg1;
- (BOOL)allowsMultipleKeyEquivalents;
- (void)fetchEditedActionsOfType:(int)arg1 forBinderItem:(id)arg2 andNode:(id)arg3;
- (void)prepareToEditActionsForBinderItem:(id)arg1 andNode:(id)arg2;
- (void)mainPathControlClicked:(id)arg1;
- (void)updateRootNodeForClickedCell:(id)arg1;
- (void)saveScriptTreeContentToFile:(id)arg1;
- (void)loadScriptTreeContentFromFile:(id)arg1;
- (void)loadScriptTreeFromArray:(id)arg1;
- (id)scriptTreeAsPropertyList;
- (unsigned long long)moduleWindowStyleMask;
- (Class)moduleWindowClass;
- (id)moduleNibName;
- (BOOL)moduleEnforcesViewMinSize;
- (struct CGSize)viewMinSize;
- (void)updateStatusMessageForKeyEquivalent:(id)arg1;
@property(readonly) BOOL allowsGroups; // @dynamic allowsGroups;
- (id)filteredScriptErrorValues;
- (id)filteredScriptOutputValues;
- (id)filteredScriptWorkingDirectoryValues;
- (id)filteredScriptInputValues;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateTextViewLanguage;
- (void)_delayedSave:(id)arg1;
- (void)closeModule;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

