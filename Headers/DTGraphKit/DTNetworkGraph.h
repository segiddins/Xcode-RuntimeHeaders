//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DTGraphKit/DTBarGraph.h>

@class DTNetworkGraphObject, NSArray;
@protocol DTNetworkGraphLayout;

@interface DTNetworkGraph : DTBarGraph
{
    struct CGRect _contentBox;
    id <DTNetworkGraphLayout> layout;
    NSArray *_nodes;
    NSArray *_edges;
    DTNetworkGraphObject *_selectedObject;
}

- (void).cxx_destruct;
@property(retain) DTNetworkGraphObject *selectedObject; // @synthesize selectedObject=_selectedObject;
@property(retain) NSArray *edges; // @synthesize edges=_edges;
@property(retain) NSArray *nodes; // @synthesize nodes=_nodes;
- (void)mouseDown:(id)arg1;
@property(retain, getter=_layoutDelegate, setter=_setLayoutDelegate:) id <DTNetworkGraphLayout> layout;
- (void)observeModel:(BOOL)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)resetPaths;
- (void)createNodesAndEdges;
- (void)drawXAxis:(struct CGRect)arg1;
- (void)drawYAxis:(struct CGRect)arg1;
- (void)drawContent:(struct CGRect)arg1;
- (void)drawBorder:(struct CGRect)arg1;
- (double)calculateVerticalBorderBuffer;
- (double)calculateHorizontalBorderBuffer;
- (id)init;

@end

