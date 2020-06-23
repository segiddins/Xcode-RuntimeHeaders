//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

#import <IDESpriteKitParticleEditor/SKInputViewDelegate-Protocol.h>

@class NSString, SKEmitterNode;

@interface SKParticleEditorView : NSView <SKInputViewDelegate>
{
    struct CGPoint _particlePositionStart;
    SKEmitterNode *_emitter;
}

@property(retain, nonatomic) SKEmitterNode *emitter; // @synthesize emitter=_emitter;
- (void).cxx_destruct;
- (void)inputView:(id)arg1 touchEnded:(unsigned long long)arg2 location:(struct CGPoint)arg3 clickCount:(int)arg4;
- (void)inputView:(id)arg1 touchMoved:(unsigned long long)arg2 location:(struct CGPoint)arg3 clickCount:(int)arg4;
- (void)inputView:(id)arg1 touchBegan:(unsigned long long)arg2 location:(struct CGPoint)arg3 clickCount:(int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

