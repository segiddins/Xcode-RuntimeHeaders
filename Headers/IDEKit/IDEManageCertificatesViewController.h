//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/DVTTableViewFloatingRowViewController-Protocol.h>
#import <IDEKit/NSTableViewDataSource-Protocol.h>
#import <IDEKit/NSTableViewDelegate-Protocol.h>

@class DVTBorderedView, DVTTableView, DVTTableViewFloatingRowView, IDEManageCertificatesContext, IDEManageCertificatesItemSource, NSArray, NSProgressIndicator, NSScrollView, NSString, NSTableView, NSView;

@interface IDEManageCertificatesViewController : IDEViewController <NSTableViewDelegate, NSTableViewDataSource, DVTTableViewFloatingRowViewController>
{
    IDEManageCertificatesItemSource *_source;
    DVTTableViewFloatingRowView *_headerRowView;
    IDEManageCertificatesContext *_context;
    NSArray *_content;
    DVTBorderedView *_containerView;
    NSView *_placeholderView;
    NSScrollView *_certsScrollView;
    DVTTableView *_certsTable;
    NSProgressIndicator *_spinner;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSProgressIndicator *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) DVTTableView *certsTable; // @synthesize certsTable=_certsTable;
@property(retain, nonatomic) NSScrollView *certsScrollView; // @synthesize certsScrollView=_certsScrollView;
@property(retain, nonatomic) NSView *placeholderView; // @synthesize placeholderView=_placeholderView;
@property(retain, nonatomic) DVTBorderedView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSArray *content; // @synthesize content=_content;
@property(retain, nonatomic) IDEManageCertificatesContext *context; // @synthesize context=_context;
@property(retain, nonatomic) DVTTableViewFloatingRowView *headerRowView; // @synthesize headerRowView=_headerRowView;
@property(retain, nonatomic) IDEManageCertificatesItemSource *source; // @synthesize source=_source;
@property(readonly, nonatomic) NSTableView *tableView;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)_toolTipForItem:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)email:(id)arg1;
- (void)delete:(id)arg1;
- (void)export:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)_contextMenuItem;
- (void)requestCertificateType:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)_reloadData;
- (void)_updateCertsScrollViewConstraints;
- (void)_showPlaceholderView;
- (void)_hidePlaceholderView;
- (void)viewDidLoad;
- (void)primitiveInvalidate;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

