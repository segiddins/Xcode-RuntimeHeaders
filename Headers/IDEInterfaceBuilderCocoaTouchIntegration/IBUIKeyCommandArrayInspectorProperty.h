//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/NSTableViewDataSource-Protocol.h>

@class DVTBorderedView, DVTGradientImageButton, IBKeyEquivalentEntryField, IDEControlGroup, IDEInspectorKeyPath, NSArray, NSString, NSTableView, NSTextField;

@interface IBUIKeyCommandArrayInspectorProperty : IDEInspectorProperty <NSTableViewDataSource>
{
    NSTableView *itemsTableView;
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_enabledKeyPath;
    IDEInspectorKeyPath *_selectorNamesKeyPath;
    NSArray *_reflectedValues;
    NSTextField *_keyEquivalentLabelField;
    IBKeyEquivalentEntryField *_keyEquivalentField;
    NSTextField *_selectorNameField;
    IDEControlGroup *_controlGroup;
    DVTBorderedView *_controlBar;
    DVTBorderedView *_topBorderedView;
    DVTGradientImageButton *_addButton;
    DVTGradientImageButton *_removeButton;
}

+ (Class)inspectableClass;
@property(retain, nonatomic) DVTGradientImageButton *removeButton; // @synthesize removeButton=_removeButton;
@property(retain, nonatomic) DVTGradientImageButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) DVTBorderedView *topBorderedView; // @synthesize topBorderedView=_topBorderedView;
@property(retain, nonatomic) DVTBorderedView *controlBar; // @synthesize controlBar=_controlBar;
@property(retain, nonatomic) IDEControlGroup *controlGroup; // @synthesize controlGroup=_controlGroup;
@property(retain, nonatomic) NSTextField *selectorNameField; // @synthesize selectorNameField=_selectorNameField;
@property(retain, nonatomic) IBKeyEquivalentEntryField *keyEquivalentField; // @synthesize keyEquivalentField=_keyEquivalentField;
@property(retain, nonatomic) NSTextField *keyEquivalentLabelField; // @synthesize keyEquivalentLabelField=_keyEquivalentLabelField;
- (void).cxx_destruct;
- (void)removeRow:(id)arg1;
- (BOOL)canRemoveRow;
- (void)addRow:(id)arg1;
- (BOOL)shouldIgnoreKey;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)titleChanged:(id)arg1;
- (void)actionNameChanged:(id)arg1;
- (void)keyEquivalentChanged:(id)arg1;
- (void)commitChangesWithBlock:(CDUnknownBlockType)arg1;
- (void)updateKeyInputAndSelector;
- (id)selectedKeyCommand;
- (long long)selectedIndex;
- (void)updateRemoveButtonEnabledState;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (double)baseline;
- (void)pushValuesToModel:(id)arg1;
- (void)setupControlBarAfterLoading;
- (id)initWithPropertyDefinition:(id)arg1 andController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

