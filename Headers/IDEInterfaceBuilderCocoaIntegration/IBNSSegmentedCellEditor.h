//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaIntegration/IBNSCellEditor.h>

@interface IBNSSegmentedCellEditor : IBNSCellEditor
{
}

+ (Class)ibDropTargetResolverClass;
- (void)willEditChild:(id)arg1 inFrameController:(id)arg2;
- (void)positionChildEditorFrame;
- (id)acceptDragInfo:(id)arg1 context:(id)arg2;
- (void)resetCursorRects;
- (BOOL)interceptEvent:(id)arg1;
- (void)resizeSegmentsWithEvent:(id)arg1;
- (long long)segmentsToResizeForEvent:(id)arg1;
- (struct CGRect)resizeHitTestRectForSegment:(long long)arg1 inView:(id)arg2;
- (id)resizeCursorForSegment:(long long)arg1;
- (id)stringEditingContextForEvent:(id)arg1;
- (BOOL)isTitleEditable;
- (struct CGRect)editingTitleRectForSegment:(long long)arg1 inView:(id)arg2;
- (struct CGRect)rectForTitleEditing;
- (long long)segmentForMenu:(id)arg1;
- (long long)segmentForMouseEvent:(id)arg1;
- (long long)segmentAtPoint:(struct CGPoint)arg1 inView:(id)arg2;
- (struct CGRect)rectForSegment:(long long)arg1 inView:(id)arg2;
- (id)editedSegmentedCell;
- (long long)segmentCount;

@end
