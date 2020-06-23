//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DTGraphKit/DTNetworkGraphObject.h>

@class DTNetworkGraphNode;

@interface DTNetworkGraphEdge : DTNetworkGraphObject
{
    DTNetworkGraphNode *nodeA;
    DTNetworkGraphNode *nodeB;
    struct CGPoint controlPoint1;
    struct CGPoint controlPoint2;
    BOOL straighLine;
    BOOL pointerToNodeA;
    BOOL pointerToNodeB;
    double length;
}

@property double length; // @synthesize length;
@property BOOL straighLine; // @synthesize straighLine;
@property BOOL pointerToNodeB; // @synthesize pointerToNodeB;
@property BOOL pointerToNodeA; // @synthesize pointerToNodeA;
@property struct CGPoint controlPoint2; // @synthesize controlPoint2;
@property struct CGPoint controlPoint1; // @synthesize controlPoint1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

