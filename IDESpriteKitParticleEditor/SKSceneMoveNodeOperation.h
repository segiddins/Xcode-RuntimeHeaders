//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESpriteKitParticleEditor/SKDocumentOperation.h>

@class SKSceneNavigableNode;

@interface SKSceneMoveNodeOperation : SKDocumentOperation
{
    SKSceneNavigableNode *_navNode;
    SKSceneNavigableNode *_navParent;
    SKSceneNavigableNode *_oldNavParent;
    unsigned long long _oldIndex;
    BOOL _convertTransform;
}

- (void).cxx_destruct;
- (BOOL)revert;
- (BOOL)apply;
- (void)_moveNodeFromParent:(id)arg1 toParent:(id)arg2;
- (id)initWithDocument:(id)arg1 movingNode:(id)arg2 toParent:(id)arg3 convertTransform:(BOOL)arg4;

@end
