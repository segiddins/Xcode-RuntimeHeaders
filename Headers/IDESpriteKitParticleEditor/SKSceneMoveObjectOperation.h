//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESpriteKitParticleEditor/SKDocumentOperation.h>

@class SKSceneNavigableObject;

@interface SKSceneMoveObjectOperation : SKDocumentOperation
{
    long long _index;
    long long _oldIndex;
    SKSceneNavigableObject *_object;
}

- (void).cxx_destruct;
- (BOOL)_performRevert;
- (BOOL)_performApply;
- (void)_moveChildToIndex:(long long)arg1;
- (id)initWithDocument:(id)arg1 object:(id)arg2 index:(long long)arg3;

@end

