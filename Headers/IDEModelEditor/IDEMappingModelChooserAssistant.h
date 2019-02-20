//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEAssistant.h>

#import <IDEModelEditor/IDEFilePickerViewDelegate-Protocol.h>

@class DVTObservingToken, IDEFilePickerView, IDEFileReference, NSString;

@interface IDEMappingModelChooserAssistant : IDEAssistant <IDEFilePickerViewDelegate>
{
    IDEFilePickerView *filePickerView;
    DVTObservingToken *_selectedItemsObservingToken;
}

+ (id)keyPathsForValuesAffectingCanGoForward;
+ (id)keyPathsForValuesAffectingValidModelSelected;
+ (id)keyPathsForValuesAffectingSelectedModelFileReference;
- (void).cxx_destruct;
- (void)viewWillUninstall;
- (void)loadView;
- (BOOL)canGoForward;
@property(readonly) BOOL validModelSelected;
@property(readonly) IDEFileReference *selectedModelFileReference;
@property(readonly) NSString *filePathStorageKey;
@property(readonly) NSString *fileURLStorageKey;
- (BOOL)shouldAllowSelectionOfURL:(id)arg1;
- (void)filePickerView:(id)arg1 outlineView:(id)arg2 willDisplayCell:(id)arg3 forTableColumn:(id)arg4 item:(id)arg5;
- (void)_configureFilePickerView;
- (void)_recordFileReference;
- (BOOL)canFinish;
- (BOOL)canGoBack;
@property(readonly) NSString *labelText;
- (id)nibBundle;
- (id)nibName;
- (void)primitiveInvalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
