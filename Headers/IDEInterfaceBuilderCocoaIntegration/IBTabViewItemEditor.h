//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBEditor.h>

@interface IBTabViewItemEditor : IBEditor
{
}

- (id)calculateActivationHighlightPath;
- (void)resizeFrameViewWithEvent:(id)arg1 fromEditorCanvasFrameKnob:(CDUnion_42e99c75)arg2;
- (BOOL)interceptEvent:(id)arg1;
- (id)stringEditingContextForEvent:(id)arg1;
- (struct CGRect)titleRectInTabView;
- (void)didOpen;
- (id)editedTabView;
- (id)editedTabViewItem;

@end

