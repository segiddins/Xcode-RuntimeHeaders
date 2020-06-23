//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEInterfaceBuilderKit/DVTMainViewControllerDrawingStrategyDelegate-Protocol.h>
#import <IDEInterfaceBuilderKit/IBICCatalogItemObserver-Protocol.h>
#import <IDEInterfaceBuilderKit/IBSelectionChannelApplicator-Protocol.h>
#import <IDEInterfaceBuilderKit/IBViewDragDelegate-Protocol.h>

@class DVTDelayedInvocation, DVTMainViewControllerDrawingStrategy, IBICAbstractCatalogDocument, IBICCatalogDocumentEditor, IBICDetailOverlay, IBICDetailPlaceholderView, IBICDetailScrollView, IBSelectionChannel, IDECanvasAppearanceSwitcherController, NSArray, NSSegmentedControl, NSString;
@protocol IBInvalidation;

@interface IBICAbstractCatalogDetailController : IDEViewController <IBViewDragDelegate, DVTMainViewControllerDrawingStrategyDelegate, IBICCatalogItemObserver, IBSelectionChannelApplicator>
{
    DVTMainViewControllerDrawingStrategy *_mainViewControllerDrawingStrategy;
    IBICAbstractCatalogDocument *_document;
    IBSelectionChannel *_selectionChannel;
    id <IBInvalidation> _catalogObservation;
    DVTDelayedInvocation *_placeholderTextValidator;
    NSSegmentedControl *_zoomSegmentedControl;
    NSSegmentedControl *_showSlicingButton;
    IDECanvasAppearanceSwitcherController *_backgroundColorSwitcher;
    BOOL _drawsWithKeyAppearance;
    IBICCatalogDocumentEditor *_documentEditor;
    IBICDetailOverlay *_overlay;
    IBICDetailScrollView *_scrollView;
    IBICDetailPlaceholderView *_placeholderView;
}

@property(retain, nonatomic) IBICDetailPlaceholderView *placeholderView; // @synthesize placeholderView=_placeholderView;
@property(readonly) BOOL drawsWithKeyAppearance; // @synthesize drawsWithKeyAppearance=_drawsWithKeyAppearance;
@property(retain, nonatomic) IBICDetailScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly) IBICDetailOverlay *overlay; // @synthesize overlay=_overlay;
@property(readonly) IBICAbstractCatalogDocument *document; // @synthesize document=_document;
@property(readonly) IBICCatalogDocumentEditor *documentEditor; // @synthesize documentEditor=_documentEditor;
@property(readonly) IBSelectionChannel *selectionChannel; // @synthesize selectionChannel=_selectionChannel;
- (void).cxx_destruct;
- (BOOL)isSubEditorExistanceInSyncForItem:(id)arg1;
- (void)drawsWithKeyAppearanceDidChange;
- (BOOL)view:(id)arg1 performDragOperation:(id)arg2;
- (BOOL)view:(id)arg1 prepareForDragOperation:(id)arg2;
- (unsigned long long)view:(id)arg1 draggingEntered:(id)arg2;
- (id)dragTypesForView:(id)arg1;
- (void)updateSelectionOwner:(id)arg1 forBandSelectionHittingObjects:(id)arg2 withEvent:(id)arg3 initialSelection:(id)arg4;
- (BOOL)item:(id)arg1 intersectsBandSelectionRect:(struct CGRect)arg2 fromView:(id)arg3;
- (id)bandSelectionCandidates;
- (void)documentEditorDidChangeDisplayedCatalogItems;
@property(readonly) NSArray *displayedCatalogItems;
- (void)selectAll:(id)arg1;
- (void)importImageCatalogContentFromProjectBasedOnSelectionContext:(id)arg1;
- (id)objectsForSelectAll;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)pushSelectionToViews;
- (void)selectionChannel:(id)arg1 applySelection:(id)arg2 previousSelection:(id)arg3 context:(id)arg4;
- (void)imageCatalogItemWillChangeDisplayOrderedChildren:(id)arg1;
- (void)refreshContentView;
- (void)batchedValidatePlaceholderText:(id)arg1;
- (void)takeFocus;
- (BOOL)canBecomeMainViewController;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (id)backgroundColorAffectedViews;
- (id)showAlternateDetailControllerTitle;
- (void)zoomCanvas:(id)arg1;
- (BOOL)canZoomCanvas;
- (void)mainViewControllerDrawingStrategyActivationStateDidChange:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithDocumentEditor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

