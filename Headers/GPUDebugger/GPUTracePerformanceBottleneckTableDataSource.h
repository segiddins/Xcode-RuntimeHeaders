//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUDebugger/NSOutlineViewDataSource-Protocol.h>

@class GPUTracePerformanceBottleneck, GPUTracePerformanceItem, GPUTracePerformanceSubEditor, NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface GPUTracePerformanceBottleneckTableDataSource : NSObject <NSOutlineViewDataSource>
{
    int _platform;
    GPUTracePerformanceItem *_item;
    GPUTracePerformanceBottleneck *_noBottleneckItem;
    GPUTracePerformanceSubEditor *_parentEditor;
    NSMutableArray *_bottlenecks;
    NSMutableDictionary *_viewCache;
}

- (void).cxx_destruct;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (double)outlineView:(id)arg1 heightOfItem:(id)arg2;
- (id)_cacheViewForItem:(id)arg1 outlineView:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)_iconForSeverity:(unsigned long long)arg1;
- (BOOL)isGroupItem:(id)arg1;
- (unsigned long long)numberOfItems;
- (BOOL)hasBottleneckData;
- (id)refreshData:(id)arg1;
- (void)_updateFromAnalysisResult:(id)arg1;
- (id)initWithPerformanceItem:(id)arg1 editor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
