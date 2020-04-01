//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSAccessibilityElement.h>

#import <DTGraphKit/CALayerDelegate-Protocol.h>

@class CALayer, DTTimelineGraph, DTTimelineGraphAccessorySubtree, DTTimelineGroupPlane, DTTimelinePlaneBorderSubtree, DTTimelinePlaneLabelAreaResizingConfiguration, DTTimelinePlaneLabelContainerSubtree, NSColor, NSDictionary, NSImage, NSMenu, NSMutableArray, NSNumber, NSString;

@interface DTTimelinePlane : NSAccessibilityElement <CALayerDelegate>
{
    DTTimelinePlaneLabelContainerSubtree *_labelContainerSubtree;
    struct PlaneMetrics _planeMetrics;
    struct TimelineViewContext *_ctx;
    unsigned long long _lastChangeToken;
    CALayer *_layer;
    double _height;
    double _preferredHeight;
    double _computedHeight;
    BOOL _accessibilityElement;
    BOOL _needsResizeToFit;
    NSString *_accessibilityLabel;
    NSString *_accessibilityAccessoryLabel;
    BOOL _clickableGlyphEnabled;
    BOOL _clickableGlyphOnlyOnHover;
    unsigned long long _clickableGlyphLocation;
    BOOL _shouldPresentDisclosure;
    BOOL _labelAreaIsHovered;
    DTTimelineGraphAccessorySubtree *_accessorySubtree;
    BOOL _resizable;
    BOOL _suppressTopBorder;
    BOOL _suppressBottomBorder;
    BOOL _selected;
    BOOL _dimmed;
    BOOL _hidden;
    BOOL _inScrollableRegion;
    BOOL _containerWantsTopBorder;
    BOOL _containerWantsBottomBorder;
    BOOL _labelIsInvalid;
    int _serialNumber;
    NSString *_displayName;
    NSString *_displayDescription;
    NSString *_displayBadge;
    NSString *_displayTopDescription;
    NSString *_displayCenteredRightLabelDescription;
    NSImage *_icon;
    unsigned long long _iconLocation;
    unsigned long long _labelIndentationLevel;
    NSNumber *_borderHierarchyLevel;
    DTTimelinePlaneLabelAreaResizingConfiguration *_labelAreaResizingConfiguration;
    NSMenu *_contextMenu;
    unsigned long long _displayNameType;
    DTTimelineGroupPlane *_groupPlane;
    id _representedObject;
    NSDictionary *_userInfo;
    double _borderWidth;
    NSColor *_defaultTextColor;
    DTTimelineGraph *_timelineGraph;
    double _absoluteOriginY;
    double _relativeOriginY;
    double _relativeZOrder;
    NSNumber *_topBorderHierarchyLevel;
    NSNumber *_bottomBorderHierarchyLevel;
    DTTimelinePlaneBorderSubtree *_topBorderSubtree;
    DTTimelinePlaneBorderSubtree *_bottomBorderSubtree;
    NSMutableArray *_accessibilityChildrenElements;
    struct CGSize _iconSize;
}

+ (BOOL)_baseClassCanAskForDefaultsDuringInit;
@property(retain, nonatomic) NSMutableArray *accessibilityChildrenElements; // @synthesize accessibilityChildrenElements=_accessibilityChildrenElements;
@property(retain, nonatomic) DTTimelinePlaneBorderSubtree *bottomBorderSubtree; // @synthesize bottomBorderSubtree=_bottomBorderSubtree;
@property(retain, nonatomic) DTTimelinePlaneBorderSubtree *topBorderSubtree; // @synthesize topBorderSubtree=_topBorderSubtree;
@property(nonatomic) BOOL labelIsInvalid; // @synthesize labelIsInvalid=_labelIsInvalid;
@property(retain, nonatomic) NSNumber *bottomBorderHierarchyLevel; // @synthesize bottomBorderHierarchyLevel=_bottomBorderHierarchyLevel;
@property(retain, nonatomic) NSNumber *topBorderHierarchyLevel; // @synthesize topBorderHierarchyLevel=_topBorderHierarchyLevel;
@property(nonatomic) BOOL containerWantsBottomBorder; // @synthesize containerWantsBottomBorder=_containerWantsBottomBorder;
@property(nonatomic) BOOL containerWantsTopBorder; // @synthesize containerWantsTopBorder=_containerWantsTopBorder;
@property(nonatomic) double relativeZOrder; // @synthesize relativeZOrder=_relativeZOrder;
@property(nonatomic) double relativeOriginY; // @synthesize relativeOriginY=_relativeOriginY;
@property(nonatomic) double absoluteOriginY; // @synthesize absoluteOriginY=_absoluteOriginY;
@property(nonatomic) BOOL inScrollableRegion; // @synthesize inScrollableRegion=_inScrollableRegion;
@property(readonly, nonatomic) BOOL hidden; // @synthesize hidden=_hidden;
@property(nonatomic) BOOL dimmed; // @synthesize dimmed=_dimmed;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) __weak DTTimelineGraph *timelineGraph; // @synthesize timelineGraph=_timelineGraph;
@property(retain, nonatomic) NSColor *defaultTextColor; // @synthesize defaultTextColor=_defaultTextColor;
@property(nonatomic) BOOL suppressBottomBorder; // @synthesize suppressBottomBorder=_suppressBottomBorder;
@property(nonatomic) BOOL suppressTopBorder; // @synthesize suppressTopBorder=_suppressTopBorder;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
@property(nonatomic) __weak DTTimelineGroupPlane *groupPlane; // @synthesize groupPlane=_groupPlane;
@property(nonatomic) BOOL resizable; // @synthesize resizable=_resizable;
@property(nonatomic) unsigned long long displayNameType; // @synthesize displayNameType=_displayNameType;
@property(readonly, nonatomic) int serialNumber; // @synthesize serialNumber=_serialNumber;
@property(retain, nonatomic) NSMenu *contextMenu; // @synthesize contextMenu=_contextMenu;
@property(retain, nonatomic) DTTimelinePlaneLabelAreaResizingConfiguration *labelAreaResizingConfiguration; // @synthesize labelAreaResizingConfiguration=_labelAreaResizingConfiguration;
@property(retain, nonatomic) NSNumber *borderHierarchyLevel; // @synthesize borderHierarchyLevel=_borderHierarchyLevel;
@property(nonatomic) unsigned long long labelIndentationLevel; // @synthesize labelIndentationLevel=_labelIndentationLevel;
@property(nonatomic) unsigned long long iconLocation; // @synthesize iconLocation=_iconLocation;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(retain, nonatomic) NSImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *displayCenteredRightLabelDescription; // @synthesize displayCenteredRightLabelDescription=_displayCenteredRightLabelDescription;
@property(copy, nonatomic) NSString *displayTopDescription; // @synthesize displayTopDescription=_displayTopDescription;
@property(copy, nonatomic) NSString *displayBadge; // @synthesize displayBadge=_displayBadge;
@property(copy, nonatomic) NSString *displayDescription; // @synthesize displayDescription=_displayDescription;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)rebuildAccessibility;
- (id)accessibilityChildren;
- (void)_populateAccessibilityChildrenElements;
- (struct CGPoint)accessibilityActivationPoint;
- (BOOL)accessibilityShouldUseUniqueId;
- (BOOL)isAccessibilityDisclosed;
- (id)accessibilityLabel;
- (struct CGRect)_accessibilityAccessoryIconFrame;
- (struct CGRect)_accessibilityIconFrame;
- (struct CGRect)_accessibilityDisplayNameFrame;
- (struct CGRect)accessibilityFrame;
- (id)accessibilitySubrole;
- (id)accessibilityParent;
- (id)accessibilityRole;
- (long long)accessibilityDisclosureLevel;
- (long long)accessibilityIndex;
- (void)setAccessibilityAccessoryLabel:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityElement:(BOOL)arg1;
- (BOOL)_containsPlane:(id)arg1;
- (void)_enumeratesPlanesHavingKey:(id)arg1 stopPtr:(char *)arg2 block:(CDUnknownBlockType)arg3;
- (void)_enumeratePlanesWithStopPtr:(char *)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumeratesPlanesHavingKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_planesUnderPoint:(struct CGPoint)arg1;
- (int)_updateLayoutAndMap:(unordered_map_b8b4eb21 *)arg1 offsetFromTop:(double)arg2 priorSibling:(id)arg3 nextSibling:(id)arg4;
- (BOOL)shouldLeaveRoomForBottomBorder;
- (id)_createLabelSubtree;
- (void)_createAndSetDisclosureOnTheContainerSubtree:(id)arg1;
@property(nonatomic) BOOL shouldPresentDisclosure;
- (id)_createLabelContainerSubtree;
- (void)setAccessoryIcon:(id)arg1 alternate:(id)arg2 hover:(BOOL)arg3 selectionHidden:(BOOL)arg4;
- (struct CGRect)clickableGlyphPositionRelativeToTheGraph:(BOOL)arg1;
- (BOOL)clickableGlyphIsEnabled;
- (void)setClickableGlyphEnabled:(BOOL)arg1 location:(unsigned long long)arg2 onlyOnHover:(BOOL)arg3;
- (struct CGRect)iconRectGraphRelative:(BOOL)arg1;
- (BOOL)iconIsClickable;
- (void)setIconIsClickable:(BOOL)arg1 showOnlyOnHover:(BOOL)arg2;
- (void)_didMoveOutOfView;
- (void)_willMoveIntoView;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (BOOL)_isGroupPlane;
- (void)_updateLabelSubtree;
- (void)_updateSelectionColors;
- (id)_topGroupPlane;
- (BOOL)selfOrAncestorIsSelected;
@property(readonly, nonatomic) BOOL ancestorIsSelected;
- (void)_setInspectionLabelCenter:(double)arg1;
@property(readonly, nonatomic) double inspectionLabelCenter;
- (void)_setNeedsResizeToFit;
- (BOOL)_resizeToFit;
- (BOOL)_setCalculatedHeight:(double)arg1;
- (BOOL)_setPreferredHeight:(double)arg1;
@property(readonly, nonatomic) double height;
- (void)_removeFromSuperlayer;
- (void)_addTilingLayerToSuperlayer:(id)arg1;
@property(nonatomic) BOOL labelAreaIsHovered;
@property(readonly, nonatomic) CALayer *layer;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithHeight:(double)arg1;
- (id)init;
- (void)_removeFromContext;
- (id)_disclosedSubplaneEnumerator;
- (id)_decoratedPlanes;
- (void)_contextChanged;
- (void)_refreshIfNeeded;
- (id)associatedPlane;
- (void)_updatePlaneMetricsFromContext;
- (void)_setContext:(struct TimelineViewContext *)arg1;
- (void)_setAppearance:(id)arg1;
- (void)_invalidateTimeRange:(struct XRTimeRange)arg1;
- (long long)_computeLabelSubtreeIndent;
- (long long)_depth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

