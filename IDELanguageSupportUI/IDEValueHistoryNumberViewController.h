//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDELanguageSupportUI/IDEValueHistoryToyViewController.h>

@class DVTGraph, DVTLineGraphLayer, IDEValueHistoryToyResult, IDEVerticalMarkerGraphLayer;
@protocol NSObject;

@interface IDEValueHistoryNumberViewController : IDEValueHistoryToyViewController
{
    IDEValueHistoryToyResult *_lastPlayheadResult;
    unsigned long long _lastPlayheadResultIndex;
    id <NSObject> _graphLayerSelectionNotificationToken;
    BOOL _ignoreSelectedPointChange;
    DVTLineGraphLayer *_currentLineGraphLayer;
    DVTLineGraphLayer *_previousLineGraphLayer;
    BOOL _minGraphBoundsIsSet;
    BOOL _onlyDrawOldData;
    struct _DVTGraphBounds _minGraphBounds;
    BOOL _currentLayerGraphBoundsIsSet;
    struct _DVTGraphBounds _currentLayerGraphBounds;
    IDEVerticalMarkerGraphLayer *_verticalMarkerGraphLayer;
    DVTGraph *_graph;
}

+ (id)displayableReflectionTags;
@property(retain) DVTGraph *graph; // @synthesize graph=_graph;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)_handleSelectedGraphPointChanged:(id)arg1 graphLayer:(id)arg2;
- (void)_updatePlayheadForResults:(id)arg1;
- (void)_updatePlayheadIfNeededForResults:(id)arg1;
- (void)_updateGraphUsingPoints:(id)arg1 minY:(double)arg2 maxY:(double)arg3 minX:(double)arg4 maxX:(double)arg5;
- (void)_graphResults:(id)arg1;
- (BOOL)_keepPreviousData;
- (BOOL)_xAxisIsTime;
- (void)renderResultsForceRedraw:(BOOL)arg1;
- (void)playgroundExecutionEndedAndCompleted:(BOOL)arg1;
- (void)playgroundExecutionStarted;
- (void)setResultDisplayDate:(id)arg1;
- (id)toolTip;
- (id)alternateIconImage;
- (id)iconImage;
- (struct CGSize)preferredContentSizeConstrainedToSize:(struct CGSize)arg1;
- (unsigned long long)representationType;
- (void)viewDidLoad;
- (id)initWithToy:(id)arg1;

@end

