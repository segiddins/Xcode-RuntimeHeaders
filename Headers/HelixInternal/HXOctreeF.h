//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HXOctreeF : NSObject
{
    struct DefaultAccessorOctree m_octStruct;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)getClosestFromPosition:(float)arg1 transformScaling:(id)arg2 maximumUnscaledDistance:(id)arg3 workingData:result: /* Error: Ran out of types for this method. */;
- (void)raycastWithStart:(BOOL)arg1 unitDirection:(float)arg2 doubleSided:(id)arg3 maximumDistance:(id)arg4 workingData:result: /* Error: Ran out of types for this method. */;
- (void)getObjectsIntersectingLineOfType:(long long)arg1 startPoint:(id)arg2 endPoint:result: /* Error: Ran out of types for this method. */;
- (void)getObjectsInFrustumWithLocalNear:(float)arg1 localFar:(float)arg2 localNearWidth:(float)arg3 localNearHeight:(float)arg4 transformedBy:(CDStruct_f1db2b5e)arg5 result:(id)arg6;
- (void)getObjectsInConeAt:(float)arg1 direction:(float)arg2 length:(id)arg3 radius:result: /* Error: Ran out of types for this method. */;
- (void)getObjectsInSphere:(CDStruct_37a3040a)arg1 transformedBy:(CDStruct_f1db2b5e)arg2 result:(id)arg3;
- (void)getObjectsInSphere:(CDStruct_37a3040a)arg1 result:(id)arg2;
- (void)getObjectsInBox:(struct)arg1 transformedBy:(CDStruct_f1db2b5e)arg2 result:(id)arg3;
- (void)getObjectsInBox:(struct)arg1 result:(id)arg2;
- (void)getObjectsContainingPoint:(id)arg1 result: /* Error: Ran out of types for this method. */;
- (void)prepareForQueries:(long long)arg1;
- (void)updateUpTo:(long long)arg1;
- (void)removeObject:(long long)arg1;
- (CDStruct_37a3040a)getBoundingSphereOfObject:(long long)arg1;
- (struct)getBoundingBoxOfObject:(long long)arg1;
- (void)setObject:(long long)arg1 withBoundingSphere:(CDStruct_37a3040a)arg2;
- (void)setObject:(long long)arg1 withBoundingBox:(struct)arg2;
- (BOOL)isObjectValid:(long long)arg1;
@property(readonly) struct octreeBoundingBox;
@property long long maximumDepth;
@property(nonatomic) long long objectIndexRange;
- (id)initWithMaximumDepth:(long long)arg1;
- (id)init;

@end

