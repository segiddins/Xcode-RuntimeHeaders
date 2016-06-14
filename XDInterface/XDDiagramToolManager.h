//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XDInterface/XDComponentManager.h>

@class NSArray, NSMapTable, NSToolbarItem, XDDiagramTool;

@interface XDDiagramToolManager : XDComponentManager
{
    XDDiagramTool *_currentDiagramTool;
    NSMapTable *_identifierByTag;
    NSToolbarItem *_toolbarItem;
    NSArray *_toolIdentifiers;
}

+ (id)componentFileExtension;
+ (void)initialize;
- (void)_diagramToolsToolbarItemAction:(id)arg1;
- (void)setDiagramToolIdentifiers:(id)arg1;
- (void)setDiagramToolsDelegatesTo:(id)arg1;
- (id)diagramToolsToolbarItem;
- (id)_arrangedDiagramToolIdentifiers;
- (void)selectDiagramToolWithIdentifier:(id)arg1;
- (void)selectDiagramTool:(id)arg1;
- (id)currentDiagramTool;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

