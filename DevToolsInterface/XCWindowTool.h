//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCModuleDock.h>

@class NSDictionary, PBXModule;

@interface XCWindowTool : XCModuleDock
{
    NSDictionary *_definition;
    BOOL _shouldBePersisted;
    PBXModule *_windowShouldCloseSubmodule;
}

- (id)moduleToolbarIdentifier;
- (id)moduleToolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)moduleToolbarDefaultItemIdentifiers;
- (id)moduleToolbarAllowedItemIdentifiers;
- (void)_projectNameChanged:(id)arg1;
- (id)windowShouldCloseSubmodule;
- (void)setWindowShouldCloseSubmodule:(id)arg1;
- (void)moduleWasDisplayed;
- (void)markAsLastActive;
- (void)viewWasInstalled;
- (id)mainEditor;
- (void)moduleDidChangeLabel:(id)arg1;
- (id)loadModuleWindow;
- (BOOL)windowShouldClose:(id)arg1;
- (void)removeUnusedEditors;
- (BOOL)shouldBePersisted;
- (void)setShouldBePersisted:(BOOL)arg1;
- (id)toolName;
- (id)identifier;
- (void)dealloc;
- (id)duplicateTool;
- (id)initWithDefinition:(id)arg1;

@end

