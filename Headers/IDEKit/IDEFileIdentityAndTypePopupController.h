//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSMenuItem, NSPopUpButton;
@protocol DVTCancellable;

@interface IDEFileIdentityAndTypePopupController : IDEInspectorProperty
{
    IDEInspectorKeyPath *_assignedFileTypeKeyPath;
    IDEInspectorKeyPath *_resolvedFilePathKeyPath;
    id <DVTCancellable> _popUpWillPopToken;
    NSMenuItem *_defaultItem;
    NSPopUpButton *_popup;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSPopUpButton *popup; // @synthesize popup=_popup;
- (void)setupRefreshTriggersAndConfigure;
- (void)tearDownRefreshTriggers;
- (void)userDidChangeValue:(id)arg1;
- (void)refresh;
- (void)popUpButtonWillPopUp:(id)arg1;
- (void)refreshPopUpContent;
- (void)refreshPopUpTitle;
- (void)refreshPopUpSelection;
- (id)menuItemWithForFileDataType:(id)arg1;
- (void)showValueItem:(id)arg1;
- (void)showSyntheticTitle:(id)arg1 isPlaceholder:(BOOL)arg2;
- (id)defaultTypeDisplayValue;
- (id)displayedGroups;
- (BOOL)canSelectFileTypeFile;
- (BOOL)canSelectFileTypeDirectory;
- (id)nibName;
- (double)baseline;

@end

