//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DebuggerFoundation/DBGViewSurface.h>

#import <DebuggerUI/DBGHierarchyNavigationProxiedObject-Protocol.h>

@class NSString;

@interface DBGViewSurface (LayerRendering) <DBGHierarchyNavigationProxiedObject>
- (BOOL)_needsImageSnapshot;
- (unsigned long long)_snapshotType;
- (id)layerSnapshotWithQuery:(id)arg1;
- (id)renderedLayerSnapshotWithSublayers;
- (id)renderedLayerSnapshotWithDistinctSublayers:(BOOL)arg1;
- (Class)proxyHierarchyItemClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

