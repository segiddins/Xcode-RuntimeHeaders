//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNCylinder.h>

@class SCNNode;

@interface DBGConstraintSelectionCylinder : SCNCylinder
{
    SCNNode *_constraintStartNode;
    SCNNode *_constraintEndNode;
    double _lengthPadding;
}

- (void).cxx_destruct;
@property double lengthPadding; // @synthesize lengthPadding=_lengthPadding;
@property __weak SCNNode *constraintEndNode; // @synthesize constraintEndNode=_constraintEndNode;
@property __weak SCNNode *constraintStartNode; // @synthesize constraintStartNode=_constraintStartNode;

@end

