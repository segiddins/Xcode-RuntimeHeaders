//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/DependencyViewerGraphObjectNode.h>

#import <GPUDebugger/GPUIssuesViewControllerDelegate-Protocol.h>
#import <GPUDebugger/GPUTraceDependencyViewerFindingProviderDelegate-Protocol.h>

@class DependencyViewerSKTextureCache, GPUTraceDependencyViewerFindingProvider, GPUTraceOutlineItem, GPUTraceSKHighlight, GPUTraceSKResourceElement, GPUTraceTitleElement, NSMutableArray, NSString, SKShapeNode;

__attribute__((visibility("hidden")))
@interface GPUTraceSKSimpleEncoderNode : DependencyViewerGraphObjectNode <GPUTraceDependencyViewerFindingProviderDelegate, GPUIssuesViewControllerDelegate>
{
    struct vector<CGPoint, std::__1::allocator<CGPoint>> _slotPositions;
    SKShapeNode *_bg;
    GPUTraceSKResourceElement *_selectedResource;
    GPUTraceOutlineItem *_selectedOutlineItem;
    GPUTraceDependencyViewerFindingProvider *_findingProvider;
    BOOL _statsShowing;
    GPUTraceTitleElement *_titleElement;
    NSMutableArray *_resourceElements;
    GPUTraceSKHighlight *_highlight;
    DependencyViewerSKTextureCache *_textureCache;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak DependencyViewerSKTextureCache *textureCache; // @synthesize textureCache=_textureCache;
@property(readonly, nonatomic) GPUTraceSKHighlight *highlight; // @synthesize highlight=_highlight;
@property(retain, nonatomic) NSMutableArray *resourceElements; // @synthesize resourceElements=_resourceElements;
@property(readonly, nonatomic) GPUTraceTitleElement *titleElement; // @synthesize titleElement=_titleElement;
- (void)setMagnification:(double)arg1;
- (id)contextMenuAtLocation:(struct CGPoint)arg1;
- (void)addEventMenuItem:(id)arg1 menu:(id)arg2;
- (void)addContaingGroupsSubMenu:(id)arg1;
- (void)addOutputsToSubMenu:(id)arg1;
- (id)_addMenuItemForResourceElement:(id)arg1 inMenu:(id)arg2;
- (void)addInputsToSubMenu:(id)arg1;
- (id)_adjacencyMenuItem:(id)arg1;
- (void)navigateToCluster:(id)arg1;
- (void)performNavigation:(id)arg1;
- (void)_updateIssueBadgeVisibility;
- (void)removeHighlightStyle:(unsigned long long)arg1;
- (void)addHighlightStyle:(unsigned long long)arg1;
- (void)_updateHighlight;
- (id)acceptTouch:(struct CGPoint)arg1 modified:(BOOL)arg2;
- (id)_acceptTouchOnTitle:(struct CGPoint)arg1;
- (id)_acceptTouchOnResource:(struct CGPoint)arg1;
- (void)setSelectedForResource:(unsigned long long)arg1 atAttachmentIndex:(unsigned long long)arg2;
- (BOOL)elementMatchesWantedResource:(id)arg1 resourceId:(unsigned long long)arg2 attachmentIndex:(unsigned long long)arg3;
- (BOOL)isResourceSelected:(unsigned long long)arg1 atAttachmentIndex:(unsigned long long)arg2;
- (void)emphasizeSlots:(BOOL)arg1;
- (int)selectedSlotIndex;
- (BOOL)_elementMatches:(id)arg1 selectedResource:(id)arg2;
- (id)selectableOutlineItemAtSlotIndex:(unsigned long long)arg1;
- (id)selectableOutlineItem;
- (BOOL)hasIssues;
- (id)issues;
- (void)draw;
- (void)removeAllChildren;
- (void)updateResoureItemsForImages:(id)arg1;
- (void)loadResourceImages;
- (void)setupResources;
- (id)resources;
- (id)vertex;
- (id)initWithNode:(id)arg1 withTextureCache:(id)arg2 statsShowing:(BOOL)arg3 processingQueue:(id)arg4;
- (void)issuesViewControllerWillAppear:(id)arg1;
- (void)findingsRemoved:(id)arg1;
- (void)findingsAdded:(id)arg1;
- (BOOL)shouldKeep:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

