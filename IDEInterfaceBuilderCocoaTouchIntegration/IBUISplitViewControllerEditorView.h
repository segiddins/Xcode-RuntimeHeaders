//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIViewControllerEditorView.h>

@class NSMutableArray, NSMutableDictionary, NSView;

@interface IBUISplitViewControllerEditorView : IBUIViewControllerEditorView
{
    NSView *contentView;
    NSMutableArray *orderedEditorViews;
    NSMutableDictionary *interiorCornerImageViews;
}

@property(retain, nonatomic) NSView *contentView; // @synthesize contentView;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)invalidateLayout;
- (void)invalidateEditorView;
- (void)layoutTopDown;
- (void)layoutSplitViewControllerContentView;
- (BOOL)shouldShowMasterEditorView;
- (void)invalidateCornerImageViews;
- (void)layoutCornerImageViewsInFrame:(struct CGRect)arg1;
- (void)synchronizeSimulatedMetricsContainer;
- (double)interiorCornerRadius;
- (double)gutterWidth;
- (double)masterColumnWidth;
- (void)setDelegate:(id)arg1;
- (void)setEditedViewController:(id)arg1;
- (id)delegate;
@property(readonly) IBUIViewControllerEditorView *detailEditorView;
@property(readonly) IBUIViewControllerEditorView *masterEditorView;
- (id)orderedEditorViews;
- (id)initWithFrame:(struct CGRect)arg1 targetRuntime:(id)arg2;

@end

