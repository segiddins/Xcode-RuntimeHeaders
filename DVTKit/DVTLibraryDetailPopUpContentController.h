//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTHUDPopUpContentViewController.h>

#import <DVTKit/DVTAssetDetailViewDelegate-Protocol.h>

@class DVTAssetDetailView, DVTChoice, DVTDelayedInvocation, DVTLibraryAsset, DVTLibraryController, DVTLibraryDetailController, DVTLibraryDetailEditorController, DVTLibraryDetailPopUpController, NSArray, NSString;
@protocol DVTInvalidation, DVTLibraryDetailPopUpContentControllerDelegate;

@interface DVTLibraryDetailPopUpContentController : DVTHUDPopUpContentViewController <DVTAssetDetailViewDelegate>
{
    DVTLibraryDetailEditorController *_currentEditorViewController;
    id <DVTInvalidation> _assetDetailViewAssetToken;
    id <DVTLibraryDetailPopUpContentControllerDelegate> _delegate;
    DVTLibraryDetailPopUpController *_popUpController;
    DVTDelayedInvocation *_replacementViewInvocation;
    DVTChoice *_selectedDetailControllerChoice;
    DVTLibraryController *_libraryController;
    NSArray *_detailControllerChoices;
    struct {
        unsigned int isOpen:1;
        unsigned int synchronizingDetailViewContentViewWithAsset:1;
        unsigned char editingSelectedAsset;
        unsigned char canEditSelectedAsset;
        unsigned int _reserved:4;
    } _flags;
    DVTLibraryAsset *_assetDetailViewAsset;
    DVTAssetDetailView *_assetDetailView;
}

+ (id)synchronizedAssetKeyPathsForDetailView;
@property(retain, nonatomic) NSArray *detailControllerChoices; // @synthesize detailControllerChoices=_detailControllerChoices;
@property(retain) DVTAssetDetailView *assetDetailView; // @synthesize assetDetailView=_assetDetailView;
@property(readonly) DVTLibraryAsset *assetDetailViewAsset; // @synthesize assetDetailViewAsset=_assetDetailViewAsset;
@property(readonly) DVTLibraryController *libraryController; // @synthesize libraryController=_libraryController;
@property(retain, nonatomic) DVTChoice *selectedDetailControllerChoice; // @synthesize selectedDetailControllerChoice=_selectedDetailControllerChoice;
@property(retain, nonatomic) DVTLibraryDetailPopUpController *popUpController; // @synthesize popUpController=_popUpController;
@property(retain) id <DVTLibraryDetailPopUpContentControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopEditingSelectedAsset;
- (void)startEditingSelectedAsset;
- (void)synchronizeCurrentDetailControllerWithCurrentEditorController:(id)arg1;
- (void)makeSureCurrentEditorControllerHasFirstResponder;
- (void)scrollTopOfAssetDetailViewIntoView;
- (void)assetDetailView:(id)arg1 beginDraggingWithMouseDownEvent:(id)arg2 andMouseDraggedEvent:(id)arg3;
- (void)refreshDetailController:(id)arg1 withAsset:(id)arg2;
- (void)sizeDetailController:(id)arg1 toFitSuggestedSize:(struct CGSize)arg2 forAsset:(id)arg3;
- (void)assetDetailView:(id)arg1 didInstallDetailController:(id)arg2;
- (void)assetDetailView:(id)arg1 sizeViewController:(id)arg2 toFitSuggestedSize:(struct CGSize)arg3;
- (void)assetDetailView:(id)arg1 wasDoubleClickedInHeader:(id)arg2;
- (void)refreshDetailView;
@property(readonly) DVTLibraryDetailController *currentDetailController;
- (void)assetDetailView:(id)arg1 userDidSelectTab:(id)arg2;
- (void)detailControllerIdentifiersDidChangeForAsset:(id)arg1;
- (void)refreshDetailControllerTabChooserForAsset:(id)arg1;
- (id)detailControllerIdentifiersForAsset:(id)arg1;
- (void)synchronizeDetailViewContentViewWithAsset;
- (void)setAssetDetailViewAsset:(id)arg1;
- (void)assetDetailViewAsset:(id)arg1 didChangeValueForKeyPath:(id)arg2;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (id)selectedAsset;
@property BOOL canEditSelectedAsset;
@property(getter=isEditingSelectedAsset) BOOL editingSelectedAsset;
- (BOOL)firstResponderHasSelectedAsset:(id)arg1;
- (id)library;
- (void)primitiveInvalidate;
- (id)initWithLibraryController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

