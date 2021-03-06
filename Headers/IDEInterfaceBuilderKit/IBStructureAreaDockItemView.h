//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTStructuredLayoutKit/DVTLayoutView_ML.h>

@class IBStructureAreaDockLabelContainer, IBStructureAreaDockLabelPopUp, NSImage, NSString;
@protocol IBStructureAreaDockItemViewDelegate;

@interface IBStructureAreaDockItemView : DVTLayoutView_ML
{
    IBStructureAreaDockLabelPopUp *_labelPopUp;
    NSImage *_cachedPressedImageMask;
    BOOL _drawsWithActiveLook;
    BOOL _drawsSelected;
    BOOL _drawsHighlighted;
    BOOL _showingOpenIndicator;
    BOOL _shouldShowLabelPopUp;
    BOOL _pressed;
    id _representedObject;
    NSString *_title;
    NSImage *_image;
    IBStructureAreaDockLabelContainer *_labelPopUpContainer;
    unsigned long long _labelArrowEdge;
    id <IBStructureAreaDockItemViewDelegate> _delegate;
    struct CGSize _imageSize;
}

+ (id)openIndicator;
- (void).cxx_destruct;
@property(nonatomic, getter=isPressed) BOOL pressed; // @synthesize pressed=_pressed;
@property(nonatomic) __weak id <IBStructureAreaDockItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL shouldShowLabelPopUp; // @synthesize shouldShowLabelPopUp=_shouldShowLabelPopUp;
@property(nonatomic) unsigned long long labelArrowEdge; // @synthesize labelArrowEdge=_labelArrowEdge;
@property(nonatomic, getter=isShowingOpenIndicator) BOOL showingOpenIndicator; // @synthesize showingOpenIndicator=_showingOpenIndicator;
@property(nonatomic) BOOL drawsHighlighted; // @synthesize drawsHighlighted=_drawsHighlighted;
@property(nonatomic) BOOL drawsSelected; // @synthesize drawsSelected=_drawsSelected;
@property(retain) IBStructureAreaDockLabelContainer *labelPopUpContainer; // @synthesize labelPopUpContainer=_labelPopUpContainer;
@property(nonatomic) BOOL drawsWithActiveLook; // @synthesize drawsWithActiveLook=_drawsWithActiveLook;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain) id representedObject; // @synthesize representedObject=_representedObject;
- (id)accessibilityRoleDescription;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRole;
- (id)accessibilityValue;
- (BOOL)isAccessibilityElement;
- (void)drawRect:(struct CGRect)arg1;
- (id)highlightPath;
- (struct CGPoint)startOfCurveCommingFromCorner:(struct CGPoint)arg1 goingAroundCorner:(struct CGPoint)arg2 withRadius:(double)arg3;
- (double)valueApproachingValue:(double)arg1 from:(double)arg2 distance:(double)arg3;
- (id)cachedPressedImageMask;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)trackMouse:(id)arg1;
- (id)labelPopUp;
- (void)layoutBottomUp;
- (struct CGPoint)labelPopOutPoint;
- (struct CGRect)openIndicatorRect;
- (struct CGSize)idealSize;
- (struct CGRect)selectionRect;
- (struct CGRect)imageRect;
- (double)imageHorizontalInset;
- (double)imageVerticalInset;
- (CDStruct_c519178c)imageInset;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect)arg1;

@end

