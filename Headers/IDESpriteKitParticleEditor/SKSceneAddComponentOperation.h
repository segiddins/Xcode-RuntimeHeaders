//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESpriteKitParticleEditor/SKDocumentOperation.h>

@class GKComponent, SKSceneNavigableNode;

@interface SKSceneAddComponentOperation : SKDocumentOperation
{
    GKComponent *_component;
    SKSceneNavigableNode *_node;
}

- (void).cxx_destruct;
- (BOOL)_performRevert;
- (BOOL)_performApply;
- (id)initWithDocument:(id)arg1 addingComponent:(id)arg2 toNode:(id)arg3;

@end
