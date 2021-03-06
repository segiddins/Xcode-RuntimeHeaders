//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEModelEditor/XDComponentManager.h>

@class NSArray, NSMutableDictionary, NSToolbarItem, XDDiagramTool;

@interface XDDiagramToolManager : XDComponentManager
{
    XDDiagramTool *_currentDiagramTool;
    NSMutableDictionary *_identifierByTag;
    NSToolbarItem *_toolbarItem;
    NSArray *_toolIdentifiers;
}

+ (id)componentFileExtension;
+ (void)initialize;
- (void).cxx_destruct;
- (void)_diagramToolsToolbarItemAction:(id)arg1;
- (void)setDiagramToolIdentifiers:(id)arg1;
- (void)setDiagramToolsDelegatesTo:(id)arg1;
- (id)diagramToolsToolbarItem;
- (id)_arrangedDiagramToolIdentifiers;
- (void)selectDiagramToolWithIdentifier:(id)arg1;
- (void)selectDiagramTool:(id)arg1;
- (id)currentDiagramTool;
- (void)primitiveInvalidate;
- (id)init;

@end

