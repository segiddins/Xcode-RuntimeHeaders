//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDESpriteKitParticleEditor/NSObject-Protocol.h>

@class NSArray, NSDictionary, SKTileSetEditorView;

@protocol SKTileSetEditorViewDelegate <NSObject>
- (void)tileSetEditorView:(SKTileSetEditorView *)arg1 touchEnded:(unsigned long long)arg2 atLocation:(struct CGPoint)arg3 clickCount:(int)arg4;
- (void)tileSetEditorView:(SKTileSetEditorView *)arg1 touchMoved:(unsigned long long)arg2 atLocation:(struct CGPoint)arg3 clickCount:(int)arg4;
- (void)tileSetEditorView:(SKTileSetEditorView *)arg1 touchBegan:(unsigned long long)arg2 atLocation:(struct CGPoint)arg3 clickCount:(int)arg4;
- (void)tileSetEditorView:(SKTileSetEditorView *)arg1 didPerformDragOperation:(NSDictionary *)arg2 atLocation:(struct CGPoint)arg3;
- (void)tileSetEditorView:(SKTileSetEditorView *)arg1 draggingEntered:(NSArray *)arg2;
- (NSArray *)tileSetEditorViewAcceptedDraggedTypes:(SKTileSetEditorView *)arg1;
- (BOOL)tileSetEditorViewNoSelection:(SKTileSetEditorView *)arg1;
@end

