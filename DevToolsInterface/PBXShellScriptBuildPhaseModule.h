//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXBuildPhaseModule.h>

#import <DevToolsInterface/NSTextViewDelegate-Protocol.h>

@class NSButton, NSMatrix, NSString, NSTextField, NSTextView, NSUndoManager, PBXCompletionManager;

@interface PBXShellScriptBuildPhaseModule : PBXBuildPhaseModule <NSTextViewDelegate>
{
    NSTextField *_shellPathField;
    NSTextField *_shellWorkingDirField;
    NSTextView *_shellScriptText;
    NSTextField *_neededFilesField;
    NSTextField *_producedFilesField;
    NSMatrix *_actionMaskSwitches;
    NSButton *_onlyWhenInstallingSwitch;
    double _viewHeightSansShellScriptText;
    PBXCompletionManager *_completionManager;
    NSUndoManager *_scriptUndo;
    BOOL _resizingText;
}

- (BOOL)validateLocalMenuItem:(id)arg1;
- (void)redo:(id)arg1;
- (void)undo:(id)arg1;
- (id)undoManagerForTextView:(id)arg1;
- (void)takeOnlyWhenInstallingFlagFrom:(id)arg1;
- (void)takeProducedFilenamesFrom:(id)arg1;
- (void)takeNeededFilenamesFrom:(id)arg1;
- (void)takeShellPathFrom:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (void)textFrameDidChange:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)update;
- (void)_resizeViewIfNeeded;
- (void)viewDidLoad;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)dealloc;
- (id)initWithBuildPhase:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

