//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class IDEOnDiskActivityLogRecord, NSString;
@protocol IDELogStoreManageable;

@protocol IDEOnDiskActivityLogRecordManaging <NSObject>
@property(readonly, copy) NSString *rootDirectoryPath;
- (void)cacheLogStoreManageable:(id <IDELogStoreManageable>)arg1 forLogRecord:(IDEOnDiskActivityLogRecord *)arg2;
- (id <IDELogStoreManageable>)cachedLogStoreManageableForLogRecord:(IDEOnDiskActivityLogRecord *)arg1;
- (NSString *)pathForFileName:(NSString *)arg1;
@end

