//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESpriteKitParticleEditor/SKDocumentOperation.h>

@class SKNode, SKPhysicsBody;

@interface SKSceneCopyPhysicsBodyPropertiesOperation : SKDocumentOperation
{
    int _sourceType;
    SKPhysicsBody *_sourceCopy;
    int _destType;
    SKPhysicsBody *_destCopy;
    SKNode *_node;
}

- (void).cxx_destruct;
- (BOOL)revert;
- (BOOL)apply;
- (id)initWithDocument:(id)arg1 sourceNode:(id)arg2 destNode:(id)arg3;

@end
