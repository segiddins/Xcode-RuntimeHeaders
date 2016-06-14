//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebuggerKit/GPUBufferViewerDataSourceViewController.h>

#import <GPUDebuggerKit/NSMenuDelegate-Protocol.h>
#import <GPUDebuggerKit/NSTabViewDelegate-Protocol.h>
#import <GPUDebuggerKit/NSTableViewDataSource-Protocol.h>

@class GPUBufferViewerDefaults, NSString, NSTableView;

__attribute__((visibility("hidden")))
@interface GPUBufferViewerTableViewController : GPUBufferViewerDataSourceViewController <NSTableViewDataSource, NSTabViewDelegate, NSMenuDelegate>
{
    BOOL _performedInitialScroll;
    NSTableView *_tableView;
    GPUBufferViewerDefaults *_defaults;
}

@property(nonatomic) BOOL performedInitialScroll; // @synthesize performedInitialScroll=_performedInitialScroll;
@property(retain, nonatomic) GPUBufferViewerDefaults *defaults; // @synthesize defaults=_defaults;
@property(nonatomic) __weak NSTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)menuNeedsUpdate:(id)arg1;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)showOrHideTableViewColumn:(id)arg1;
- (void)tableViewDoubleClick:(id)arg1;
- (void)copy:(id)arg1;
- (void)setOffset:(unsigned long long)arg1;
- (void)scrollToRow0;
- (void)update;
- (void)setRepresentedObject:(id)arg1;
- (BOOL)becomeFirstResponder;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
