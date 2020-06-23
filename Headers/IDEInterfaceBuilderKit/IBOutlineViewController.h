//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEInterfaceBuilderKit/IBEndPointProvider-Protocol.h>
#import <IDEInterfaceBuilderKit/IBOutlineViewDelegate-Protocol.h>
#import <IDEInterfaceBuilderKit/NSOutlineViewDataSource-Protocol.h>
#import <IDEInterfaceBuilderKit/NSOutlineViewDelegate-Protocol.h>
#import <IDEInterfaceBuilderKit/NSUserInterfaceValidations-Protocol.h>

@class DVTBorderedView, DVTDelayedInvocation, DVTEmptyContentPlaceholder, DVTObservingToken, IBAbstractDocumentEditor, IBCancellationToken, IBDocument, IBMutableIdentityDictionary, IBOutlineView, IBOutlineViewControllerItem, IBOutlineViewImageAndTextCell, NSArray, NSMutableSet, NSPredicate, NSSet, NSString;
@protocol IBOutlineViewControllerDelegate;

@interface IBOutlineViewController : IDEViewController <IBEndPointProvider, NSOutlineViewDataSource, NSOutlineViewDelegate, NSUserInterfaceValidations, IBOutlineViewDelegate>
{
    IBOutlineViewControllerItem *_placeholdersGroupItem;
    IBMutableIdentityDictionary *_memberWrapperToItemMap;
    NSArray *_topLevelGroupsOtherThanPlaceholders;
    NSSet *_observedMemberWrappers;
    DVTObservingToken *_kvoFirstResponderToken;
    DVTObservingToken *_kvoDocumentUsesAutolayoutToken;
    IBCancellationToken *_documentStatusObservingToken;
    DVTDelayedInvocation *_syncDelayedInvocation;
    IBOutlineViewImageAndTextCell *_prototypeCell;
    IBOutlineViewImageAndTextCell *_prototypeGroupCell;
    IBOutlineViewImageAndTextCell *_prototypeUninstalledObjectCell;
    NSMutableSet *_pendingObjectsToRefreshAutolayoutStatus;
    DVTDelayedInvocation *_autolayoutStatusDelayedInvocation;
    BOOL _allowPushSelectionToOutlineViewNextInvocation;
    BOOL _allowDirectDropInOutlineView;
    long long _ignoreOutlineViewSelectionUpdates;
    IBMutableIdentityDictionary *_unfilteredExpansionState;
    BOOL _wrapperTreeValid;
    BOOL _drawsWithActiveLook;
    DVTEmptyContentPlaceholder *_placeholderView;
    IBOutlineView *_outlineView;
    DVTBorderedView *_borderedView;
    NSString *_filterString;
    id <IBOutlineViewControllerDelegate> _delegate;
    IBAbstractDocumentEditor *_documentEditor;
    NSSet *_selectedMembers;
    NSPredicate *_filterPredicate;
    IBOutlineViewControllerItem *_rootItem;
}

+ (id)wrapperKeyPathsToObserve;
+ (id)defaultViewNibBundle;
+ (id)defaultViewNibName;
@property(retain) IBOutlineViewControllerItem *rootItem; // @synthesize rootItem=_rootItem;
@property(copy) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(readonly, copy) NSSet *selectedMembers; // @synthesize selectedMembers=_selectedMembers;
@property(retain, nonatomic) IBAbstractDocumentEditor *documentEditor; // @synthesize documentEditor=_documentEditor;
@property __weak id <IBOutlineViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL drawsWithActiveLook; // @synthesize drawsWithActiveLook=_drawsWithActiveLook;
@property(copy) NSString *filterString; // @synthesize filterString=_filterString;
@property(retain) DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(retain) IBOutlineView *outlineView; // @synthesize outlineView=_outlineView;
@property(retain) DVTEmptyContentPlaceholder *placeholderView; // @synthesize placeholderView=_placeholderView;
- (void).cxx_destruct;
- (void)cut:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)delete:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)paste:(id)arg1;
- (void)performPaste;
- (void)invalidateWrapperTree;
- (id)childGroupsOfMember:(id)arg1 atIndex:(long long)arg2;
- (struct _NSRange)rangeOfChildGroup:(id)arg1 ofObject:(id)arg2;
- (id)rangesForChildGroupsOfObject:(id)arg1;
- (id)tellObject:(id)arg1 toAcceptPasteboard:(id)arg2 withContext:(id)arg3 selectNewChildren:(BOOL)arg4;
- (void)copy:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (id)objectPasteboardType;
- (id)objectsToDuplicate;
- (BOOL)selectionIsDuplicable;
- (id)duplicableSelectedObjects;
- (id)objectsToCopy;
- (BOOL)selectionIsCopyable;
- (id)copyableSelectedObjects;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)canMoveAllObjects:(id)arg1;
- (void)showConnectionsUIForInitialEvent:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (void)beginOldSchoolConnectionWithInitialEvent:(id)arg1;
- (void)showConnectionsPanelForInitialEvent:(id)arg1;
- (BOOL)shouldFilterConstraintChoicesBasedUponAngleOfLine;
- (void)indicateConnectionSuccessForTarget:(id)arg1;
- (id)showTargetIdentifierForEndPoint:(id)arg1;
- (id)endPointsFromBackToFrontAtPoint:(struct CGPoint)arg1 inView:(id)arg2 withContext:(id)arg3 forDocument:(id)arg4 connectionHandler:(id *)arg5;
- (void)revealSpringLoadedObjectAndIndicateSuccess:(id)arg1;
- (id)springLoadedObjectInfoAtPoint:(struct CGPoint)arg1 inView:(id)arg2 withContext:(id)arg3 forDocument:(id)arg4;
- (id)highlightObjects:(id)arg1 showLabels:(BOOL)arg2 successfulObjects:(id *)arg3;
- (BOOL)isViewVisibleInWindow;
- (void)synchronizeOutlineViewSelection;
- (void)selectMembers:(id)arg1 withOutlineExpansion:(BOOL)arg2;
- (void)selectMembers:(id)arg1;
- (void)pushRootGroupState;
- (BOOL)shouldShowEmptyOutlinePlaceholder;
- (id)emptyOutlinePlaceholderString;
- (void)pushSelectionToOutlineView;
- (void)recursivelyExpandItem:(id)arg1;
- (void)outlineViewWasDoubleClicked:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (BOOL)centerTopLevelObjectInEditorSelection;
- (id)childrenSelectionForGroupMember:(id)arg1;
- (void)didSelectSingleSelectionSelectableVirtualItem:(id)arg1;
- (id)singleSelectedSelectableVirtualOutlineViewControllerItem;
- (id)readSelectedMembersFromOutlineView;
- (void)whileIgnoringOutlineViewSelectionUpdates:(CDUnknownBlockType)arg1;
- (BOOL)isIgnoreOutlineViewSelectionUpdates;
- (id)concreteSelectedGroups;
- (id)concreteSelectedConnections;
- (id)concreteSelectedObjects;
- (id)concreteSelectedMembers;
- (id)orderedSelectedMembers;
- (BOOL)isMemberBuiltInPlaceholder:(id)arg1;
- (void)outlineView:(id)arg1 handleRightOrControlLeftDrag:(id)arg2;
- (void)outlineView:(id)arg1 handleRightOrControlLeftClick:(id)arg2;
- (void)outlineView:(id)arg1 didHandleMouseDown:(id)arg2;
- (void)outlineView:(id)arg1 handleMouseDown:(id)arg2;
- (BOOL)outlineView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupHeaderItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)wantsBoldGroupHeaderFont;
- (id)prototypeGroupCell;
- (id)prototypeUninstalledObjectCell;
- (id)prototypeCell;
- (id)basePrototypeCell;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldCollapseItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (void)_refreshAutolayoutStatus;
- (id)computeStatusImageForItem:(id)arg1;
- (id)autolayoutStatusMemberWrapperForTopLevelObject:(id)arg1;
- (void)_invalidateAutolayoutStatusForObject:(id)arg1;
- (BOOL)_shouldHaveAutolayoutIssuesIndicatorForItem:(id)arg1;
- (BOOL)_hasLocalizationIssues:(id)arg1;
- (id)_aggregateStatusAtAndBelowItem:(id)arg1;
- (id)strictItemForMemberWrapper:(id)arg1;
- (id)itemForMemberWrapper:(id)arg1;
- (void)syncWrapperTreeWithDocument;
- (void)buildWrapperTreeCreatingRootIfNecessary;
- (BOOL)memberParticipatesInItemTree:(id)arg1;
- (id)itemTreeFromMemberWrapperTree:(id)arg1 explicitItemClass:(Class)arg2;
- (Class)outlineViewControllerItemClassForMemberWrapper:(id)arg1;
- (void)topLevelObjectsChanged;
- (BOOL)waitingForSynchronization;
- (void)setObservedMemberWrappers:(id)arg1;
- (void)stopObservingMemberWrappers:(id)arg1;
- (void)startObservingMemberWrappers:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateFilterForItemTree:(id)arg1;
- (void)filterStringChanged;
- (void)restoreOutlineExpansionStateIfNeededForFiltering;
- (void)stashOutlineExpansionStateIfNeededForFiltering;
- (BOOL)isFiltering;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)owningEditorInstalled;
- (void)viewDidInstall;
- (void)loadView;
@property(readonly) IBDocument *document;
- (void)registerWithDocumentEditor;
- (void)registerEndPointProviderAndDragAndDropTypesIfPossible;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

