//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEActivityLogAnalyzerControlFlowStepEdge, IDEAnalyzerResultsVisualization;

@interface IDEAnalyzerResultsControlFlowPath : NSObject
{
    struct CGSize _cachedCharacterSize;
    long long _indentWidth;
    IDEActivityLogAnalyzerControlFlowStepEdge *_edge;
    IDEAnalyzerResultsVisualization *_visualization;
}

- (void).cxx_destruct;
@property(readonly) IDEAnalyzerResultsVisualization *visualization; // @synthesize visualization=_visualization;
@property(readonly) IDEActivityLogAnalyzerControlFlowStepEdge *edge; // @synthesize edge=_edge;
- (id)drawableInRect:(struct CGRect)arg1 withUIHint:(int)arg2;
- (void)drawInRect:(struct CGRect)arg1 withUIHint:(int)arg2;
- (id)outgoingControlFlowPathsFromEndRange;
- (id)outgoingControlFlowPathsFromStartRange;
- (id)incommingControlFlowPathsToEndRange;
- (id)incommingControlFlowPathsToStartRange;
@property(readonly) struct CGRect endRect;
@property(readonly) struct CGRect startRect;
@property(readonly) struct _NSRange endRange;
@property(readonly) struct _NSRange startRange;
@property(readonly) int type;
- (id)initWithEdge:(id)arg1 visualization:(id)arg2;

@end

