//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESpriteKitParticleEditor/SKDocumentOperation.h>

@class SKSceneNavigableNode;

@interface SKSceneChangeChildIndexOperation : SKDocumentOperation
{
    unsigned long long _index;
    unsigned long long _oldIndex;
    SKSceneNavigableNode *_navNode;
}

- (void).cxx_destruct;
- (BOOL)_performRevert;
- (BOOL)_performApply;
- (void)_moveChildToIndex:(unsigned long long)arg1;
- (id)initWithDocument:(id)arg1 movingNode:(id)arg2 toIndex:(unsigned long long)arg3;

@end

