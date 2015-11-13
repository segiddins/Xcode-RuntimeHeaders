//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSWindowTemplate.h>

#import <IDEInterfaceBuilderCocoaIntegration/IBCocoaCustomObject-Protocol.h>

@class NSString, NSValue, NSView, NSViewController;

@interface NSWindowTemplate (IBWindowTemplateIntegration) <IBCocoaCustomObject>
+ (id)keyPathsForValuesAffectingIbInspectedContentRectHeight;
+ (id)keyPathsForValuesAffectingIbInspectedContentRectWidth;
+ (id)keyPathsForValuesAffectingIbInspectedContentRectMinYnonNilValue;
+ (id)keyPathsForValuesAffectingIbInspectedContentRectMinY;
+ (id)keyPathsForValuesAffectingIbInspectedContentRectMinXnonNilValue;
+ (id)keyPathsForValuesAffectingIbInspectedContentRectMinX;
+ (id)keyPathsForValuesAffectingIbInspectedDocument;
+ (id)keyPathsForValuesAffectingIbInspectedFullscreenWindowTitles;
+ (id)keyPathsForValuesAffectingIbInspectedFullscreenWindowValues;
+ (id)keyPathsForValuesAffectingIbInspectedTilingTitles;
+ (id)keyPathsForValuesAffectingIbInspectedTilingValues;
+ (id)keyPathsForValuesAffectingIbInspectedTexturedBackgroundStyle;
+ (id)keyPathsForValuesAffectingIbInspectedDocumentModalStyle;
+ (id)keyPathsForValuesAffectingIbInspectedPanelStyle;
+ (id)keyPathsForValuesAffectingIbContentBorderPreset;
+ (id)keyPathsForValuesAffectingAutorecalculatesContentBorderThicknessMaxYEdge;
+ (id)keyPathsForValuesAffectingContentBorderThicknessMaxYEdge;
+ (id)keyPathsForValuesAffectingIbShadowedContentBorderThicknessMaxYEdge;
+ (id)keyPathsForValuesAffectingAutorecalculatesContentBorderThicknessMinYEdge;
+ (id)keyPathsForValuesAffectingContentBorderThicknessMinYEdge;
+ (id)keyPathsForValuesAffectingIbShadowedContentBorderThicknessMinYEdge;
+ (id)keyPathsForValuesAffectingAutorecalculatesContentBorderThicknessMaxXEdge;
+ (id)keyPathsForValuesAffectingContentBorderThicknessMaxXEdge;
+ (id)keyPathsForValuesAffectingIbShadowedContentBorderThicknessMaxXEdge;
+ (id)keyPathsForValuesAffectingAutorecalculatesContentBorderThicknessMinXEdge;
+ (id)keyPathsForValuesAffectingContentBorderThicknessMinXEdge;
+ (id)keyPathsForValuesAffectingIbShadowedContentBorderThicknessMinXEdge;
+ (id)keyPathsForValuesAffectingContentRect;
+ (id)keyPathsForValuesAffectingIbShadowedIsRestorable;
+ (id)keyPathsForValuesAffectingIbShadowedAnimationBehavior;
+ (id)keyPathsForValuesAffectingIbShadowedCollectionBehavior;
+ (id)keyPathsForValuesAffectingIbInspectedCollectionBehavior;
+ (id)ibBorderedWindowTemplateWithClassName:(id)arg1;
+ (id)ibContentBorderThicknessKeyPaths;
+ (void)ibPopulateAdditionalInspectors:(id)arg1 forCategory:(id)arg2;
+ (BOOL)ibIsSupportedEditorWindowClass:(Class)arg1;
+ (void)ibAddSupportedEditorWindowClass:(Class)arg1;
+ (id)keyPathsForValuesAffectingIbInheritedAppearance;
@property(retain) NSViewController *shadowedContentViewController;
- (BOOL)ibCanHaveDescendantViewHierarchy;
- (void)ibUnarchiveContentBorderThickness:(id)arg1;
- (void)ibArchiveContentBorderThickness:(id)arg1;
- (struct CGRect)ibContentRectWithAutoPositionMaskApplied;
- (struct CGRect)ibCurrentScreenLayoutFrame;
@property(nonatomic) double ibInspectedContentRectHeight;
@property(nonatomic) double ibInspectedContentRectWidth;
- (void)setIbInspectedContentRectMinY:(id)arg1;
- (id)ibInspectedContentRectMinYnonNilValue;
- (id)ibInspectedContentRectMinY;
- (void)setIbInspectedContentRectMinX:(id)arg1;
- (id)ibInspectedContentRectMinXnonNilValue;
- (id)ibInspectedContentRectMinX;
- (void)setIbInspectedAutoPositionMask:(unsigned long long)arg1;
- (unsigned long long)ibInspectedAutoPositionMask;
- (id)ibInspectedDocument;
- (id)ibInspectedFullscreenWindowTitles;
- (id)ibInspectedFullscreenWindowValues;
- (BOOL)ibInspectedSupportsFullscreenPrimaryWindow;
- (id)ibInspectedTilingTitles;
- (id)ibInspectedTilingValues;
- (BOOL)ibInspectedSupportsAllowsTiling;
- (BOOL)ibIsUtilityOrHudForStyle:(unsigned long long)arg1;
- (void)setIbInspectedTexturedBackgroundStyle:(BOOL)arg1;
- (BOOL)ibInspectedTexturedBackgroundStyle;
- (void)setIbInspectedDocumentModalStyle:(BOOL)arg1;
- (BOOL)ibInspectedDocumentModalStyle;
- (void)setIbInspectedPanelStyle:(unsigned long long)arg1;
- (unsigned long long)ibInspectedPanelStyle;
- (void)ibSwizzledEncodeWithCoder:(id)arg1;
- (BOOL)xmlCoder:(id)arg1 shouldEncodeRect:(struct CGRect *)arg2 forKey:(id)arg3 context:(id)arg4;
- (id)xmlCoderEncodingCallbackContext:(id)arg1;
- (void)ibAwakeInDocument:(id)arg1;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (void)ibPushSizeConstraintsFromContentToFrame:(id)arg1;
- (void)ibUpgradeSizeContraintsToCurrentInMemoryFormat:(id)arg1;
- (void)ibFixOldUnsetMinMaxSizeValuesIfNeeded:(id)arg1;
- (void)setIbContentBorderPreset:(int)arg1;
- (int)ibContentBorderPreset;
@property BOOL autorecalculatesContentBorderThicknessMaxYEdge;
- (id)ibShadowedContentBorderThicknessMaxYEdge;
- (void)setIbShadowedContentBorderThicknessMaxYEdge:(id)arg1;
@property double contentBorderThicknessMaxYEdge;
@property BOOL autorecalculatesContentBorderThicknessMinYEdge;
- (id)ibShadowedContentBorderThicknessMinYEdge;
- (void)setIbShadowedContentBorderThicknessMinYEdge:(id)arg1;
@property double contentBorderThicknessMinYEdge;
@property BOOL autorecalculatesContentBorderThicknessMaxXEdge;
- (id)ibShadowedContentBorderThicknessMaxXEdge;
- (void)setIbShadowedContentBorderThicknessMaxXEdge:(id)arg1;
@property double contentBorderThicknessMaxXEdge;
@property BOOL autorecalculatesContentBorderThicknessMinXEdge;
- (id)ibShadowedContentBorderThicknessMinXEdge;
- (void)setIbShadowedContentBorderThicknessMinXEdge:(id)arg1;
@property double contentBorderThicknessMinXEdge;
@property struct CGRect screenRect;
@property struct CGRect contentRect;
@property struct CGPoint contentRectOrigin;
@property struct CGSize contentRectSize;
@property(retain) NSView *contentView;
@property BOOL ibShadowedIsRestorable;
@property long long ibShadowedAnimationBehavior;
@property unsigned long long ibShadowedCollectionBehavior;
- (void)setIbInspectedCollectionBehavior:(unsigned long long)arg1;
- (unsigned long long)ibInspectedCollectionBehavior;
@property unsigned long long ibShadowedAutoPositionMask;
- (void)setIbExternalAutoPositionCentersVertical:(BOOL)arg1;
- (BOOL)ibExternalAutoPositionCentersVertical;
- (void)setIbExternalAutoPositionCentersHorizontal:(BOOL)arg1;
- (BOOL)ibExternalAutoPositionCentersHorizontal;
@property(copy) NSValue *ibShadowedMaxFullScreenContentSize;
@property(copy) NSValue *ibShadowedMinFullScreenContentSize;
@property(copy) NSValue *ibShadowedContentMaxSize;
@property(copy) NSValue *ibShadowedContentMinSize;
@property BOOL ibExternalVisibleAtLaunch;
- (struct CGSize)ibContentSizeForFrameSize:(struct CGSize)arg1 inDocument:(id)arg2;
- (struct CGSize)ibFrameSizeForContentSize:(struct CGSize)arg1 inDocument:(id)arg2;
- (struct CGRect)ibFrameRectForContentRect:(struct CGRect)arg1 inDocument:(id)arg2;
- (struct CGRect)ibContentRectForFrameRect:(struct CGRect)arg1 inDocument:(id)arg2;
- (BOOL)ibHasRegularBorder;
- (void)ibSyncContentBorderThicknessToWindowView:(id)arg1;
- (BOOL)ibIsContentInsetSupportedForEdge:(unsigned long long)arg1;
- (unsigned long long)ibStyleMaskForEditorWindow;
- (BOOL)ibIsControlledByWindowController;
- (BOOL)ibIsConfiguredAsPanel;
- (id)ibTopLevelViewForLayoutEngine:(id)arg1;
- (BOOL)ibIsLegalArbitrationUnitRoot;
- (CDUnknownBlockType)ibWindow:(id *)arg1 forUpdatingConstraintsInDocument:(id)arg2;
- (BOOL)ibChildView:(id)arg1 shouldUseConstraintsInsteadOfAutoresizingWhenAddedToDocument:(id)arg2;
- (BOOL)ibIsInspectorApplicable:(id)arg1 forCategory:(id)arg2;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (id)ibContainerWidgetTypeForChildView:(id)arg1;
- (CDStruct_d2b197d1)ibInsetToDesignableContentAreaForChildView:(id)arg1;
- (BOOL)ibCalculatesInsetToDesignableContentAreaForChildView:(id)arg1;
- (BOOL)ibIsChildSelectableInSameEditor:(id)arg1;
- (BOOL)ibIsChildViewMovable:(id)arg1;
- (BOOL)ibIsChildViewSizable:(id)arg1;
- (BOOL)ibIsChildViewUserSizable:(id)arg1;
- (void)setIbContentSizeForEditorVerification:(struct CGSize)arg1;
- (struct CGSize)ibContentSizeForEditorVerification;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (id)ibDisplayNameForKeyPath:(id)arg1;
- (BOOL)ibChildEditsWithSingleClick:(id)arg1;
- (BOOL)ibCanBeBaseObjectOfEditorFrame;
- (void)ibInvalidateWarningsAfterDescendant:(id)arg1 changedProperty:(id)arg2 inDocument:(id)arg3 fromValue:(id)arg4;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)ibPasteboardTypes;
- (BOOL)ibShouldEncodeContentViewController;
- (id)ibWindowFromTemplateUsingDocument:(id)arg1;
- (Class)ibClassToUseWhenCreatingEditorInDocument:(id)arg1;
- (id)ibQualifyingInfoForDefaultLabel;
- (Class)ibEditorClass;
- (void)ibRemoveChildren:(id)arg1;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (void)ibPopulateChildBackToFrontRelationOrder:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (id)ibDocumentationPropertyInfosForKeyPath:(id)arg1;
- (id)ibEditorCanvasFrameControllerForDocument:(id)arg1;
- (id)ibExternalCustomClassModule;
- (void)setIbExternalCustomClassModule:(id)arg1;
- (id)ibExternalCustomClassName;
- (void)setIbExternalCustomClassName:(id)arg1;
- (id)ibRuntimeClassName;
- (BOOL)ibCanBeBoundToFromObject:(id)arg1;
- (BOOL)ibShouldUseClassSwapper;
- (id)ibLocalAttributeKeyPaths;
- (id)ibLocalChildToOneRelationshipsKeyPaths;
- (id)ibLocalToOneRelationshipsKeyPaths;
- (id)_ibNSWindowToOneRelationshipKeyPaths;
- (BOOL)ibIsNSAppearanceContainer;
- (id)ibInheritedAppearance;
- (Class)ibSwizzledWindowClassForNibInstantiate;
- (id)ibSwizzledInitWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

