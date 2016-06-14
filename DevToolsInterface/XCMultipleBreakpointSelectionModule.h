//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXProjectModule.h>

@class NSMutableArray, NSString, PBXItemsSelectionModule;

@interface XCMultipleBreakpointSelectionModule : PBXProjectModule
{
    id _breakpointSelectionBox;
    id _sheetTitleTextField;
    id _allButton;
    id _cancelButton;
    id _doneButton;
    PBXItemsSelectionModule *_itemsSelectionModule;
    NSString *_selectAllTitle;
    NSMutableArray *_queue;
}

+ (id)sharedModule;
- (id)initWithModuleNibName:(id)arg1;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)runModalForProject:(id)arg1 relativeToModule:(id)arg2 breakpointSequence:(id)arg3 possibleBreakpoints:(id)arg4 selectedBreakpoints:(id)arg5;
- (void)cancelAction:(id)arg1;
- (void)doneAction:(id)arg1;
- (void)allAction:(id)arg1;
- (BOOL)moduleEnforcesViewMinSize;
- (struct CGSize)viewMinSize;
- (id)moduleWindowFrameAutosaveName;
- (unsigned long long)moduleWindowStyleMask;
- (Class)moduleWindowClass;
- (id)loadModuleWindow;
- (void)viewDidLoad;
- (void)dealloc;

@end

