//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXFosterParent.h>

#import <DevToolsInterface/PBXUIDeletionAssistant-Protocol.h>

@interface PBXTargetProxy : PBXFosterParent <PBXUIDeletionAssistant>
{
}

+ (BOOL)openAllTargetTypes;
- (BOOL)openWithProjectDocument:(id)arg1;
- (void)_confirmBuildPhaseDeletionSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)deleteApplicableElements:(id)arg1 fromModule:(id)arg2;
- (unsigned long long)outlineView:(id)arg1 validateDropOfDraggedItems:(id)arg2 withDraggingInfo:(id)arg3 proposedItem:(id)arg4 proposedChildIndex:(long long)arg5 forModule:(id)arg6;
- (BOOL)acceptsDraggedItem:(id)arg1;
- (BOOL)outlineView:(id)arg1 acceptDropOfDraggedItems:(id)arg2 withDraggingInfo:(id)arg3 item:(id)arg4 childIndex:(long long)arg5 forModule:(id)arg6;
- (BOOL)acceptsItem:(id)arg1;
- (void)insertItems:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeItem:(id)arg1;
- (BOOL)allowsEditingOfChildren;
- (void)uiParentDidChange;
- (void)uiParentWillChange;
- (BOOL)canDelete;
- (BOOL)canRename;
- (void)dealloc;
- (void)buildPhaseRemoved:(id)arg1;
- (void)buildPhaseAdded:(id)arg1;
- (void)buildPhasesMoved:(id)arg1;
- (void)_targetWillBeRemoved:(id)arg1;
- (void)recomputeDependencies;
- (void)_dependencyRemoved:(id)arg1;
- (void)_dependencyAdded:(id)arg1;
- (id)name;
- (void)setRepresentedObject:(id)arg1;
- (void)setIsLeaf:(BOOL)arg1;
- (id)displayName;

@end

