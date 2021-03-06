//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEProductsUI/IDEProductsUtilityPane.h>

#import <IDEProductsUI/NSTableViewDataSource-Protocol.h>
#import <IDEProductsUI/NSTableViewDelegate-Protocol.h>

@class DVTNotificationToken, DVTObservingToken, NSLayoutConstraint, NSString, NSTableView, NSTextField;

@interface IDEProductsDetailUtilityPane : IDEProductsUtilityPane <NSTableViewDataSource, NSTableViewDelegate>
{
    BOOL _removeBottomMargin;
    NSString *_detailsTitleKeyPath;
    NSString *_detailsKeyPath;
    NSTextField *_titleField;
    NSTableView *_tableView;
    NSLayoutConstraint *_scrollViewHeightConstraint;
    NSLayoutConstraint *_topSpaceHeightConstraint;
    NSLayoutConstraint *_bottomSpaceHeightConstraint;
    DVTNotificationToken *_frameChangedObserver;
    DVTObservingToken *_detailsObservingToken;
}

- (void).cxx_destruct;
@property(retain) DVTObservingToken *detailsObservingToken; // @synthesize detailsObservingToken=_detailsObservingToken;
@property(retain) DVTNotificationToken *frameChangedObserver; // @synthesize frameChangedObserver=_frameChangedObserver;
@property __weak NSLayoutConstraint *bottomSpaceHeightConstraint; // @synthesize bottomSpaceHeightConstraint=_bottomSpaceHeightConstraint;
@property __weak NSLayoutConstraint *topSpaceHeightConstraint; // @synthesize topSpaceHeightConstraint=_topSpaceHeightConstraint;
@property __weak NSLayoutConstraint *scrollViewHeightConstraint; // @synthesize scrollViewHeightConstraint=_scrollViewHeightConstraint;
@property __weak NSTableView *tableView; // @synthesize tableView=_tableView;
@property __weak NSTextField *titleField; // @synthesize titleField=_titleField;
@property BOOL removeBottomMargin; // @synthesize removeBottomMargin=_removeBottomMargin;
@property(readonly) NSString *detailsKeyPath; // @synthesize detailsKeyPath=_detailsKeyPath;
@property(readonly) NSString *detailsTitleKeyPath; // @synthesize detailsTitleKeyPath=_detailsTitleKeyPath;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)primitiveInvalidate;
- (id)details;
- (void)viewDidLayout;
- (void)calculateSizeForContent;
- (void)viewDidLoad;
- (id)initWithInspectable:(id)arg1 detailsKeyPath:(id)arg2 detailsTitleKeyPath:(id)arg3;
- (id)initWithInspectable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

