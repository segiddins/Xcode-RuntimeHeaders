//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXModule.h>

#import <DevToolsInterface/NSComboBoxDataSource-Protocol.h>

@class NSButton, NSMutableDictionary, NSPopUpButton, NSString, PBXExtendedTableView, PBXProject, SCMRootToRepositoryMap;

@interface XCRootsEditorModule : PBXModule <NSComboBoxDataSource>
{
    NSPopUpButton *_scmSystemPopup;
    NSButton *_defaultButton;
    NSButton *_cancelButton;
    NSButton *_addButton;
    NSButton *_removeButton;
    PBXExtendedTableView *_tableView;
    PBXProject *_project;
    SCMRootToRepositoryMap *_rootToRepositoryMap;
    NSMutableDictionary *_popupsForRoots;
}

+ (void)initialize;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 dataCellForTableColumn:(id)arg2 row:(long long)arg3;
- (void)populateSCMPopup:(id)arg1 withRoot:(id)arg2;
- (void)chooseSCMRepository:(id)arg1;
- (void)chooseSCMSystemAction:(id)arg1;
- (void)configureRepositories:(id)arg1;
- (void)removeAction:(id)arg1;
- (void)addAction:(id)arg1;
- (void)cancelDefaultAction:(id)arg1;
- (void)performDefaultAction:(id)arg1;
- (void)chooseProjectRootDirectory:(id)arg1 forcePrompt:(BOOL)arg2;
- (void)enableButtons;
- (void)setDefaultButtonTitle:(id)arg1;
- (void)removeRoot:(id)arg1;
- (void)addRoot:(id)arg1;
- (id)roots;
- (void)runSheetModalForWindow:(id)arg1 modalDelegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void *)arg4;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)pushToModel;
- (void)pullFromModel;
- (Class)selectedRepositoryClass;
- (struct CGSize)viewMinSize;
- (unsigned long long)moduleWindowStyleMask;
- (Class)moduleWindowClass;
- (void)repositoriesChanged:(id)arg1;
- (id)loadModuleWindow;
- (void)populateSCMSystemPopup;
- (void)reloadData;
- (id)project;
- (void)disconnect;
- (void)dealloc;
- (id)initWithModuleNibName:(id)arg1;
- (id)initWithProject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

