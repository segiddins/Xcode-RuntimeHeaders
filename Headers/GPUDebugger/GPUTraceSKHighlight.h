//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/SKNode.h>

@class SKCropNode, SKShapeNode;

__attribute__((visibility("hidden")))
@interface GPUTraceSKHighlight : SKNode
{
    SKCropNode *_crop;
    SKShapeNode *_highlight;
    struct CGRect _rect;
    double _leftMargin;
    double _rightMargin;
    double _topMargin;
    double _bottomMargin;
}

- (void).cxx_destruct;
- (void)setMagnification:(double)arg1;
- (void)buildHighlightAtMagnification:(double)arg1;
- (void)setColor:(id)arg1;
- (void)draw;
- (id)initWithRect:(struct CGRect)arg1 leftMargin:(double)arg2 rightMargin:(double)arg3 topMargin:(double)arg4 bottomMargin:(double)arg5;
- (id)initWithRect:(struct CGRect)arg1 withInset:(struct CGSize)arg2;

@end

