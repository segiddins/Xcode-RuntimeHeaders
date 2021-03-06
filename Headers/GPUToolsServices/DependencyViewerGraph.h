//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DependencyViewerCluster, NSMutableArray, NSMutableDictionary;

@interface DependencyViewerGraph : NSObject
{
    DependencyViewerCluster *_rootCluster;
    NSMutableArray *_vertices;
    NSMutableArray *_edges;
    NSMutableArray *_clusters;
    unsigned long long _vertexIDs;
    unsigned long long _edgeIDs;
    unsigned long long _clusterIDs;
    NSMutableDictionary *_vertexToClusterMap;
    NSMutableDictionary *_clusterToClusterVertexMap;
    NSMutableDictionary *_clusterVertexToClusterMap;
}

- (void).cxx_destruct;
- (BOOL)isVertexHidden:(id)arg1;
- (void)discloseOutlineItem:(id)arg1;
- (id)clusterForOutlineItem:(id)arg1;
- (id)vertexForOutlineItem:(id)arg1;
- (id)clusterOf:(id)arg1;
- (void)expandClusterVertex:(id)arg1;
- (void)expandCluster:(id)arg1;
- (void)collapseCluster:(id)arg1;
- (id)createClusterInCluster:(id)arg1 data:(id)arg2 outlineItem:(id)arg3;
- (id)createCluster:(id)arg1 outlineItem:(id)arg2;
- (id)clusters;
- (void)populateClusterOutputs;
- (void)addOutput:(id)arg1 toClusterVertex:(id)arg2 fromEnclosedVertex:(id)arg3;
- (id)rootCluster;
- (id)createEdgeFrom:(id)arg1 to:(id)arg2 atPort:(unsigned long long)arg3;
- (id)_createEdgeFrom:(id)arg1 to:(id)arg2 atPort:(unsigned long long)arg3;
- (id)edges;
- (id)_commonAncestor:(id)arg1 clusterB:(id)arg2;
- (id)createVertexInCluster:(id)arg1 data:(id)arg2 outlineItem:(id)arg3 ports:(id)arg4;
- (id)createVertex:(id)arg1 data:(id)arg2 outlineItem:(id)arg3;
- (id)vertices;
- (id)layout;
- (id)init;

@end

