//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GTFGraph, GTFGraphLayoutLayer;

@interface GTFGraphLayout : NSObject
{
    GTFGraph *_graph;
    GTFGraphLayoutLayer *_layers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GTFGraphLayoutLayer *layers; // @synthesize layers=_layers;
@property(retain, nonatomic) GTFGraph *graph; // @synthesize graph=_graph;
- (void)assignLayers;
- (void)undoRemoveCycles;
- (id)sortedNodes;
- (void)removeCycles;
- (void)_removeCycleDFS:(id)arg1 visistedNodes:(id)arg2 nodesInStack:(id)arg3;
- (void)reAddSelfEdges;
- (void)removeSelfEdges;
- (void)doLayout:(id)arg1;

@end

