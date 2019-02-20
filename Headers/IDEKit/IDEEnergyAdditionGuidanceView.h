//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <IDEKit/NSTableViewDataSource-Protocol.h>

@class NSMutableOrderedSet, NSString, NSTableView;

@interface IDEEnergyAdditionGuidanceView : NSView <NSTableViewDataSource>
{
    NSTableView *_tableView;
    NSMutableOrderedSet *_orderedGuidanceSet;
}

- (void).cxx_destruct;
- (void)_investigateButtonClick:(id)arg1;
- (void)hideGuidance:(id)arg1;
- (void)showGuidance:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)isFlipped;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
