//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEModelEditor/DVTInvalidation-Protocol.h>
#import <IDEModelEditor/NSCoding-Protocol.h>
#import <IDEModelEditor/XDGraphNode-Protocol.h>

@class DVTStackBacktrace, NSMapTable, NSMutableArray, NSString, XDDiagramStorage, XDGraphicContentsEditor, XDGraphicID;

@interface XDGraphic : NSObject <NSCoding, XDGraphNode, DVTInvalidation>
{
    id _delegate;
    XDDiagramStorage *_diagramStorage;
    struct CGRect _bounds;
    struct CGRect _originalBounds;
    struct CGRect _cachedDrawingBounds;
    long long _cachedDrawingBoundsMask;
    struct CGRect _cachedHitTestBounds;
    unsigned long long _lastChangeMask;
    struct CGSize _minSize;
    id _contents;
    double _contentsPadding;
    NSMutableArray *_connections;
    NSMapTable *_drawingStyleByClass;
    id _objectValue;
    int _trackKnobPosition;
    XDGraphicContentsEditor *_contentsEditor;
    unsigned long long _drawingMask;
    XDGraphicID *_uniqueID;
    struct _XDGraphicFlags _gFlags;
}

+ (BOOL)_containsRemovableGraphicInGraphics:(id)arg1;
+ (BOOL)_containsImmovableGraphicInGraphics:(id)arg1;
+ (BOOL)_containsUnlockedGraphicInGraphics:(id)arg1;
+ (BOOL)_containsLockedGraphicInGraphics:(id)arg1;
+ (double)_defaultContentsPadding;
+ (struct CGSize)_defaultMinSize;
+ (id)defaultGraphicContentsEditor;
+ (Class)defaultGraphicContentsEditorClass;
+ (Class)defaultHighlightStyleClass;
+ (Class)defaultShadowStyleClass;
+ (Class)defaultStrokeStyleClass;
+ (Class)defaultFillStyleClass;
+ (Class)defaultAuxiliaryStorageClass;
+ (int)flipKnobPosition:(int)arg1;
+ (int)flipKnobPositionHorizontally:(int)arg1;
+ (int)flipKnobPositionVertically:(int)arg1;
+ (id)defaultTrackKnobImage;
+ (id)_defaultHighlightedDisabledKnobImage;
+ (id)defaultDisabledKnobImage;
+ (id)_defaultHighlightedKnobImage;
+ (id)defaultKnobImage;
+ (id)hiddenGraphicsTintColorWithColor:(id)arg1;
+ (id)hiddenGraphicsTint;
+ (void)initialize;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)_setUniqueID:(id)arg1;
- (void)mouseMoved:(id)arg1 inView:(id)arg2;
- (BOOL)acceptsMouseMoveEvents;
- (void)setAcceptsMouseMovedEvents:(BOOL)arg1;
- (BOOL)isLayoutable;
- (void)setLayoutable:(BOOL)arg1;
- (BOOL)isRemovable;
- (void)setRemovable:(BOOL)arg1;
- (BOOL)isResizable;
- (void)setResizable:(BOOL)arg1;
- (BOOL)mouseDown:(id)arg1 inView:(id)arg2;
- (BOOL)abortEditing;
- (void)endEditing;
- (void)startEditingWithEvent:(id)arg1 inView:(id)arg2;
- (id)contentsEditor;
- (BOOL)isEditable;
- (void)setEditable:(BOOL)arg1;
- (int)resizeByMovingKnob:(int)arg1 toPoint:(struct CGPoint)arg2;
- (id)cursorForKnobPosition:(int)arg1;
- (void)moveRelativeToPoint:(struct CGPoint)arg1;
- (BOOL)isMovable;
- (void)setMovable:(BOOL)arg1;
- (void)endBoundsManipulation;
- (BOOL)isManipulatingBounds;
- (void)beginBoundsManipulation;
- (void)processBoundsManipulation;
- (BOOL)isHitByPoint:(struct CGPoint)arg1 inView:(id)arg2;
- (BOOL)isHitByPoint:(struct CGPoint)arg1 inScale:(double)arg2;
- (BOOL)intersectsRect:(struct CGRect)arg1;
- (int)knobUnderPoint:(struct CGPoint)arg1 inView:(id)arg2;
- (int)knobUnderPoint:(struct CGPoint)arg1 inScale:(double)arg2;
- (void)drawInView:(id)arg1;
- (id)_drawingCacheForDiagramView:(id)arg1;
- (void)drawHighlightInView:(id)arg1;
- (void)drawShadowInView:(id)arg1;
- (void)drawInteriorInView:(id)arg1;
- (void)drawStrokeInView:(id)arg1;
- (void)drawFillInView:(id)arg1;
- (void)drawFillInView:(id)arg1 usingFillType:(int)arg2;
- (void)drawKnobsInView:(id)arg1;
- (void)drawTrackKnobAtPoint:(struct CGPoint)arg1 inView:(id)arg2;
- (void)drawKnobAtPoint:(struct CGPoint)arg1 inView:(id)arg2;
- (void)_drawKnobImage:(id)arg1 atPoint:(struct CGPoint)arg2 inView:(id)arg3;
- (BOOL)_shouldDrawFocusRingInView:(id)arg1;
- (BOOL)_shouldUseHighlightColorInView:(id)arg1;
- (BOOL)canDrawInView:(id)arg1;
- (unsigned long long)drawingMask;
- (void)setDrawingMask:(unsigned long long)arg1;
- (int)trackKnobPosition;
- (void)setTrackKnobPosition:(int)arg1;
- (void)graphicWillBeDeselectedInDiagramView:(id)arg1;
- (void)graphicWasSelectedInDiagramView:(id)arg1;
- (id)highlightPath;
- (id)hitTestPath;
- (id)strokePath;
- (id)fillPath;
- (struct CGRect)hitTestBounds;
- (struct CGRect)drawingBounds;
- (struct CGRect)drawingBoundsWithMask:(long long)arg1;
- (struct CGSize)drawingBoundsMargin;
- (id)trackKnobImage;
- (id)_highlightedDisabledKnobImage;
- (id)disabledKnobImage;
- (id)_highlightedKnobImage;
- (id)knobImage;
- (unsigned long long)knobPositionMask;
- (id)objectValue;
- (void)setObjectValue:(id)arg1;
- (BOOL)isDrawingCacheEnabled;
- (void)disableDrawingCache;
- (void)enableDrawingCache;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (struct CGPoint)magnetLocationForConnection:(id)arg1;
- (BOOL)canConnectAtPoint:(struct CGPoint)arg1;
- (struct CGPoint)crossingPointForConnection:(id)arg1;
- (void)markAsDirtyAllConnections;
- (void)markAsDirtyConnections:(id)arg1;
- (void)markAsDirtyConnection:(id)arg1;
- (void)removeAllConnections;
- (void)removeConnectionAtIndex:(long long)arg1;
- (void)removeConnection:(id)arg1;
- (void)insertConnection:(id)arg1 atIndex:(long long)arg2;
- (void)addConnection:(id)arg1;
- (id)_connections;
- (id)connections;
- (BOOL)acceptsConnections;
- (void)setAcceptsConnections:(BOOL)arg1;
- (BOOL)isLocked;
- (void)setLocked:(BOOL)arg1;
- (BOOL)isFlippedVertically;
- (void)setFlippedVertically:(BOOL)arg1;
- (BOOL)isFlippedHorizontally;
- (void)setFlippedHorizontally:(BOOL)arg1;
- (void)flipVertically;
- (void)flipHorizontally;
- (BOOL)heightTracksContents;
- (void)setHeightTracksContents:(BOOL)arg1;
- (BOOL)widthTracksContents;
- (void)setWidthTracksContents:(BOOL)arg1;
- (BOOL)autoresizesContentsToFit;
- (void)setAutoresizesContentsToFit:(BOOL)arg1;
- (BOOL)sizeToFit;
- (BOOL)sizeToFitWithTrackingMask:(unsigned long long)arg1;
- (BOOL)isHidden;
- (void)setHidden:(BOOL)arg1;
- (id)shadowColor;
- (void)setShadowColor:(id)arg1;
- (double)shadowBlurRadius;
- (void)setShadowBlurRadius:(double)arg1;
- (struct CGSize)shadowOffset;
- (void)setShadowOffset:(struct CGSize)arg1;
- (BOOL)drawsShadow;
- (void)setDrawsShadow:(BOOL)arg1;
- (id)strokeColor;
- (void)setStrokeColor:(id)arg1;
- (id)strokeLineDashPattern;
- (void)setStrokeLineDashPattern:(id)arg1;
- (unsigned long long)strokeLineJoinStyle;
- (void)setStrokeLineJoinStyle:(unsigned long long)arg1;
- (unsigned long long)strokeLineCapStyle;
- (void)setStrokeLineCapStyle:(unsigned long long)arg1;
- (double)_strokeLineWidthForDrawing;
- (double)strokeLineWidth;
- (void)setStrokeLineWidth:(double)arg1;
- (BOOL)strokeShouldAntialias;
- (void)setStrokeShouldAntialias:(BOOL)arg1;
- (BOOL)drawsStroke;
- (void)setDrawsStroke:(BOOL)arg1;
- (id)gradientColor;
- (void)setGradientColor:(id)arg1;
- (double)gradientAngle;
- (void)setGradientAngle:(double)arg1;
- (int)fillType;
- (void)setFillType:(int)arg1;
- (id)fillColor;
- (void)setFillColor:(id)arg1;
- (BOOL)drawsFill;
- (void)setDrawsFill:(BOOL)arg1;
- (id)allDrawingStyles;
- (id)_shadowStyle;
- (id)_shadowStyleOrDefault;
- (id)_fillStyle;
- (id)_fillStyleOrDefault;
- (id)_strokeStyle;
- (id)_strokeStyleOrDefault;
- (id)_drawingStyleForClass:(Class)arg1;
- (void)_setDrawingStyle:(id)arg1 forClass:(Class)arg2;
- (id)_drawingStyleOrDefaultForClass:(Class)arg1;
- (int)contentsVerticalAlignment;
- (void)setContentsVerticalAlignment:(int)arg1;
- (long long)contentsHorizontalAlignment;
- (void)setContentsHorizontalAlignment:(long long)arg1;
- (double)contentsPadding;
- (void)setContentsPadding:(double)arg1;
- (struct CGRect)contentsBounds;
- (BOOL)drawsContents;
- (void)setDrawsContents:(BOOL)arg1;
- (id)contents;
- (void)setContents:(id)arg1;
- (BOOL)canCacheDrawingResult;
- (BOOL)canAcceptConnections;
- (BOOL)canLayout;
- (BOOL)canRemove;
- (BOOL)canResize;
- (BOOL)canEdit;
- (BOOL)canMove;
- (BOOL)canLock;
- (BOOL)canFlipVertically;
- (BOOL)canFlipHorizontally;
- (BOOL)canHide;
- (BOOL)canDrawShadow;
- (BOOL)canDrawStroke;
- (BOOL)canDrawFill;
- (BOOL)canDrawContents;
- (struct CGSize)minSize;
- (void)setMinSize:(struct CGSize)arg1;
- (struct CGPoint)cascadeTopLeftFromPoint:(struct CGPoint)arg1;
- (struct CGPoint)centerOfBounds;
- (void)setCenterOfBounds:(struct CGPoint)arg1;
- (void)setBoundsSize:(struct CGSize)arg1;
- (void)setBoundsOrigin:(struct CGPoint)arg1;
- (struct CGRect)bounds;
- (void)setBounds:(struct CGRect)arg1;
- (void)didChange;
- (void)didChange:(unsigned long long)arg1;
- (void)markAsDirtyAllDrawingCaches;
- (void)markAsDirtyDrawingCacheInView:(id)arg1;
- (id)undoManager;
- (id)diagramStorage;
- (void)_setDiagramStorage:(id)arg1;
- (id)delegate;
- (id)_delegate;
- (void)setDelegate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)primitiveInvalidate;
- (id)init;
- (id)awakeAfterUsingCoder:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

