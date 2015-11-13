//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class NSArray, NSDictionary, SCNPhysicsBehavior, SCNPhysicsBody, SCNPhysicsShape;
@protocol SCNPhysicsContactDelegate;

@protocol SCNPhysicsWorldJSExport <JSExport>
@property id <SCNPhysicsContactDelegate> contactDelegate;
@property(nonatomic) double timeStep;
@property(nonatomic) double speed;
@property(nonatomic) struct SCNVector3 gravity;
- (void)updateCollisionPairs;
- (NSArray *)convexSweepTestWithShape:(SCNPhysicsShape *)arg1 fromTransform:(struct CATransform3D)arg2 toTransform:(struct CATransform3D)arg3 options:(NSDictionary *)arg4;
- (NSArray *)contactTestWithBody:(SCNPhysicsBody *)arg1 options:(NSDictionary *)arg2;
- (NSArray *)contactTestBetweenBody:(SCNPhysicsBody *)arg1 andBody:(SCNPhysicsBody *)arg2 options:(NSDictionary *)arg3;
- (NSArray *)rayTestWithSegmentFromPoint:(struct SCNVector3)arg1 toPoint:(struct SCNVector3)arg2 options:(NSDictionary *)arg3;
- (NSArray *)allBehaviors;
- (void)removeAllBehaviors;
- (void)removeBehavior:(SCNPhysicsBehavior *)arg1;
- (void)addBehavior:(SCNPhysicsBehavior *)arg1;
@end

