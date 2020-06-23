//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESceneKitEditor/SKEDocumentEdition.h>

@class SCNNode;

@interface SKEDocumentReparentNodeEdition : SKEDocumentEdition
{
    SCNNode *_node;
    SCNNode *_oldParent;
    SCNNode *_newParent;
    unsigned long long _oldIndex;
    unsigned long long _newIndex;
}

- (void).cxx_destruct;
- (BOOL)revert;
- (BOOL)apply;
- (BOOL)_reparentWithOldParent:(id)arg1 newParent:(id)arg2 oldIndex:(unsigned long long)arg3 newIndex:(unsigned long long)arg4;
- (id)initWithDocument:(id)arg1 node:(id)arg2 newParentNode:(id)arg3 index:(unsigned long long)arg4;

@end

