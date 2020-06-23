//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DependencyViewerEdge, DependencyViewerVertex;

@interface DependencyViewerAdjacency : NSObject
{
    BOOL _outgoing;
    BOOL _active;
    DependencyViewerEdge *_edge;
    DependencyViewerVertex *_twin;
}

@property(nonatomic) BOOL active; // @synthesize active=_active;
@property(readonly, nonatomic) BOOL outgoing; // @synthesize outgoing=_outgoing;
@property(readonly, nonatomic) __weak DependencyViewerVertex *twin; // @synthesize twin=_twin;
@property(readonly, nonatomic) __weak DependencyViewerEdge *edge; // @synthesize edge=_edge;
- (void).cxx_destruct;
- (id)initWithEdge:(id)arg1 twin:(id)arg2 outgoing:(BOOL)arg3;

@end

