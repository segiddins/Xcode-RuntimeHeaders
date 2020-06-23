//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/NSObject-Protocol.h>

@class DVTDiskStockManager, DVTFilePath, NSDate, NSObject, NSString;
@protocol DVTDiskStock, DVTDiskStockMember;

@protocol DVTDiskStockMember <NSObject>
@property(readonly) NSString *diskStockMemberDisplayName;
@property(readonly) NSDate *diskStockMemberTTL;
@property(readonly) DVTFilePath *diskStockMemberRepresentation;
@property(readonly) __weak NSObject<DVTDiskStock> *diskStock;
- (long long)diskStockMemberCompareTo:(NSObject<DVTDiskStockMember> *)arg1;
- (void)diskStockManager:(DVTDiskStockManager *)arg1 didCullThisMemberFromDiskStock:(NSObject<DVTDiskStock> *)arg2;

@optional
- (BOOL)diskStockManager:(DVTDiskStockManager *)arg1 willCullThisMemberFromDiskStock:(NSObject<DVTDiskStock> *)arg2;
@end

