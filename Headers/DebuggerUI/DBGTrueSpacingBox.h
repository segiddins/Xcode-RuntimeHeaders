//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerUI/DBGNode.h>

@class DBGHostNode, SCNMaterial, SCNNode;

@interface DBGTrueSpacingBox : DBGNode
{
    DBGNode *_boxNode;
    SCNNode *_boxBorderNode;
    SCNMaterial *_boxMaterial;
    BOOL _highlighted;
    DBGHostNode *_host;
}

@property(nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property __weak DBGHostNode *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (double)_boxNodeOpacity;
- (void)setHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (id)createBorderGeometryWithWidth:(double)arg1 height:(double)arg2 length:(double)arg3;
- (void)updateWithWidth:(double)arg1 height:(double)arg2 length:(double)arg3 chamferRadius:(double)arg4;
- (void)setRenderingOrder:(long long)arg1;
- (id)initWithWidth:(double)arg1 height:(double)arg2 length:(double)arg3 chamferRadius:(double)arg4;

@end
