//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/DVTOutlineViewDelegate-Protocol.h>
#import <IDEKit/NSOutlineViewDataSource-Protocol.h>

@class DVTDelayedInvocation, DVTOutlineView, IDEArchive, NSArray, NSString;

@interface IDEArchiveStatusLogViewController : IDEViewController <DVTOutlineViewDelegate, NSOutlineViewDataSource>
{
    BOOL _refreshing;
    BOOL _isExportableApp;
    BOOL _isAppReadyToExport;
    NSString *_lastUpdateMessage;
    DVTOutlineView *_logOutlineView;
    IDEArchive *_archive;
    NSArray *_items;
    DVTDelayedInvocation *_delayedStatusCheck;
}

@property(retain) DVTDelayedInvocation *delayedStatusCheck; // @synthesize delayedStatusCheck=_delayedStatusCheck;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly) IDEArchive *archive; // @synthesize archive=_archive;
@property(retain) DVTOutlineView *logOutlineView; // @synthesize logOutlineView=_logOutlineView;
@property BOOL isAppReadyToExport; // @synthesize isAppReadyToExport=_isAppReadyToExport;
@property BOOL isExportableApp; // @synthesize isExportableApp=_isExportableApp;
@property(retain) NSString *lastUpdateMessage; // @synthesize lastUpdateMessage=_lastUpdateMessage;
@property BOOL refreshing; // @synthesize refreshing=_refreshing;
- (void).cxx_destruct;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)exportApp:(id)arg1;
- (void)_setUpStatusCheckerForRecord:(id)arg1;
- (void)_updateLastUpdateMessage;
- (void)primitiveInvalidate;
- (void)_rebuildUI;
- (void)revealDocURL:(id)arg1;
- (void)copy:(id)arg1;
- (void)viewDidLoad;
- (id)logAspect;
- (id)initWithArchive:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

