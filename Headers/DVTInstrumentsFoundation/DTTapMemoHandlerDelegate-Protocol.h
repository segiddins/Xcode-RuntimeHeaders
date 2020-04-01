//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/NSObject-Protocol.h>

@class DTTapConfig, DTTapDataMemo, DTTapHeartbeatMemo, NSDictionary;
@protocol DTTapBulkDataReceiver;

@protocol DTTapMemoHandlerDelegate <NSObject>
- (void)sendHeartbeatMemo:(DTTapHeartbeatMemo *)arg1 toClientUsingConfig:(DTTapConfig *)arg2;
- (void)sendDataMemo:(DTTapDataMemo *)arg1 toClientUsingConfig:(DTTapConfig *)arg2;
- (void)sendDataMemo:(DTTapDataMemo *)arg1 toBulkReceiver:(id <DTTapBulkDataReceiver>)arg2;

@optional
- (NSDictionary *)peekAtMemo:(DTTapDataMemo *)arg1;
@end

