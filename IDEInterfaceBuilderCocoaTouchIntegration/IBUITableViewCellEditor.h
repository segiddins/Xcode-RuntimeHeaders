//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIViewEditor.h>

@interface IBUITableViewCellEditor : IBUIViewEditor
{
    struct CGRect overlayDrawingRect;
}

+ (Class)ibDropTargetResolverClass;
- (void)setOverlayDrawingRect:(struct CGRect)arg1;
- (struct CGRect)overlayDrawingRect;
- (void)failToAcceptDragInfo:(id)arg1;
- (id)acceptDragInfo:(id)arg1 context:(id)arg2;
- (void)prepareToAcceptDragInfo:(id)arg1;
- (BOOL)shouldAcceptDragIntoContentView:(id)arg1;
- (BOOL)wantsDefaultDragInsertionIndicatorForDragInfo:(id)arg1;
- (void)drawDragAndDropInsertionHints;
- (id)dragInsertionIndicatorPathInView:(id)arg1;
- (unsigned long long)dragObjects:(id)arg1 withImage:(id)arg2 inMouseDownEvent:(id)arg3 mouseDraggedEvent:(id)arg4 imageLocation:(struct CGPoint)arg5 allowedOperations:(unsigned long long)arg6 dragContext:(id)arg7;
- (unsigned long long)dragOperationForDraggingViews:(id)arg1 withMouseDown:(id)arg2 andMouseDragged:(id)arg3;
- (id)editedTableViewCell;

@end

