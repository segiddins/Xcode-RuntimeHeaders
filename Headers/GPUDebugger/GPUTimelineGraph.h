//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DTGraphKit/DTTimelineGraph.h>

@class DTTimelineDecoratedPlane, GPUTimelineGraphDataSource, GPUTimelineGraphOverlayView, GPUTimelineGraphTimelineDecorator, GPUTimelineRulerGraph, NSArray, NSMutableArray, NSTimer, NSTrackingArea, NSView;
@protocol GPUTimelineGraphContextMenuProvider, GPUTimelineGraphTheme, GPUTimelineGraphThumbnailView, GPUTimelineGraphTooltipView;

@interface GPUTimelineGraph : DTTimelineGraph
{
    NSMutableArray *_planeDecorators;
    NSMutableArray *_groupPlanes;
    NSMutableArray *_filteredPlanes;
    id <GPUTimelineGraphTheme> _theme;
    struct CGPoint _lastMousePosition;
    BOOL _isFiltering;
    BOOL _isZooming;
    GPUTimelineGraphTimelineDecorator *_timelineDecorator;
    NSTrackingArea *_mouseTrackingArea;
    NSTimer *_tooltipTimer;
    unsigned long long _extraDuration;
    BOOL _showReferencePlane;
    BOOL _showTimeRuler;
    BOOL _showMarkers;
    BOOL _flattenGroups;
    GPUTimelineGraphDataSource *_dataSource;
    unsigned long long _selectedIndex;
    id <GPUTimelineGraphContextMenuProvider> _contextMenuProvider;
    NSView<GPUTimelineGraphTooltipView> *_tooltipView;
    NSView<GPUTimelineGraphThumbnailView> *_thumbnailView;
    DTTimelineDecoratedPlane *_rulerPlane;
    GPUTimelineRulerGraph *_rulerGraph;
    GPUTimelineGraphOverlayView *_overlayView;
    unsigned long long _minNanosecondsPerPoint;
    unsigned long long _maxNanosecondsPerPoint;
    struct _NSRange _timelineSelectionRange;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long maxNanosecondsPerPoint; // @synthesize maxNanosecondsPerPoint=_maxNanosecondsPerPoint;
@property(nonatomic) unsigned long long minNanosecondsPerPoint; // @synthesize minNanosecondsPerPoint=_minNanosecondsPerPoint;
@property(retain, nonatomic) GPUTimelineGraphOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) GPUTimelineRulerGraph *rulerGraph; // @synthesize rulerGraph=_rulerGraph;
@property(readonly, nonatomic) DTTimelineDecoratedPlane *rulerPlane; // @synthesize rulerPlane=_rulerPlane;
@property(nonatomic) BOOL flattenGroups; // @synthesize flattenGroups=_flattenGroups;
@property(nonatomic) BOOL showMarkers; // @synthesize showMarkers=_showMarkers;
@property(nonatomic) BOOL showTimeRuler; // @synthesize showTimeRuler=_showTimeRuler;
@property(nonatomic) BOOL showReferencePlane; // @synthesize showReferencePlane=_showReferencePlane;
@property(retain, nonatomic) NSView<GPUTimelineGraphThumbnailView> *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) NSView<GPUTimelineGraphTooltipView> *tooltipView; // @synthesize tooltipView=_tooltipView;
@property(retain, nonatomic) id <GPUTimelineGraphContextMenuProvider> contextMenuProvider; // @synthesize contextMenuProvider=_contextMenuProvider;
@property(readonly, nonatomic) struct _NSRange timelineSelectionRange; // @synthesize timelineSelectionRange=_timelineSelectionRange;
@property(readonly, nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) id <GPUTimelineGraphTheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) GPUTimelineGraphDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)scrollItemToVisible:(unsigned long long)arg1;
- (BOOL)isItemVisible:(unsigned long long)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
- (BOOL)acceptsFirstResponder;
- (void)zoomOut;
- (void)zoomIn;
- (unsigned long long)_zoomDelta;
- (void)scaleToFit;
- (struct CGRect)rectOfItemAtIndex:(unsigned long long)arg1;
- (void)selectCurrentGroup;
- (void)_snapSelectionToGroup:(unsigned long long)arg1 endTime:(unsigned long long)arg2;
- (void)mouseMoved:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)_updateMousePositionFromEvent:(id)arg1;
- (void)_updateTooltipTimer:(struct CGPoint)arg1;
- (void)mouseExited:(id)arg1;
- (void)_updateMouseTrackingArea;
- (unsigned long long)currentDurationOnScreen;
- (unsigned long long)scaleNeededToDisplayDuration:(unsigned long long)arg1 withViewWidth:(double)arg2;
- (unsigned long long)scaleNeededToDisplayDuration:(unsigned long long)arg1;
- (void)setPlaneHandleWidth:(double)arg1;
- (void)setNanosecondOffset:(long long)arg1;
- (void)setNanosecondsPerPoint:(unsigned long long)arg1;
- (void)inputHandlerForGraph:(id)arg1 requestsZoomOutIndicatorForTimeRange:(struct XRTimeRange)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsZoomInIndicatorForTimeRange:(struct XRTimeRange)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsRangeIndicatorState:(unsigned long long)arg2;
- (void)inputHandlerRequestsToClearInspectionInfoForGraph:(id)arg1;
- (void)inputHandlerForGraph:(id)arg1 requestsDisplayInspectionInfoForNanosecond:(unsigned long long)arg2 point:(struct CGPoint)arg3;
- (void)inputHandlerForGraph:(id)arg1 requestYOffset:(double)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsNanosecondOffset:(long long)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsNanosecondsPerPoint:(unsigned long long)arg2;
- (void)inputHandlerRequestsToClearSelectedTimeRangeForGraph:(id)arg1;
- (void)inputHandlerDidFinishSelectionForGraph:(id)arg1;
- (unsigned long long)_constraintNanosecondsOffset:(unsigned long long)arg1;
- (void)_updateOverlayView;
- (void)_updateTimelineSelectionRange;
- (void)rightMouseDown:(id)arg1;
- (const struct GPUTimelineGraphDataPlaneCell *)dataPlaneCellAtIndex:(unsigned long long)arg1 planeIndex:(unsigned long long)arg2;
- (const struct GPUTimelineGraphReferencePlaneCell *)referencePlaneCellAtIndex:(unsigned long long)arg1;
- (const struct GPUTimelineGraphDataPlaneCell *)currentDataPlaneCell:(unsigned long long)arg1;
- (const struct GPUTimelineGraphReferencePlaneCell *)currentReferencePlaneCell;
- (id)nameForPlane:(unsigned long long)arg1;
- (id)planeInfoAtPoint:(struct CGPoint)arg1;
- (id)timelinePlaneAtPoint:(struct CGPoint)arg1;
- (void)clearSelection;
- (void)selectIndex:(unsigned long long)arg1;
- (void)invalidateCellAtIndex:(unsigned long long)arg1;
- (void)scrollToEndOfTimeline;
- (void)_buildPlaneStructure:(BOOL)arg1 collapseGroups:(BOOL)arg2;
- (void)removeFilteredPlane:(unsigned long long)arg1;
- (void)addFilteredPlane:(unsigned long long)arg1;
- (void)_buildPlanes;
@property(readonly, nonatomic) double rulerHeight;
- (void)setContextMenu:(id)arg1;
- (id)_decoratorFromDataSourcePlane:(unsigned long long)arg1;
- (void)boundsDidChange:(id)arg1;
- (void)invalidateDynamicRanges;
- (void)invalidateCellsAtIndicies:(id)arg1;
- (void)invalidateGraph;
- (void)visiblePlanesChanged:(id)arg1;
@property(retain, nonatomic) NSArray *filteredPlanes;
- (void)visibleIndexesChanged:(id)arg1;
- (void)_setup;
- (void)reset;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

