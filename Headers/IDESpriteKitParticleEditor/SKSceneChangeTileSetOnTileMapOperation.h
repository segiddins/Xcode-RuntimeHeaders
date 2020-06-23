//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESpriteKitParticleEditor/SKDocumentOperation.h>

@class NSString, SKTileMapNode;

@interface SKSceneChangeTileSetOnTileMapOperation : SKDocumentOperation
{
    SKTileMapNode *_tileMapNode;
    unsigned int *_oldTiles;
    unsigned int *_newTiles;
    NSString *_oldTileSetName;
    NSString *_newTileSetName;
}

- (void).cxx_destruct;
- (BOOL)_performRevert;
- (BOOL)_performApply;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 tileMap:(id)arg2 oldTileSetName:(id)arg3 newTileSetName:(id)arg4 preChangeTileArray:(unsigned int *)arg5 postChangeTileArray:(unsigned int *)arg6;

@end

