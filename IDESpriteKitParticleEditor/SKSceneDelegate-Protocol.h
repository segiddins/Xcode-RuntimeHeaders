//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESpriteKitParticleEditor/NSObject-Protocol.h>

@class SKScene;

@protocol SKSceneDelegate <NSObject>

@optional
- (void)didFinishUpdateForScene:(SKScene *)arg1;
- (void)didApplyConstraintsForScene:(SKScene *)arg1;
- (void)didSimulatePhysicsForScene:(SKScene *)arg1;
- (void)didEvaluateActionsForScene:(SKScene *)arg1;
- (void)update:(double)arg1 forScene:(SKScene *)arg2;
@end

