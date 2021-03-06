//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

#import <DVTLibraryKit/DVTLibraryTileViewDelegate-Protocol.h>

@class DVTBorderedView, DVTDelayedInvocation, DVTLibrary, DVTLibraryTileView, DVTObservingToken, DVTSearchField, NSAppearance, NSArray, NSDate, NSError, NSEvent, NSMapTable, NSMutableSet, NSSearchField, NSSet, NSString, NSTreeController, _TtC13DVTLibraryKit27LibraryBannerViewController;
@protocol DVTLibraryControllerDelegate;

@interface DVTLibraryController : DVTViewController <DVTLibraryTileViewDelegate>
{
    DVTLibraryTileView *_assetTileView;
    DVTSearchField *_assetFilterField;
    DVTBorderedView *_filterBar;
    long long _assetViewStyle;
    DVTLibrary *_library;
    NSString *_filterString;
    NSArray *_filterComponents;
    DVTObservingToken *_tileViewIsFirstResponderKVOToken;
    NSSet *_selectedAssetIndexPaths;
    struct CGSize _initialDraggingOffset;
    NSDate *_lastFilterDate;
    NSArray *_draggedAssets;
    NSEvent *_dragInitiatingMouseDown;
    NSArray *_previouslySelectedAssets;
    NSMapTable *_tileKVOObservations;
    DVTDelayedInvocation *_iconValidationInvocation;
    BOOL _filterCallbackIsPending;
    BOOL _acceptedDraggedAssets;
    BOOL _inFilterMethod;
    NSMutableSet *_deferedIconFaults;
    BOOL _hasEmphmeralPresentation;
    id <DVTLibraryControllerDelegate> _delegate;
    NSError *_error;
    _TtC13DVTLibraryKit27LibraryBannerViewController *_libraryBannerViewController;
    NSTreeController *_groupController;
}

+ (struct CGSize)maximumThumbnailSize;
+ (id)defaultViewNibBundle;
+ (id)defaultViewNibName;
- (void).cxx_destruct;
@property(readonly) NSSearchField *assetFilterField; // @synthesize assetFilterField=_assetFilterField;
@property(readonly) NSTreeController *groupController; // @synthesize groupController=_groupController;
@property(retain) NSArray *draggedAssets; // @synthesize draggedAssets=_draggedAssets;
@property(retain) _TtC13DVTLibraryKit27LibraryBannerViewController *libraryBannerViewController; // @synthesize libraryBannerViewController=_libraryBannerViewController;
@property(nonatomic) BOOL hasEmphmeralPresentation; // @synthesize hasEmphmeralPresentation=_hasEmphmeralPresentation;
@property(nonatomic) long long assetViewStyle; // @synthesize assetViewStyle=_assetViewStyle;
@property(readonly) NSString *filterString; // @synthesize filterString=_filterString;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly) DVTLibrary *library; // @synthesize library=_library;
@property(retain) id <DVTLibraryControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewDidChangeEffectiveAppearance;
- (void)libraryTileViewDidChangeEffectiveAppearance:(id)arg1;
- (void)focusAssetFilterField;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)filterAssetsFromFilterField:(id)arg1;
- (void)cancelFiltering;
- (void)reallyFilter:(id)arg1;
- (void)updateFilterString:(id)arg1;
- (void)setFilterString:(id)arg1;
- (id)filterComponents;
- (void)faultIconForAsset:(id)arg1;
- (void)makeTileViewFirstResponder;
- (BOOL)tileViewIsFirstResponder;
- (id)draggedImageState:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)libraryTileViewDeleteSelectedItems:(id)arg1;
- (void)performDeleteAssets:(id)arg1;
- (void)libraryTileViewUserPressedEnter:(id)arg1;
- (void)libraryTileView:(id)arg1 assetViewItemPerformedAccessibilityPick:(id)arg2;
- (void)libraryTileView:(id)arg1 assetViewItem:(id)arg2 wasDoubleClicked:(id)arg3;
- (void)insertSelectedContentIntoTargetDocumentWithEvent:(id)arg1;
- (BOOL)depositAssets:(id)arg1 withEvent:(id)arg2;
- (BOOL)depositAssets:(id)arg1;
- (id)libraryTileView:(id)arg1 iconForItem:(id)arg2;
- (id)imageOrFallbackForAsset:(id)arg1;
- (id)libraryTileView:(id)arg1 informationTextForItem:(id)arg2;
- (id)libraryTileView:(id)arg1 badgeStringForItem:(id)arg2;
- (id)libraryTileView:(id)arg1 summaryForItem:(id)arg2;
- (id)libraryTileView:(id)arg1 titleForItem:(id)arg2;
- (void)resetIconContent;
- (BOOL)showsSectionHeaders;
- (BOOL)showsSummariesInSourceList;
- (BOOL)isShowingTileForAsset:(id)arg1;
- (void)libraryTileView:(id)arg1 didStopUsingItemWithRepresentedObject:(id)arg2;
- (void)libraryTileViewDidEndLiveResize:(id)arg1;
- (void)libraryTileView:(id)arg1 willStartUsingItemWithRepresentedObject:(id)arg2;
- (CDUnknownBlockType)assetFilterPredicate;
- (BOOL)assetPassesFilter:(id)arg1;
@property(readonly) NSArray *selectedAssets;
- (void)selectAssets:(id)arg1;
- (id)assetTileViewContent;
- (id)unsynchronizedAssetTileViewContent;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)canPerformRemoveSelectedAssetsFromLibrary;
- (id)libraryTileView:(id)arg1 draggedImageState:(id)arg2;
- (void)libraryTileView:(id)arg1 concludeDragOperation:(id)arg2;
- (BOOL)libraryTileView:(id)arg1 performDragOperation:(id)arg2;
- (BOOL)libraryTileView:(id)arg1 prepareForDragOperation:(id)arg2;
- (void)libraryTileView:(id)arg1 draggingExited:(id)arg2;
- (unsigned long long)libraryTileView:(id)arg1 draggingEntered:(id)arg2;
- (unsigned long long)libraryTileView:(id)arg1 draggingUpdated:(id)arg2;
- (unsigned long long)calculateAssetViewDragOperation:(id)arg1;
- (unsigned long long)draggingOperationForDragInfo:(id)arg1;
- (BOOL)canCreateAssetsFromPasteboard:(id)arg1;
- (id)insertAssetFromPasteboard:(id)arg1;
- (void)draggedImage:(id)arg1 beganAt:(struct CGPoint)arg2;
- (void)libraryTileView:(id)arg1 dragItems:(id)arg2 primaryItem:(id)arg3 withMouseDownEvent:(id)arg4 andMouseDraggedEvent:(id)arg5;
- (id)initialDraggedImageStateForAssets:(id)arg1 draggedAsset:(id)arg2 referenceRectForClickedItem:(struct CGRect *)arg3;
- (id)makeOneOffViewControllerForAsset:(id)arg1 synchronized:(BOOL)arg2;
- (void)libraryTileViewDidCancel:(id)arg1;
- (void)libraryTileView:(id)arg1 copyItems:(id)arg2;
- (void)dragDidUpdate:(id)arg1 operation:(unsigned long long)arg2 previousOperation:(unsigned long long)arg3;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3 withException:(id)arg4 shouldSlideBack:(char *)arg5;
- (BOOL)draggedOperationMakesDestinationKeyOnSuccess;
- (void)dragAssets:(id)arg1 withMouseDownEvent:(id)arg2 mouseDraggedEvent:(id)arg3 initialDraggedImageState:(id)arg4 allowedOperations:(unsigned long long)arg5 imageLocationInWindow:(struct CGPoint)arg6;
- (void)willBeginDraggingAssets:(id)arg1;
- (void)populatePasteboard:(id)arg1 withAssets:(id)arg2 defaultDraggedImageState:(id *)arg3 identifierMapTable:(id *)arg4;
- (void)populatePasteboard:(id)arg1 withAssets:(id)arg2;
- (id)defaultDragImageState:(id)arg1;
- (BOOL)dragIsOverLibrary:(id)arg1;
- (id)initialDragImageState:(id)arg1;
- (BOOL)transfersFirstResponderToDragDestination:(id)arg1;
- (void)registerForDropTypes;
- (id)readableAssetPasteboardTypes;
- (void)applyAssetSelectionIndexes;
- (void)addNewAssetFromPasteboard:(id)arg1;
- (BOOL)insertNewAssetFromPasteboard:(id)arg1;
- (BOOL)editSelectedAsset;
- (void)invalidateIconContent;
- (void)batchedValidateIconContent:(id)arg1;
- (id)makeViewForAssetVisible:(id)arg1;
- (BOOL)removeAssets:(id)arg1 error:(id *)arg2;
- (BOOL)canPerformRemoveAssetFromLibrary:(id)arg1;
- (BOOL)canRemoveAsset:(id)arg1;
- (BOOL)canEditAsset:(id)arg1;
- (id)searchStringsForAsset:(id)arg1;
- (void)libraryDidLoad;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)libraryDidChangeAssets:(id)arg1;
- (void)libraryTileView:(id)arg1 didSelect:(id)arg2;
@property(readonly) BOOL isShowingPlaceholder;
@property(readonly) double defaultContentHeight;
@property(copy, nonatomic) NSString *emptyContentSubtitle;
@property(copy, nonatomic) NSString *emptyContentString;
@property(readonly) NSAppearance *overridingAppearance;
@property(readonly) BOOL searchFieldIsFirstResponder;
- (id)libraryWindow;
- (id)assetScrollView;
- (id)assetTileViewForceSynchronizedContent:(BOOL)arg1;
- (id)inlineDetailViewPlaceholderForAssets:(id)arg1;
- (id)inlineDetailViewForAssets:(id)arg1;
- (id)inlineDetailView;
- (BOOL)supportsAssetViewStyle:(long long)arg1;
- (void)syncAssetViewStyle;
- (void)loadView;
- (void)syncEmphmeralPresentation;
- (BOOL)sendResponderActionToTileView:(SEL)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)primitiveInvalidate;
- (id)initWithLibrary:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

