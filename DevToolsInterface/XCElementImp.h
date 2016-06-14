//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsInterface/XCElementP-Protocol.h>

@class NSString, XCElementMainImp, XCElementSpacings;

@interface XCElementImp : NSObject <XCElementP>
{
    XCElementMainImp *_mainElement;
    XCElementImp *_next;
    XCElementImp *_prev;
    XCElementImp *_first;
    XCElementImp *_last;
    XCElementImp *_parent;
    XCElementSpacings *_spacings;
    struct _XCElementInset _addedSpace;
    struct _XCEPoint _origin;
    struct _XCEPoint _corner;
    struct _XCESize _size;
    struct _XCESize _inset;
    struct _XCESize _offset;
    struct _XCESize _minSize;
    struct _XCESize _maxSize;
    struct _XCESize _originalSize;
    struct _XCEPoint _minPos;
    struct _XCEPoint _maxPos;
    struct _XCEPoint _cornerMinPos;
    struct _XCEPoint _cornerMaxPos;
    unsigned long long _lineIndex;
    struct CGSize _userMinSize;
    struct CGSize _userMaxSize;
    struct CGSize _userDefaultSize;
    NSString *_debugName;
    long long _drawingImage;
    struct {
        unsigned int vertical:1;
        unsigned int selected:1;
        unsigned int selectable:1;
        unsigned int preferInline:1;
        unsigned int draggable:1;
        unsigned int childrenDraggableByDefault:1;
        unsigned int stretchX:1;
        unsigned int stretchY:1;
        unsigned int childrenStretchX:1;
        unsigned int childrenStretchY:1;
        unsigned int canInlineX:1;
        unsigned int canInlineY:1;
        unsigned int structureChanged:1;
        unsigned int sizeChanged:1;
        unsigned int minChanged:1;
        unsigned int maxChanged:1;
        unsigned int disableValidate:1;
        unsigned int userMinSizeEnabled:1;
        unsigned int userMaxSizeEnabled:1;
        unsigned int redrawRequested:1;
        unsigned int shown:1;
        unsigned int fillGapsHorizontally:1;
        unsigned int fillGapsVertically:1;
        unsigned int insetChanged:1;
        unsigned int needPositionElements:1;
        unsigned int movesSplitHorizontally:1;
        unsigned int movesSplitVertically:1;
        unsigned int _reserved:5;
    } _flags;
}

+ (void)setCurrentSizer:(id)arg1;
+ (id)currentSizer;
- (long long)testG:(long long)arg1;
- (id)childReverseEnumerator;
- (id)childEnumerator;
- (long long)testF:(long long)arg1;
- (long long)testE:(long long)arg1;
- (struct _XCEPoint)_debugCornerMaxPos;
- (struct _XCEPoint)_debugCornerMinPos;
- (struct _XCEPoint)_debugMaxPos;
- (struct _XCEPoint)_debugMinPos;
- (struct _XCESize)_debugMaxSize;
- (struct _XCESize)_debugMinSize;
- (struct _XCESize)_debugInset;
- (struct _XCESize)_debugOffset;
- (void)dealloc;
- (BOOL)disableValidate;
- (void)setDisableValidate:(BOOL)arg1;
- (void)receiveXCESignal:(id)arg1;
- (void)highlightSearchResult:(id)arg1;
- (BOOL)checkElementPointerIsValid:(id)arg1;
- (id)searchResultsFor:(id)arg1;
- (void)searchResultsFor:(id)arg1 addTo:(id)arg2;
- (struct NSObject *)searchAndHighlight:(id)arg1;
- (id)searchableString;
- (void)applyDefaultSizesAdjustingViewSize;
- (void)recursiveAdjustSizeOfGroupsForContent;
- (void)recursiveSetSizeToDefault;
- (void)setSizeToDefault;
- (void)endPositionIndependentSizing;
- (void)beginPositionIndependentSizing;
- (BOOL)positionIndependentSizing;
- (void)selectTabCandidate;
- (struct NSObject *)tabCandidatePreceding:(struct NSObject *)arg1;
- (struct NSObject *)tabCandidateFollowing:(struct NSObject *)arg1;
- (struct CGRect)editingEditorOffsets;
- (void)setEditingEditorOffsets:(struct CGRect)arg1;
- (void)setEditingObject:(id)arg1;
- (id)editingObject;
- (void)setEditingElement:(struct NSObject *)arg1;
- (struct NSObject *)editingElement;
- (void)needPositionElements;
- (void)unregisterAsEditor;
- (void)registerAsEditor;
- (void)objectDidEndEditing:(struct NSObject *)arg1;
- (void)objectDidBeginEditing:(struct NSObject *)arg1;
- (void)objectDidEndEditing:(struct NSObject *)arg1 inElement:(struct NSObject *)arg2;
- (void)objectDidBeginEditing:(struct NSObject *)arg1 inElement:(struct NSObject *)arg2;
- (void)discardEditing;
- (BOOL)commitEditing;
- (BOOL)isInEditingState;
- (BOOL)isEditing;
- (id)elementView;
- (void)_debugPrintUpward:(long long)arg1;
- (void)_debugPrintRecursive;
- (void)_debugPrintRecursive:(long long)arg1;
- (void)_debugPrint:(long long)arg1;
- (BOOL)_validMouseDownLoc:(struct CGPoint)arg1;
- (struct _XCESize)sourceSize;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 fromView:(id)arg2;
- (void)setInitialSize:(struct CGSize)arg1;
- (BOOL)userMaxSizeEnabled;
- (BOOL)userMinSizeEnabled;
- (void)setUserMaxSizeEnabled:(BOOL)arg1;
- (void)setUserMinSizeEnabled:(BOOL)arg1;
- (struct CGSize)userMaxSize;
- (struct CGSize)userMinSize;
- (void)setUserMaxSize:(struct CGSize)arg1;
- (void)setUserMinSize:(struct CGSize)arg1;
- (void)insetChanged;
- (void)minChanged;
- (void)maxChanged;
- (void)sizeChanged;
- (void)structureChanged;
- (struct CGRect)calculateEnclosure;
- (struct CGRect)calculateContentFrame;
- (struct _XCElementInset)enclosure;
- (struct _XCElementInset)contentOffset;
- (struct _XCElementInset)totalSpace;
- (void)setTotalSpace:(struct _XCElementInset)arg1;
- (void)setAddedSpaceToCancelDefaultSpace;
- (void)addSpaceRight:(double)arg1 bottom:(double)arg2;
- (void)addSpaceTop:(double)arg1 bottom:(double)arg2;
- (void)addSpaceTop:(double)arg1 right:(double)arg2;
- (void)addSpaceTop:(double)arg1 right:(double)arg2 bottom:(double)arg3;
- (void)addSpaceLeft:(double)arg1 bottom:(double)arg2;
- (void)addSpaceLeft:(double)arg1 right:(double)arg2;
- (void)addSpaceLeft:(double)arg1 right:(double)arg2 bottom:(double)arg3;
- (void)addSpaceLeft:(double)arg1 top:(double)arg2;
- (void)addSpaceLeft:(double)arg1 top:(double)arg2 bottom:(double)arg3;
- (void)addSpaceLeft:(double)arg1 top:(double)arg2 right:(double)arg3;
- (void)addSpaceLeft:(double)arg1 top:(double)arg2 right:(double)arg3 bottom:(double)arg4;
- (double)addedSpaceBottom;
- (void)addSpaceBottom:(double)arg1;
- (double)addedSpaceRight;
- (void)addSpaceRight:(double)arg1;
- (double)addedSpaceTop;
- (void)addSpaceTop:(double)arg1;
- (double)addedSpaceLeft;
- (void)addSpaceLeft:(double)arg1;
- (void)addSpace:(struct _XCElementInset)arg1;
- (struct _XCElementInset)addedSpace;
- (void)setAddedSpace:(struct _XCElementInset)arg1;
- (double)spaceBottom;
- (double)spaceRight;
- (double)spaceTop;
- (double)spaceLeft;
- (id)localSpacingsCreateIfNecessary;
- (void)spacingsChanged:(id)arg1;
- (id)spacings;
- (void)setSpacings:(id)arg1;
- (BOOL)handleMouseDownOnElement:(struct NSObject *)arg1 event:(id)arg2;
- (id)cursorAt:(struct CGPoint)arg1;
- (id)cursorElementLevelAt:(struct CGPoint)arg1;
- (id)contextMenu:(struct CGPoint)arg1;
- (struct CGPoint)imageLoc;
- (id)image;
- (id)_imagePhotocopyNew2_frame;
- (id)_imagePhotocopyNew2_bounds;
- (id)_imagePhotocopyNew;
- (id)_imageSymbolic;
- (BOOL)validate;
- (void)releaseNow:(id)arg1 msg:(id)arg2;
- (void)releaseSoon;
- (id)onlyChild;
- (BOOL)_moveChild:(id)arg1 up:(_Bool)arg2 doIt:(BOOL)arg3;
- (void)addParent:(struct NSObject *)arg1;
- (void)addFollowing:(struct NSObject *)arg1 element:(struct NSObject *)arg2;
- (void)removeAndClearChildren;
- (void)removeTree;
- (void)_recursivePostInsertTree:(id)arg1;
- (void)_recursivePreRemoveTree:(id)arg1;
- (BOOL)shown;
- (void)clearView;
- (void)addToView;
- (void)removeFromView;
- (BOOL)isLocalTo:(struct NSObject *)arg1;
- (void)postInsertTree:(struct NSObject *)arg1;
- (void)preRemoveTree:(struct NSObject *)arg1;
- (BOOL)dropElement:(struct NSObject *)arg1 at:(struct CGPoint)arg2;
- (id)_createSurroundingElement:(id)arg1 vertical:(BOOL)arg2 preceding:(BOOL)arg3;
- (BOOL)canDropElement:(struct NSObject *)arg1 at:(struct CGPoint)arg2;
- (unsigned long long)minimumChildren;
- (void)deselectChildrenIncludingSelf:(BOOL)arg1 recursive:(BOOL)arg2;
- (BOOL)selected;
- (void)setSelected:(BOOL)arg1;
- (struct _XCESize)contentSize;
- (struct _XCESize)maximumSize;
- (struct _XCESize)minimumSize;
- (BOOL)movesSplitVertically;
- (void)setMovesSplitVertically:(BOOL)arg1;
- (BOOL)movesSplitHorizontally;
- (void)setMovesSplitHorizontally:(BOOL)arg1;
- (BOOL)fillGapsVertically;
- (void)setFillGapsVertically:(BOOL)arg1;
- (BOOL)fillGapsHorizontally;
- (void)setFillGapsHorizontally:(BOOL)arg1;
- (BOOL)canInlineY;
- (BOOL)canInlineX;
- (void)setStretchesVertically:(BOOL)arg1;
- (void)setStretchesHorizontally:(BOOL)arg1;
- (BOOL)stretchesVertically;
- (BOOL)stretchesHorizontally;
- (BOOL)isPlacedVertically;
- (id)window;
- (id)_mainElement;
- (struct NSObject *)mainElement;
- (struct NSObject *)previousElement;
- (struct NSObject *)nextElement;
- (void)deleteChild:(struct NSObject *)arg1;
- (void)deleteSelf;
- (void)deleteChildPointersOnly:(struct NSObject *)arg1;
- (void)addChild:(struct NSObject *)arg1;
- (void)replace:(struct NSObject *)arg1 with:(struct NSObject *)arg2;
- (void)insert:(struct NSObject *)arg1 following:(struct NSObject *)arg2;
- (void)insert:(struct NSObject *)arg1 preceding:(struct NSObject *)arg2;
- (struct NSObject *)findElementAt:(struct CGPoint)arg1;
- (void)drawBackground:(struct CGRect)arg1;
- (void)requestRedraw;
- (void)needsDisplay;
- (void)drawFocusRing;
- (void)drawOwnBackground:(struct CGRect)arg1;
- (void)drawForeground:(struct CGRect)arg1;
- (void)drawOwnForeground:(struct CGRect)arg1;
- (void)debugDrawOwnForeground:(struct CGRect)arg1;
- (struct _XCEPoint)corner;
- (struct _XCEPoint)origin;
- (struct _XCESize)size;
- (struct CGSize)maxFrameSize;
- (struct CGSize)minFrameSize;
- (struct CGRect)frame;
- (struct _XCESize)_modifyLocationBy:(struct _XCESize)arg1;
- (struct _XCESize)_resizeAsPrevious:(struct _XCESize)arg1;
- (struct _XCESize)_modifySizeBy:(struct _XCESize)arg1;
- (struct _XCESize)toggleToSize:(struct _XCESize)arg1 initialPositioning:(BOOL)arg2;
- (struct CGSize)modifySizeUp:(struct CGSize)arg1 withinGroup:(BOOL)arg2 log:(BOOL)arg3;
- (struct _XCESize)_modifySizeUp:(struct _XCESize)arg1 withinGroup:(BOOL)arg2 log:(BOOL)arg3;
- (void)_modifyGrowthUp:(struct _XCESize)arg1 adjustGaps:(BOOL)arg2;
- (struct _XCESize)_modifySize:(struct _XCESize)arg1 withinGroup:(BOOL)arg2 log:(BOOL)arg3;
- (struct _XCESize)positionMain;
- (void)layoutStartFromSource;
- (void)_calcMinimaMaxima;
- (void)_calcMaxima;
- (void)_calcMinima;
- (void)_layoutSpecialEffects;
- (void)_layoutSizer;
- (void)layoutArrange;
- (struct _XCEPoint)_layoutArrangeAt:(struct _XCEPoint)arg1 minRef:(struct _XCESize)arg2 maxRef:(struct _XCESize)arg3 parentSize:(struct _XCESize)arg4 parentVertical:(BOOL)arg5;
- (BOOL)_debugTestSize:(struct _XCESize)arg1;
- (BOOL)_debugTestPos:(struct _XCEPoint)arg1;
- (struct _XCESize)_arrangeSizeGlobal:(struct _XCESize)arg1;
- (struct _XCESize)_arrangeSizeLocal:(struct _XCESize)arg1;
- (struct _XCESize)_arrangeSize:(struct _XCESize)arg1 minRef:(struct _XCESize)arg2 maxRef:(struct _XCESize)arg3;
- (struct _XCESize)_arrangeSizeOld:(struct _XCESize)arg1 minRef:(struct _XCESize)arg2 maxRef:(struct _XCESize)arg3;
- (struct _XCESize)_refMaxSize:(struct _XCESize)arg1;
- (struct _XCESize)_refMinSize:(struct _XCESize)arg1;
- (struct _XCESize)_adjustedMaxRef;
- (struct _XCESize)_adjustedMinRef;
- (struct _XCESize)_adjustedMaxRefForChildren;
- (struct _XCESize)_adjustedMinRefForChildren;
- (struct _XCEPoint)_arrangePosition:(struct _XCEPoint)arg1;
- (struct _XCEPoint)_adjustedCornerMinPosWithinContent:(BOOL)arg1;
- (struct _XCEPoint)_cornerMinPosWithinContent:(BOOL)arg1;
- (struct _XCESize)calculateContentSizeFromFrameSize:(struct _XCESize)arg1;
- (struct _XCEPoint)calculateStartPointForContent;
- (struct _XCESize)calculateFrameSizeFromContentSize:(struct _XCESize)arg1;
- (void)specialEffects;
- (void)prepareSpecialEffects;
- (void)_computeKeyLoop;
- (void)_recursiveFinishPostioning;
- (void)_recursivePreparePositioning;
- (void)finishPositioning;
- (void)preparePositioningAfterChildren;
- (void)preparePositioning;
- (void)updateCanInline;
- (void)updateChildrenStretch;
- (void)_calculateLineIndex;
- (BOOL)childrenDraggableByDefault;
- (void)setChildrenDraggableByDefault:(BOOL)arg1;
- (struct NSObject *)dropElement;
- (struct NSObject *)dragElement;
- (BOOL)draggable;
- (void)setDraggable:(BOOL)arg1;
- (BOOL)selectable;
- (void)setSelectable:(BOOL)arg1;
- (BOOL)preferInlinePlacement;
- (void)setPreferInlinePlacement:(BOOL)arg1;
- (BOOL)vertical;
- (void)setVertical:(BOOL)arg1;
- (struct CGRect)addToFrame:(struct CGRect)arg1;
- (BOOL)needLineIndex;
- (unsigned long long)nextLineIndex;
- (void)resetLineIndex;
- (BOOL)_onLeftBorder;
- (id)debugName;
- (void)setDebugName:(id)arg1;
- (void)_calcCornerMinPos:(struct _XCEPoint)arg1;
- (void)_calcCornerMaxPos:(struct _XCEPoint)arg1;
- (void)_calcMaxPos:(struct _XCEPoint)arg1;
- (void)_calcMinPos:(struct _XCEPoint)arg1;
- (void)internalSetFrameOrigin:(struct _XCEPoint)arg1;
- (void)internalSetFrameSize:(struct _XCESize)arg1;
- (id)initInMain:(id)arg1;
- (BOOL)isTabber;
- (BOOL)isMultiToggler;
- (BOOL)isToggler;
- (BOOL)isDisplayer;
- (BOOL)isAnchor;
- (struct NSObject *)parent;
- (struct NSObject *)last;
- (struct NSObject *)first;
- (struct NSObject *)prev;
- (struct NSObject *)next;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

