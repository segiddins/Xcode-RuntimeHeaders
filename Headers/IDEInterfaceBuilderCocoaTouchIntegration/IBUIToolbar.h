//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIView.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>

@class IBColor, IBMutableIdentityDictionary, NSArray, NSMutableArray, NSString;

@interface IBUIToolbar : IBUIView <IBDocumentArchiving>
{
    IBMutableIdentityDictionary *_cachedItemFrames;
    IBMutableIdentityDictionary *_cachedTitleRects;
    NSArray *_observedSubviews;
    NSMutableArray *_items;
    BOOL _translucent;
    BOOL _isTopBar;
    IBColor *_barTintColor;
    long long _barStyle;
}

+ (void)registerMarshallingRecordHandlers;
+ (BOOL)shouldArchiveTintColorWithUIViewProperties;
+ (long long)ibInstantiationSizeBehavior;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
- (void).cxx_destruct;
@property(nonatomic) BOOL isTopBar; // @synthesize isTopBar=_isTopBar;
@property(nonatomic) long long barStyle; // @synthesize barStyle=_barStyle;
@property(copy, nonatomic) IBColor *barTintColor; // @synthesize barTintColor=_barTintColor;
@property(nonatomic, getter=isTranslucent) BOOL translucent; // @synthesize translucent=_translucent;
- (void)layoutSubviews;
- (void)setObservedSubviews:(id)arg1;
- (void)subviewFrameChanged:(id)arg1;
- (double)estimatedMaximumAvailableWidth;
- (void)viewWillDraw;
- (id)titleRects;
- (id)localExtraMarshalledAttributesKeyPaths;
- (void)validateTopBarIfNeeded;
- (void)setTopBar:(BOOL)arg1;
- (BOOL)effectiveIsTopBar;
@property(retain, nonatomic) NSArray *items;
- (void)removeItem:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 targetRuntime:(id)arg2;
- (Class)barMetricsClass;
- (BOOL)ibWantsPlaceholderContainingViewControllerWhenMarshallingWithContext:(id)arg1;
- (BOOL)ibShouldChildBeIncludedInArbitrationUnitWithParent:(id)arg1;
- (BOOL)ibIsChildInitiallySelectable:(id)arg1;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (id)ibUnarchiveValueForAttribute:(id)arg1 inConfiguration:(id)arg2 withDocumentUnarchiver:(id)arg3;
- (void)ibArchiveEvaluatedValue:(id)arg1 forAttribute:(id)arg2 inConfiguration:(id)arg3 withDocumentArchiver:(id)arg4;
- (id)ibLocalPerConfigurationAttributeKeyPaths;
- (BOOL)ibCanBeCollectionViewBackgroundView;
- (BOOL)ibCanBeTableViewBracketingView;
- (void)ibRemoveChildren:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (long long)ibPreferredResizeDirectionMask;
- (id)ibWidgetType;
- (void)ibCustomizeForInsertionIntoIBUIView:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (BOOL)ibArchivesToolbarItems;
- (id)ibLocalPropertiesForInheritableMetricsInvalidation;
- (Class)ibEditorClass;
- (id)ibLocalAttributeKeyPaths;
- (id)ibLocalChildToManyRelationshipsKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

