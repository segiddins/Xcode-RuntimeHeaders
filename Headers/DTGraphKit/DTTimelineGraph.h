//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <DTGraphKit/CALayerDelegate-Protocol.h>
#import <DTGraphKit/DTTimelineGraphDelegate-Protocol.h>

@class CALayer, DTTimelineGraphLayoutManager, DTTimelineGraphPlaneManager, DTTimelineMouseEventsResponder, DTTimelinePlane, DTTimelinePlaneDynamicRangeUpdateAnimation, NSArray, NSColor, NSMutableDictionary, NSNumberFormatter, NSSet, NSString, NSTimer;
@protocol DTTimelineGraphDelegate;

@interface DTTimelineGraph : NSView <CALayerDelegate, DTTimelineGraphDelegate>
{
    struct TimelineViewContext _tilerCtx;
    CALayer *_flippedRootLayer;
    NSArray *_planes;
    DTTimelinePlane *_topPinnedPlane;
    DTTimelinePlane *_bottomPinnedPlane;
    DTTimelinePlane *_backgroundPlane;
    DTTimelinePlane *_overlayPlane;
    DTTimelineMouseEventsResponder *_mouseEventsResponder;
    DTTimelineGraphPlaneManager *_planeManager;
    NSTimer *_dynamicRangeUpdateTimer;
    DTTimelinePlaneDynamicRangeUpdateAnimation *_dynamicRangeUpdateAnim;
    NSMutableDictionary *_establishedDynamicRangesGroups;
    unsigned long long _unadjustedOffset;
    BOOL _nanosecondsPerPointSet;
    BOOL _clientWantsDarkBackground;
    double _unroundedUserSuppliedYOffset;
    NSNumberFormatter *_overlayTimeFormatter;
    DTTimelinePlane *_reorderingSpacePlane;
    BOOL _showsScrollers;
    BOOL _planeBorderIsResizable;
    BOOL _topPinnedPlaneRejectsFirstResponder;
    BOOL _suppressYAxisScrolling;
    BOOL _isFirstResponder;
    id <DTTimelineGraphDelegate> _delegate;
    NSString *_name;
    NSColor *_backgroundColor;
    unsigned long long _currentInspectionTime;
    NSColor *_inspectionColor;
    NSColor *_inspectionBorderColor;
    NSColor *_summaryInspectionPointColor;
    NSColor *_selectionPointColor;
    NSColor *_zoomIndicatorColor;
    NSColor *_zoomIndicatorBorderColor;
    NSColor *_labelBackgroundColor;
    NSColor *_labelBorderColor;
    NSColor *_rangeInfoTextColor;
    NSColor *_rangeInfoBackgroundColor;
    unsigned long long _nanosecondsPerPoint;
    NSSet *_selectedPlanes;
    long long _initialDynamicRangeHigh;
    unsigned long long _rangeIndicatorState;
    DTTimelineGraphLayoutManager *_layoutManager;
    struct XRTimeRange _selectedTimeRange;
    struct XRTimeRange _zoomIndicatorTimeRange;
}

+ (void)_tileDynamicRangeBecameValid:(id)arg1;
+ (BOOL)dt_shouldAllowImplicitAction:(id)arg1;
@property(readonly, nonatomic) __weak DTTimelineGraphLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property(readonly, nonatomic) BOOL isFirstResponder; // @synthesize isFirstResponder=_isFirstResponder;
@property(nonatomic) unsigned long long rangeIndicatorState; // @synthesize rangeIndicatorState=_rangeIndicatorState;
@property(nonatomic) struct XRTimeRange zoomIndicatorTimeRange; // @synthesize zoomIndicatorTimeRange=_zoomIndicatorTimeRange;
@property(readonly, nonatomic) CALayer *flippedRootLayer; // @synthesize flippedRootLayer=_flippedRootLayer;
@property(nonatomic) BOOL suppressYAxisScrolling; // @synthesize suppressYAxisScrolling=_suppressYAxisScrolling;
@property(nonatomic) long long initialDynamicRangeHigh; // @synthesize initialDynamicRangeHigh=_initialDynamicRangeHigh;
@property(nonatomic) BOOL topPinnedPlaneRejectsFirstResponder; // @synthesize topPinnedPlaneRejectsFirstResponder=_topPinnedPlaneRejectsFirstResponder;
@property(readonly, nonatomic) DTTimelineGraphPlaneManager *planeManager; // @synthesize planeManager=_planeManager;
@property(copy, nonatomic) NSSet *selectedPlanes; // @synthesize selectedPlanes=_selectedPlanes;
@property(nonatomic) unsigned long long nanosecondsPerPoint; // @synthesize nanosecondsPerPoint=_nanosecondsPerPoint;
@property(nonatomic) BOOL planeBorderIsResizable; // @synthesize planeBorderIsResizable=_planeBorderIsResizable;
@property(nonatomic) BOOL showsScrollers; // @synthesize showsScrollers=_showsScrollers;
@property(retain, nonatomic) NSColor *rangeInfoBackgroundColor; // @synthesize rangeInfoBackgroundColor=_rangeInfoBackgroundColor;
@property(retain, nonatomic) NSColor *rangeInfoTextColor; // @synthesize rangeInfoTextColor=_rangeInfoTextColor;
@property(retain, nonatomic) NSColor *labelBorderColor; // @synthesize labelBorderColor=_labelBorderColor;
@property(retain, nonatomic) NSColor *labelBackgroundColor; // @synthesize labelBackgroundColor=_labelBackgroundColor;
@property(retain, nonatomic) NSColor *zoomIndicatorBorderColor; // @synthesize zoomIndicatorBorderColor=_zoomIndicatorBorderColor;
@property(retain, nonatomic) NSColor *zoomIndicatorColor; // @synthesize zoomIndicatorColor=_zoomIndicatorColor;
@property(nonatomic) struct XRTimeRange selectedTimeRange; // @synthesize selectedTimeRange=_selectedTimeRange;
@property(retain, nonatomic) NSColor *selectionPointColor; // @synthesize selectionPointColor=_selectionPointColor;
@property(retain, nonatomic) NSColor *summaryInspectionPointColor; // @synthesize summaryInspectionPointColor=_summaryInspectionPointColor;
@property(retain, nonatomic) NSColor *inspectionBorderColor; // @synthesize inspectionBorderColor=_inspectionBorderColor;
@property(retain, nonatomic) NSColor *inspectionColor; // @synthesize inspectionColor=_inspectionColor;
@property(nonatomic) unsigned long long currentInspectionTime; // @synthesize currentInspectionTime=_currentInspectionTime;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak id <DTTimelineGraphDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL hasDarkBackground; // @synthesize hasDarkBackground=_clientWantsDarkBackground;
@property(readonly, nonatomic) DTTimelinePlane *overlayPlane; // @synthesize overlayPlane=_overlayPlane;
@property(readonly, nonatomic) DTTimelinePlane *backgroundPlane; // @synthesize backgroundPlane=_backgroundPlane;
@property(readonly, nonatomic) DTTimelinePlane *bottomPinnedPlane; // @synthesize bottomPinnedPlane=_bottomPinnedPlane;
@property(readonly, nonatomic) DTTimelinePlane *topPinnedPlane; // @synthesize topPinnedPlane=_topPinnedPlane;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)displayInspectionInfoForLocalPosition:(struct CGPoint)arg1;
- (void)updateMouseHoverStatusForPosition:(struct CGPoint)arg1;
- (void)rebuildAccessibilitySelection;
- (void)rebuildAccessibility;
- (BOOL)isAccessibilityEnabled;
- (BOOL)isAccessibilityElement;
- (void)_performLayout;
- (int)_recalculateFullLayout;
- (const unordered_map_b8b4eb21 *)_planeLayoutMap;
- (void)clearInspectionInfo;
- (void)displayInspectionInfoForNanosecond:(unsigned long long)arg1 planes:(id)arg2;
- (void)setNextResponder:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)updateLayer;
- (long long)layerContentsRedrawPolicy;
- (BOOL)wantsUpdateLayer;
- (void)_updateSelectedPlanesColors;
- (id)menuForEvent:(id)arg1;
- (void)resignKeyWindow;
- (void)becomeKeyWindow;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeKeyView;
- (BOOL)acceptsFirstResponder;
- (void)_removeSeparatorPlane;
- (void)_insertSeparatorForPlane:(id)arg1 below:(id)arg2;
- (void)_reorderingPlane:(id)arg1 afterPlane:(id)arg2 withParent:(id)arg3;
- (void)inputHandlerForGraph:(id)arg1 didReorderPlane:(id)arg2 afterPlane:(id)arg3 withParent:(id)arg4;
- (BOOL)inputHandlerForGraph:(id)arg1 canReorderPlane:(id)arg2 afterPlane:(id)arg3 withParent:(id)arg4;
- (BOOL)inputHandlerForGraph:(id)arg1 requestsReorderingPlane:(id)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsRangeIndicatorState:(unsigned long long)arg2;
- (void)inputHandlerRequestsToClearZoomIndicatorForGraph:(id)arg1;
- (void)inputHandlerForGraph:(id)arg1 requestsZoomInIndicatorForTimeRange:(struct XRTimeRange)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsZoomOutIndicatorForTimeRange:(struct XRTimeRange)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsHeight:(double)arg2 forPlane:(id)arg3;
- (void)inputHandlerForGraph:(id)arg1 unhandledClickAtTime:(unsigned long long)arg2 clickCount:(long long)arg3 onPlanes:(id)arg4;
- (void)inputHandlerForGraph:(id)arg1 requestsCollapsingGroupPlane:(id)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsExpandingGroupPlane:(id)arg2;
- (void)inputHandlerRequestsToClearInspectionInfoForGraph:(id)arg1;
- (void)inputHandlerForGraph:(id)arg1 requestsDisplayInspectionInfoForNanosecond:(unsigned long long)arg2 point:(struct CGPoint)arg3;
- (void)inputHandlerForGraph:(id)arg1 requestsNanosecondsPerPoint:(unsigned long long)arg2;
- (void)inputHandlerRequestsToClearCurrentInspectionTimeForGraph:(id)arg1;
- (void)inputHandlerForGraph:(id)arg1 requestsCurrentInspectionTime:(unsigned long long)arg2;
- (void)inputHandlerRequestsToClearSelectedTimeRangeForGraph:(id)arg1;
- (void)inputHandlerDidFinishSelectionForGraph:(id)arg1;
- (void)inputHandlerForGraph:(id)arg1 clickableGlyphClickedOnPlane:(id)arg2 relativeRect:(struct CGRect)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)inputHandlerForGraph:(id)arg1 requestsSelectedTimeRange:(struct XRTimeRange)arg2 withEventNanosecondOffset:(long long)arg3;
- (void)inputHandlerForGraph:(id)arg1 requestYOffset:(double)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsNanosecondOffset:(long long)arg2;
- (double)offsetToScrollPlane:(id)arg1 toLocation:(unsigned long long)arg2 force:(BOOL)arg3;
- (BOOL)getPointInView:(out struct CGPoint *)arg1 visibility:(out char *)arg2 plane:(id)arg3 time:(long long)arg4;
- (void)_addBottomBorderLayer:(id)arg1;
- (id)_resizablePlaneForRect:(struct CGRect)arg1;
- (id)planesUnderPoint:(struct CGPoint)arg1;
- (id)_planesUnderPoint:(struct CGPoint)arg1;
- (void)_setOverlayPlane:(id)arg1;
- (void)_setBackgroundPlane:(id)arg1;
- (void)_setBottomPinnedPlane:(id)arg1;
- (void)_setTopPinnedPlane:(id)arg1;
- (void)_setPlanes:(id)arg1;
- (void)_dynamicRangeUpdateFire:(id)arg1;
- (id)_establishedDynamicRangePeerOfPlane:(id)arg1;
- (id)_createDynamicRangeAnimation;
- (void)_enumerateNonPinnedPlanes:(CDUnknownBlockType)arg1;
- (void)_enumerateTopLevelPlanes:(CDUnknownBlockType)arg1;
- (void)_dynamicRangeShouldBeRecomputed;
- (void)_didChangeContext;
- (void)viewDidUnhide;
- (void)viewDidChangeEffectiveAppearance;
- (void)_screenChangeNotification:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
@property(copy, nonatomic) NSNumberFormatter *overlayTimeFormatter;
- (unsigned long long)scaleNeededToDisplayAllData;
- (unsigned long long)scaleNeededToDisplayDuration:(unsigned long long)arg1;
- (long long)matchingOffsetForNanosecondsPerPoint:(inout unsigned long long *)arg1 centeredAtTime:(long long)arg2;
@property(nonatomic) double yOffset;
- (BOOL)_setYOffset:(double)arg1;
- (BOOL)_updateYOffsetIfNeeded;
@property(nonatomic) BOOL animateChanges;
- (void)enumeratesPlanesHavingKey:(id)arg1 block:(CDUnknownBlockType)arg2;
@property(nonatomic) unsigned long long duration;
- (long long)lastVisibleNanosecond;
- (void)invalidateTimeRange:(struct XRTimeRange)arg1 plane:(id)arg2;
- (void)invalidateTimeRange:(struct XRTimeRange)arg1;
- (void)clearCurrentInspectionTime;
@property(readonly, copy, nonatomic) NSString *rangeIndicatorDescription;
- (void)clearZoomIndicator;
@property(retain, nonatomic) id selectionColorEffect;
- (void)clearSelectedTimeRange;
@property(nonatomic) BOOL displayCurrentInspectionTime;
@property(readonly, nonatomic) long long midpointNanosecondOffset;
@property(nonatomic) long long nanosecondOffset;
- (void)setNanosecondsPerPoint:(unsigned long long)arg1 offset:(long long)arg2 duration:(unsigned long long)arg3;
@property(nonatomic) double planeHandleWidth;
- (void)_recomputeColorAndScale;
- (void)setAppearance:(id)arg1;
@property(readonly, nonatomic) NSArray *planes; // @synthesize planes=_planes;
- (BOOL)_mouseIsInTopPinnedPlane:(struct CGPoint)arg1;
- (BOOL)_mouseIsOverGraph:(struct CGPoint)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)_scrollableViewportHeight;
- (void)_tileDynamicRangeBecameValidHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

