//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBCanvasOverlay.h>

@class CAShapeLayer, IBStoryboardInitialSceneCanvasLinkPath;

@interface IBStoryboardInitialSceneCanvasLinkPathDraggingOverlay : IBCanvasOverlay
{
    IBStoryboardInitialSceneCanvasLinkPath *_linkPath;
    CAShapeLayer *_linkPathLayer;
    BOOL _selected;
    CDStruct_f6143a38 _canvasLinkPathLine;
}

@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) CDStruct_f6143a38 canvasLinkPathLine; // @synthesize canvasLinkPathLine=_canvasLinkPathLine;
- (void).cxx_destruct;
- (void)layoutTopDown;
- (BOOL)scalesWithCanvasFrameChrome;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect)arg1;

@end

