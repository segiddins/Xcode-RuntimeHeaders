//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IBEditor, IBMutableIdentityDictionary;

@interface IBEditorTreeNode : NSObject
{
    IBMutableIdentityDictionary *_objectToChildNodesMap;
    IBEditor *_editor;
}

- (void).cxx_destruct;
@property(retain) IBEditor *editor; // @synthesize editor=_editor;
@property(retain) IBMutableIdentityDictionary *objectToChildNodesMap; // @synthesize objectToChildNodesMap=_objectToChildNodesMap;
- (void)_appendDebugDescriptionLinesToArray:(id)arg1 prefix:(id)arg2 prevFrameController:(id)arg3;
- (id)debugDescription;
- (id)init;

@end

