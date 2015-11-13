//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCNNode;

@interface SCNHitTestResult : NSObject
{
    struct __C3DHitTestResult *_result;
}

+ (id)hitTestResultsFromHitTestResultRef:(struct __CFArray *)arg1;
- (id)description;
@property(readonly, nonatomic) struct CATransform3D modelTransform;
- (struct CGPoint)textureCoordinate;
- (struct CGPoint)textureCoordinatesWithMappingChannel:(long long)arg1;
@property(readonly, nonatomic) struct SCNVector3 worldNormal;
@property(readonly, nonatomic) struct SCNVector3 localNormal;
@property(readonly, nonatomic) struct SCNVector3 worldCoordinates;
@property(readonly, nonatomic) struct SCNVector3 localCoordinates;
@property(readonly, nonatomic) long long faceIndex;
@property(readonly, nonatomic) long long geometryIndex;
@property(readonly, nonatomic) SCNNode *node;
- (void)dealloc;
- (id)initWithResult:(struct __C3DHitTestResult *)arg1;

@end

