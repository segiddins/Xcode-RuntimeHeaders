//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEIODebugGaugesUI/NSTableViewDataSource-Protocol.h>
#import <IDEIODebugGaugesUI/NSTableViewDelegate-Protocol.h>

@class DVTDevice, NSArray, NSByteCountFormatter, NSString;

@interface IDEODRTableViewDelegate : NSObject <NSTableViewDataSource, NSTableViewDelegate>
{
    NSByteCountFormatter *_byteFormatter;
    NSArray *_dataSource;
    DVTDevice *_device;
}

@property __weak DVTDevice *device; // @synthesize device=_device;
@property(retain) NSArray *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)purgeResource:(id)arg1;
- (void)tableView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
