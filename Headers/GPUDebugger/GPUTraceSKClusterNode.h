//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/GPUTraceSKSimpleEncoderNode.h>

@class DependencyViewerVertex, SKSpriteNode;

__attribute__((visibility("hidden")))
@interface GPUTraceSKClusterNode : GPUTraceSKSimpleEncoderNode
{
    SKSpriteNode *_expandBtn;
    BOOL _collapsed;
    DependencyViewerVertex *_cluster;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL collapsed; // @synthesize collapsed=_collapsed;
@property(nonatomic) __weak DependencyViewerVertex *cluster; // @synthesize cluster=_cluster;
- (id)contextMenuAtLocation:(struct CGPoint)arg1;
- (id)acceptTouch:(struct CGPoint)arg1 modified:(BOOL)arg2;
- (void)loadResourceImages;
- (void)setMagnification:(double)arg1;
- (void)draw;
- (id)initWithCluster:(id)arg1 withTextureCache:(id)arg2 statsShowing:(BOOL)arg3 processingQueue:(id)arg4;

// Remaining properties
@property(nonatomic) struct CGRect bounds;

@end

