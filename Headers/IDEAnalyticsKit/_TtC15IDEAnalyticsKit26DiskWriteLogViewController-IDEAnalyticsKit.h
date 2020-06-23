//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEAnalyticsKit/_TtC15IDEAnalyticsKit26DiskWriteLogViewController.h>

#import <IDEAnalyticsKit/NSOutlineViewDataSource-Protocol.h>
#import <IDEAnalyticsKit/NSOutlineViewDelegate-Protocol.h>

@interface _TtC15IDEAnalyticsKit26DiskWriteLogViewController (IDEAnalyticsKit) <NSOutlineViewDataSource, NSOutlineViewDelegate>
+ (id)keyPathsForValuesAffectingIsSymbolicating;
@property(nonatomic, readonly) BOOL isSymbolicating;
- (void)symbolicateAnalyticsLog:(id)arg1;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldCollapseItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldExpandItem:(id)arg2;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)toggleLowSampleCountFrameCompression;
@property(nonatomic) BOOL compressLowSampleCountFrames;
- (void)toggleLibraryFrameCompression;
@property(nonatomic) BOOL compressLibraryFrames;
@end
