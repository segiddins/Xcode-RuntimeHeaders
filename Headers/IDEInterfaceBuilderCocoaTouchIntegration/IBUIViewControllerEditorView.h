//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIEditorView.h>

@class DVTObservingToken, IBUIViewController, IBUIViewControllerEditorPlaceholderView, NSView;
@protocol IBUIViewControllerEditorViewDelegate;

@interface IBUIViewControllerEditorView : IBUIEditorView
{
    NSView *_emptyPlaceholderView;
    DVTObservingToken *_editorMetricsObservingToken;
    IBUIViewControllerEditorPlaceholderView *_placeholderView;
    id <IBUIViewControllerEditorViewDelegate> _delegate;
    IBUIViewController *_editedViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IBUIViewController *editedViewController; // @synthesize editedViewController=_editedViewController;
@property(nonatomic) __weak id <IBUIViewControllerEditorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)editedDocumentObject;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (struct CGRect)ibEditorSceneRect;
- (double)defaultScreenScaleForContentView:(id)arg1;
- (struct CGSize)defaultContentSizeForContentView:(id)arg1;
- (struct CGSize)_fallbackDocumentSceneSize;
- (id)contentView;
- (id)effectivePlaceholderView;
@property(readonly) IBUIViewControllerEditorPlaceholderView *placeholderView; // @synthesize placeholderView=_placeholderView;
- (id)itemsForSimulatedToolbar;
- (id)itemsForSimulatedNavigationBar;
- (void)synchronizeNewMetricBars;
- (void)editedViewControllerDidChangeInvalidatingProperty;
- (void)synchronizePlaceholderView;
- (void)synchronizeEditorMetrics;
- (void)synchronizeEditorView;
- (void)setBackgroundColor:(id)arg1;
- (void)dealloc;

@end

