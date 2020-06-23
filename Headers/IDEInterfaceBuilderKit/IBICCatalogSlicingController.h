//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBICAbstractCatalogDetailController.h>

#import <IDEInterfaceBuilderKit/IBICCatalogItemObserver-Protocol.h>
#import <IDEInterfaceBuilderKit/IBICDetailDocumentViewDelegate-Protocol.h>
#import <IDEInterfaceBuilderKit/IBICImageSlicingViewContainerDelegate-Protocol.h>

@class DVTDelayedInvocation, IBICDetailDocumentView, IBMutableIdentityDictionary, NSMutableSet, NSString;
@protocol DVTInvalidation;

@interface IBICCatalogSlicingController : IBICAbstractCatalogDetailController <IBICCatalogItemObserver, IBICImageSlicingViewContainerDelegate, IBICDetailDocumentViewDelegate>
{
    IBMutableIdentityDictionary *_imageRepsToSliceViewContainers;
    DVTDelayedInvocation *_batchedChangeHandler;
    NSMutableSet *_imageRepsWithPendingChanges;
    id <DVTInvalidation> _scrollViewToken;
    IBICDetailDocumentView *_detailDocumentView;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
@property(retain, nonatomic) IBICDetailDocumentView *detailDocumentView; // @synthesize detailDocumentView=_detailDocumentView;
- (void).cxx_destruct;
- (BOOL)view:(id)arg1 prepareForDragOperation:(id)arg2;
- (BOOL)view:(id)arg1 performDragOperation:(id)arg2;
- (unsigned long long)view:(id)arg1 draggingEntered:(id)arg2;
- (id)dragTypesForView:(id)arg1;
- (void)detailDocumentViewLayoutDidComplete:(id)arg1;
- (void)detailDocumentView:(id)arg1 willTrackContextMenuFromEvent:(id)arg2;
- (void)detailDocumentView:(id)arg1 togglePreview:(id)arg2;
- (void)detailDocumentView:(id)arg1 performDelete:(id)arg2;
- (id)detailDocumentView:(id)arg1 menuForEvent:(id)arg2;
- (void)detailDocumentView:(id)arg1 didTrackContextMenuFromEvent:(id)arg2;
- (void)detailDocumentView:(id)arg1 cancelPreview:(id)arg2;
- (void)detailDocumentViewDidFinishBandSelecting:(id)arg1;
- (void)detailDocumentView:(id)arg1 didUpdateBandSelectionRect:(struct CGRect)arg2 withEvent:(id)arg3 andInitialSelection:(id)arg4;
- (id)detailDocumentViewInitialSelectionForBandSelection:(id)arg1;
- (void)zoomCanvas:(id)arg1;
- (void)imageSlicingViewContainer:(id)arg1 userDidChooseResizingMode:(long long)arg2;
- (void)imageSlicingViewContainer:(id)arg1 userDidChangeResizingBehavior:(id)arg2;
- (void)imageCatalogItem:(id)arg1 didChangeKey:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4;
- (void)applyBatchedModelChanged:(id)arg1;
- (void)updateContentForSlicedImageContainer:(id)arg1;
- (void)detailDocumentViewWillLayoutTopDown:(id)arg1;
- (void)rescaleViews;
- (void)drawsWithKeyAppearanceDidChange;
- (id)objectsForSelectAll;
- (void)imageSlicingViewContainer:(id)arg1 userDidMouseDown:(id)arg2;
- (void)pushSelectionToViews;
- (BOOL)item:(id)arg1 intersectsBandSelectionRect:(struct CGRect)arg2 fromView:(id)arg3;
- (id)bandSelectionCandidates;
- (id)slicingViewContainerForImageRep:(id)arg1;
- (void)refreshContentView;
- (id)displayedImageSets;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (BOOL)isSubEditorExistanceInSyncForItem:(id)arg1;
- (void)loadView;
- (id)showAlternateDetailControllerTitle;
- (id)backgroundColorAffectedViews;
- (BOOL)canZoomCanvas;
- (void)primitiveInvalidate;
- (id)initWithDocumentEditor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

