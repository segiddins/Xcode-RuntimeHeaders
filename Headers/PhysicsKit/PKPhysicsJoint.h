//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhysicsKit/NSCoding-Protocol.h>

@class PKPhysicsBody;

@interface PKPhysicsJoint : NSObject <NSCoding>
{
    BOOL _inUse;
    BOOL _implicit;
    struct b2Joint *_baseJoint;
    PKPhysicsBody *_bodyA;
    PKPhysicsBody *_bodyB;
}

@property(retain, nonatomic) PKPhysicsBody *bodyB; // @synthesize bodyB=_bodyB;
@property(retain, nonatomic) PKPhysicsBody *bodyA; // @synthesize bodyA=_bodyA;
- (void).cxx_destruct;
@property(readonly, nonatomic) double reactionTorque;
@property(readonly, nonatomic) struct CGVector reactionForce;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)create;
@property(readonly, nonatomic) struct b2JointDef *_jointDef;
- (void)set_inUse:(BOOL)arg1;
- (BOOL)_inUse;
- (void)set_implicit:(BOOL)arg1;
- (BOOL)_implicit;
@property(nonatomic) struct b2Joint *_joint;

@end
