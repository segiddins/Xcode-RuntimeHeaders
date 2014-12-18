//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

#import "DVTLibraryGroupObserver.h"

@class DVTBorderedView, DVTDelayedInvocation, DVTGroupedTileView, DVTLibrary, DVTLibraryDetailController, DVTLibraryDetailPopUpController, DVTNotificationToken, DVTObservingToken, DVTScrollView, DVTSearchField, NSArray, NSButton, NSDate, NSIndexSet, NSMutableSet, NSSearchField, NSSet, NSString, NSTreeController;

@interface DVTLibraryController : DVTViewController <DVTLibraryGroupObserver>
{
    DVTGroupedTileView *_assetTileView;
    DVTSearchField *_assetFilterField;
    DVTBorderedView *_filterBar;
    NSButton *_libraryViewToggleButton;
    DVTScrollView *_scrollView;
    DVTLibrary *_library;
    DVTLibraryDetailPopUpController *_detailPopUpController;
    long long _assetViewStyle;
    NSString *_filterString;
    NSArray *_filterComponents;
    id <DVTInvalidation> _rootGroupObservationToken;
    DVTObservingToken *_tileViewShowsFirstResponderKVOToken;
    DVTObservingToken *_tileViewIsFirstResponderKVOToken;
    DVTObservingToken *_tileViewSelectionIndexesKVOToken;
    NSIndexSet *_selectedLibraryGroupPairIndexes;
    id <DVTCancellable> _popUpTimerToken;
    NSMutableSet *_uniquedGroupSets;
    NSMutableSet *_uniquedAssetGroupSets;
    DVTNotificationToken *_detailPopUpControllerCloseToken;
    DVTNotificationToken *_assetScrollViewNotificationToken;
    DVTNotificationToken *_assetClipViewNotificationToken;
    struct CGSize _initialDraggingOffset;
    NSSet *_observedGroups;
    NSDate *_lastFilterDate;
    NSArray *_draggedGroups;
    NSArray *_draggedPairs;
    DVTDelayedInvocation *_iconValidationInvocation;
    struct {
        unsigned int synchronizingDetailViewContentViewWithAsset:1;
        unsigned int identifiesAssetsPerGroup:1;
        unsigned int filterCallbackIsPending:1;
        unsigned int acceptedDraggedAssets:1;
        unsigned int viewingLeafGroup:1;
        unsigned int inFilterMethod:1;
    } _flags;
    NSTreeController *_groupController;
}

+ (struct CGSize)maximumThumbnailSize;
+ (id)defaultViewNibBundle;
+ (id)defaultViewNibName;
@property(readonly) NSTreeController *groupController; // @synthesize groupController=_groupController;
@property(readonly) DVTLibrary *library; // @synthesize library=_library;
@property(readonly) NSString *filterString; // @synthesize filterString=_filterString;
@property(retain) NSArray *draggedPairs; // @synthesize draggedPairs=_draggedPairs;
@property(copy) NSArray *draggedGroups; // @synthesize draggedGroups=_draggedGroups;
@property(nonatomic) long long assetViewStyle; // @synthesize assetViewStyle=_assetViewStyle;
@property(readonly) NSSearchField *assetFilterField; // @synthesize assetFilterField=_assetFilterField;
- (void).cxx_destruct;
- (void)selectAssetFilterField;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)filterAssetsFromFilterField:(id)arg1;
- (void)cancelFiltering;
- (void)reallyFilter:(id)arg1;
- (void)clearFilterString;
- (void)beginFilteringWithString:(id)arg1;
- (void)setFilterString:(id)arg1;
- (id)filterComponents;
- (id)tooltipForDetailControllerRepresentedObject:(id)arg1 forAsset:(id)arg2;
- (id)titleForDetailControllerRepresentedObject:(id)arg1 forAsset:(id)arg2;
- (id)representedObjectForDetailControllerIdentifier:(id)arg1 index:(unsigned long long)arg2 forAsset:(id)arg3;
- (void)editSelectedAsset;
- (struct CGSize)detailAreaSize;
- (void)userDidPressEscapeInTileView:(id)arg1;
- (void)userDidPressSpaceBarInTileView:(id)arg1;
- (CDUnknownBlockType)tileView:(id)arg1 willProcessClick:(id)arg2;
- (void)tileView:(id)arg1 didProcessKeyEvent:(id)arg2;
- (void)stopTimerForShowingDetailPopUpController;
- (void)startTimerForShowingDetailPopUpControllerForAssetAndGroupPair:(id)arg1;
- (void)_openPopUpWithPair:(id)arg1;
- (void)updatePositionOfDetailPopUp;
- (BOOL)detailPopUpController:(id)arg1 canEditAsset:(id)arg2;
- (id)detailPopUpController:(id)arg1 viewControllerForEditingAsset:(id)arg2;
- (void)detailPopUpController:(id)arg1 dragAssetPairs:(id)arg2 withMouseDownEvent:(id)arg3 mouseDraggedEvent:(id)arg4 initialDraggedImageState:(id)arg5 allowedOperations:(unsigned long long)arg6 imageLocationOnScreen:(struct CGPoint)arg7;
- (void)detailPopUpControllerHeaderWasDoubleClicked:(id)arg1;
- (void)closeDetailPopUpController;
- (void)openDetailPopUpController;
- (void)cleanUpAfterClosingDetailPopUpController;
- (void)faultIconForAsset:(id)arg1;
- (void)refreshDetailView;
- (BOOL)canOpenDetailPopUp;
- (void)makeTileViewFirstResponder;
- (BOOL)tileViewIsFirstResponder;
@property(readonly) DVTLibraryDetailController *currentDetailController;
- (id)detailPopUpContentController;
- (struct CGSize)draggingStickiness:(id)arg1;
- (id)draggedImageState:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)tileView:(id)arg1 didChangeContextClickedObjectFrom:(id)arg2;
- (id)tileView:(id)arg1 typeCompletionStringForContentObject:(id)arg2;
- (BOOL)groupedTileView:(id)arg1 shouldDragLayoutItem:(id)arg2 withMouseDownEvent:(id)arg3;
- (id)groupedTileView:(id)arg1 layoutItemForRepresentedObject:(id)arg2;
- (id)groupedTileView:(id)arg1 labelForGroup:(id)arg2;
- (BOOL)groupedTileView:(id)arg1 shouldDrawAlternateHeaderColorForGroup:(id)arg2;
- (void)groupedTileViewDeleteSelectedItems:(id)arg1;
- (void)groupedTileViewUserPressedEnter:(id)arg1;
- (void)groupedTileView:(id)arg1 wasDoubleClicked:(id)arg2;
- (void)askDelegateToDepositeAssets:(id)arg1;
- (BOOL)depositAssets:(id)arg1;
- (BOOL)assetViewShouldAllowAssetDrops;
- (void)resetIconContent;
- (id)orderedAssetsForDisplayedAssets:(id)arg1;
- (id)orderedAssetsForDisplayedAssets:(id)arg1 inGroup:(id)arg2;
- (BOOL)assetPassesFilter:(id)arg1;
- (void)applyAssetViewStyle;
- (void)applyAssetViewStyleToAssetView:(id)arg1;
- (BOOL)selectAsset:(id)arg1 inGroup:(id)arg2;
@property(readonly) NSArray *selectedAssets;
@property(readonly) NSArray *selectedAssetPairs;
- (BOOL)shouldShowGridLines;
- (void)makeItemForGroupVisible:(id)arg1 select:(BOOL)arg2 byExtendingSelection:(BOOL)arg3 edit:(BOOL)arg4;
- (void)selectAssets:(id)arg1 inGroup:(id)arg2;
- (id)assetTileViewContent;
- (id)unsynchronizedAssetTileViewContent;
- (id)imageForGroup:(id)arg1;
- (id)assetViewSourceGroups;
- (id)selectedGroups;
- (void)selectLibrarySourceWithIdentifier:(id)arg1 subpath:(id)arg2 byExtendingSelection:(BOOL)arg3;
- (id)currentTileViewUIState;
- (void)applyTileViewUIState:(id)arg1;
- (void)restoreUIState;
- (void)saveUIState;
- (id)libraryUIStateDefaultsKey;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)canPerformRemoveSelectedAssetGroups;
- (BOOL)canPerformRemoveSelectedAssetsFromGroup;
- (BOOL)canPerformRemoveSelectedAssetsFromLibrary;
- (void)performRemoveAssetsFromGroups:(id)arg1;
- (void)performRemoveSelectedAssetGroups;
- (BOOL)firstResponderHasSelectedAsset:(id)arg1;
- (id)parentForNewGroup;
- (id)groupedTileView:(id)arg1 draggedImageState:(id)arg2;
- (void)groupedTileView:(id)arg1 concludeDragOperation:(id)arg2;
- (BOOL)groupedTileView:(id)arg1 performDragOperation:(id)arg2;
- (BOOL)groupedTileView:(id)arg1 prepareForDragOperation:(id)arg2;
- (void)groupedTileView:(id)arg1 draggingExited:(id)arg2;
- (unsigned long long)groupedTileView:(id)arg1 draggingEntered:(id)arg2;
- (unsigned long long)groupedTileView:(id)arg1 draggingUpdated:(id)arg2;
- (unsigned long long)calculateAssetViewDragOperation:(id)arg1 targetGroup:(id *)arg2 targetIndex:(long long *)arg3;
- (unsigned long long)draggingOperationForDragInfo:(id)arg1 withTargetGroup:(id)arg2 targetCanBeMoveWithinGroup:(BOOL)arg3;
- (BOOL)canCreateAssetsFromPasteboard:(id)arg1 targetingLibrarySourceIdentifier:(id *)arg2;
- (void)addObjectsFromDraggingInfo:(id)arg1 toGroup:(id)arg2;
- (void)insertObjectsFromDraggingInfo:(id)arg1 intoGroup:(id)arg2 atIndex:(long long)arg3;
- (BOOL)createAsset:(id *)arg1 forLibrarySourceWithIdentifier:(id *)arg2 fromPasteboard:(id)arg3;
- (id)addAssetsFromDraggingInfo:(id)arg1 toGroup:(id)arg2 copy:(BOOL)arg3;
- (id)insertAssetsFromDraggingInfo:(id)arg1 intoGroup:(id)arg2 atIndex:(long long)arg3 copy:(BOOL)arg4;
- (void)groupedTileViewDragSelectedItems:(id)arg1 withMouseDownEvent:(id)arg2 andMouseDraggedEvent:(id)arg3;
- (id)draggedImageStateForAssetGroupPairs:(id)arg1 draggedPair:(id)arg2 referenceRectForClickedItem:(struct CGRect *)arg3;
- (void)groupedTileViewCopySelectedItems:(id)arg1;
- (void)dragDidUpdate:(id)arg1 operation:(unsigned long long)arg2 previousOperation:(unsigned long long)arg3;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3 withException:(id)arg4 shouldSlideBack:(char *)arg5;
- (void)didFinishDraggingAssets:(id)arg1 info:(id)arg2 shouldSlideBack:(char *)arg3;
- (void)dragAssetPairs:(id)arg1 withMouseDownEvent:(id)arg2 mouseDraggedEvent:(id)arg3 initialDraggedImageState:(id)arg4 allowedOperations:(unsigned long long)arg5 imageLocationInWindow:(struct CGPoint)arg6;
- (void)willBeginDraggingAssets:(id)arg1;
- (void)populatePasteboard:(id)arg1 withAssetAndCategoryPairs:(id)arg2 defaultDraggedImageState:(id *)arg3 identifierMapTable:(id *)arg4;
- (void)populatePasteboard:(id)arg1 withAssets:(id)arg2 defaultDraggedImageState:(id *)arg3 identifierMapTable:(id *)arg4;
- (void)populatePasteboard:(id)arg1 withAssets:(id)arg2;
- (id)defaultDragImageState:(id)arg1;
- (id)initialDragImageState:(id)arg1;
- (BOOL)transfersFirstResponderToDragDestination:(id)arg1;
- (void)registerForDropTypes;
- (id)draggedAssets;
- (id)readableAssetPasteboardTypes;
- (id)assetGroupPasteboardType;
- (id)assetPasteboardType;
- (void)userDidEditAsset:(id)arg1;
- (void)applyAssetSelectionIndexes;
- (void)toggleAssetViewStyle:(id)arg1;
- (void)invalidateIconContent;
- (void)batchedValidateIconContent:(id)arg1;
- (void)setObservedGroups:(id)arg1;
- (void)dropUnusedAssetAndGroupSets:(id)arg1;
- (id)allAssetAndGroupSets;
- (id)uniquedAssetAndGroupSetForAsset:(id)arg1 andGroups:(id)arg2;
- (BOOL)removeAssets:(id)arg1 error:(id *)arg2;
- (BOOL)canPerformRemoveAssetFromLibrary:(id)arg1;
- (BOOL)canRemoveAsset:(id)arg1;
- (id)editorViewControllerForAsset:(id)arg1;
- (BOOL)canEditAsset:(id)arg1;
- (id)searchStringsForAsset:(id)arg1;
- (BOOL)isGroupDisplayedInAssetView:(id)arg1;
- (void)libraryDidLoad;
- (id)representedObjectWithString:(id)arg1 forAsset:(id)arg2;
- (id)imageForLibraryAsset:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)setupScrollMonitoringAfterInstall;
- (void)setupLibraryObservingAfterInstalling;
- (void)libraryGroupDidChangeAssets:(id)arg1;
- (void)libraryDidChangeAssets:(id)arg1;
- (void)setupFilterBarAfterInstalling;
- (void)setupAssetTileViewAfterInstalling;
@property(readonly) BOOL searchFieldIsFirstResponder;
@property(readonly, getter=isViewingLeafGroup) BOOL viewingLeafGroup;
- (id)libraryWindow;
@property BOOL identifiesAssetsPerGroup;
- (id)assetScrollView;
- (id)assetTileViewForceSynchronizedContent:(BOOL)arg1;
- (void)loadView;
- (void)setRepresentedExtension:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)primitiveInvalidate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

