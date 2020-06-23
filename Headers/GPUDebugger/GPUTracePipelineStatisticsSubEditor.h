//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/GPUTraceSubEditor.h>

#import <GPUDebugger/NSCollectionViewDataSource-Protocol.h>
#import <GPUDebugger/NSCollectionViewDelegate-Protocol.h>
#import <GPUDebugger/NSMenuDelegate-Protocol.h>
#import <GPUDebugger/NSOutlineViewDelegate-Protocol.h>

@class GPUTraceAPIItem, GPUTracePipelineStatisticsDrawcallsTableDataSource, GPUTracePipelineStatisticsOverviewTableDataSource, GPUTracePipelineStatisticsRemarksTableDataSource, NSCollectionView, NSOutlineView, NSString, NSView;

__attribute__((visibility("hidden")))
@interface GPUTracePipelineStatisticsSubEditor : GPUTraceSubEditor <NSCollectionViewDataSource, NSCollectionViewDelegate, NSOutlineViewDelegate, NSMenuDelegate>
{
    GPUTracePipelineStatisticsRemarksTableDataSource *_remarksDataSource;
    GPUTracePipelineStatisticsOverviewTableDataSource *_overviewDataSource;
    GPUTracePipelineStatisticsDrawcallsTableDataSource *_drawcallDataSource;
    NSCollectionView *_collectionView;
    NSView *_remarksView;
    NSView *_overviewView;
    NSView *_drawcallView;
    NSOutlineView *_remarksOutline;
    NSOutlineView *_overviewOutline;
    NSOutlineView *_drawcallOutline;
}

+ (BOOL)asyncLoadingSupported;
@property __weak NSOutlineView *drawcallOutline; // @synthesize drawcallOutline=_drawcallOutline;
@property __weak NSOutlineView *overviewOutline; // @synthesize overviewOutline=_overviewOutline;
@property __weak NSOutlineView *remarksOutline; // @synthesize remarksOutline=_remarksOutline;
@property __weak NSView *drawcallView; // @synthesize drawcallView=_drawcallView;
@property __weak NSView *overviewView; // @synthesize overviewView=_overviewView;
@property __weak NSView *remarksView; // @synthesize remarksView=_remarksView;
@property __weak NSCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)gotoButtonClicked:(id)arg1;
- (void)setFilterString:(id)arg1;
- (id)arrangedItems;
- (id)originalItems;
- (id)filterButtonAccessibilityDescription;
- (id)filterButtonToolTip;
- (id)filterButtonMenu;
- (id)filterDefinitionIdentifier;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (void)_beginEditor;
- (void)GPUDebugger_exportMetrics:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)handleNotification:(id)arg1;
@property(retain) GPUTraceAPIItem *representedObject; // @dynamic representedObject;
- (void)boundsDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

