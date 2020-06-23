//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class DVTGraphPopoverViewController, DVTGraphStyle, DVTNotificationToken, NSArray, NSMapTable, NSMutableArray, NSString;

@interface DVTGraph : NSView
{
    struct _DVTGraphBounds _preDragGraphBounds;
    NSMutableArray *_graphLayers;
    struct CGPoint _initialMouseDownPoint_screen;
    struct CGPoint _initialMouseDownPoint_model;
    struct CGRect _currentHighlightRect;
    int _currentMouseDragOperation;
    id _optionMonitor;
    DVTNotificationToken *_graphStyleToken;
    NSMapTable *_layersToNotificationTokenArrays;
    DVTGraphPopoverViewController *_detailsViewController;
    DVTGraphStyle *_graphStyle;
    NSString *_graphTitle;
    NSString *_xAxisTitle;
    NSString *_yAxisTitle;
    struct _DVTGraphBounds _graphBounds;
    struct _DVTGraphBounds _viewableGraphBounds;
    struct _DVTGraphInsets _graphScreenInsets;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *yAxisTitle; // @synthesize yAxisTitle=_yAxisTitle;
@property(copy, nonatomic) NSString *xAxisTitle; // @synthesize xAxisTitle=_xAxisTitle;
@property(copy, nonatomic) NSString *graphTitle; // @synthesize graphTitle=_graphTitle;
@property(readonly) DVTGraphStyle *graphStyle; // @synthesize graphStyle=_graphStyle;
@property(nonatomic) struct _DVTGraphInsets graphScreenInsets; // @synthesize graphScreenInsets=_graphScreenInsets;
@property(nonatomic) struct _DVTGraphBounds viewableGraphBounds; // @synthesize viewableGraphBounds=_viewableGraphBounds;
@property(nonatomic) struct _DVTGraphBounds graphBounds; // @synthesize graphBounds=_graphBounds;
@property(readonly) NSArray *graphLayers; // @synthesize graphLayers=_graphLayers;
- (BOOL)acceptsFirstResponder;
- (void)moveRight:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)_endMouseDraggedForZoom;
- (void)_handleFlagsChanged:(id)arg1;
- (void)_handleClick:(id)arg1;
- (void)_handleMouseDraggedForHighlight:(id)arg1;
- (void)_zoomByDeltaX:(double)arg1 deltaY:(double)arg2 relativeToScreenPoint:(struct CGPoint)arg3 relativeToModelPoint:(struct CGPoint)arg4 startingGraphBounds:(struct _DVTGraphBounds)arg5;
- (void)_handleMouseDraggedForZoom:(id)arg1;
- (void)_handleMouseDraggedForPan:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (struct _DVTGraphBounds)convertRectFromScreen:(struct CGRect)arg1;
- (struct _DVTGraphBounds)convertBoundsToScreen:(struct _DVTGraphBounds)arg1;
- (struct CGPoint)convertPointFromScreen:(struct CGPoint)arg1;
- (struct CGPoint)convertPointToScreen:(struct CGPoint)arg1;
- (unsigned long long)_magicNumberForInteger:(double)arg1;
- (double)_adjustedStrideForRawStride:(double)arg1;
- (void)_drawGraphTitleAndAxisTitles:(struct CGRect)arg1;
- (void)_drawAxisLabelsAndGridlines:(struct CGRect)arg1;
- (void)_drawInsetGraphFrame:(struct CGRect)arg1;
- (void)_drawHighlight:(struct CGRect)arg1;
- (void)_drawGraphLayers:(struct CGRect)arg1;
- (void)_drawAxis:(struct CGRect)arg1;
- (void)_drawGraphBackground:(struct CGRect)arg1;
- (void)_drawViewBackground:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_updateGraphBoundsUsingXOffset:(double)arg1 yOffset:(double)arg2;
- (void)setGraphBoundsAndViewableGraphBounds:(struct _DVTGraphBounds)arg1;
- (id)_notificationTokenArrayForLayer:(id)arg1;
- (void)_cancelAllTokensForAllLayers;
- (void)removeAllGraphLayers;
- (void)_handleSelectionChangedForLayer:(id)arg1;
- (void)removeGraphLayer:(id)arg1;
- (void)addGraphLayer:(id)arg1;
- (void)resetCursorRects;
@property(readonly) DVTGraphPopoverViewController *detailsViewController;
- (struct CGRect)_insetDrawingFrame;
- (void)dealloc;
- (void)_initCartesianGraph:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

