//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class MISSING_TYPE, NSTableView;

__attribute__((visibility("hidden")))
@interface _TtC5XCSUI26XCSUIUserGroupsQueryWindow : NSWindowController
{
    MISSING_TYPE *tableView;
    MISSING_TYPE *selectionCallback;
    MISSING_TYPE *candidates;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)acceptSelectedItem:(id)arg1;
- (void)windowDidLoad;
@property(nonatomic) __weak NSTableView *tableView; // @synthesize tableView;

@end

