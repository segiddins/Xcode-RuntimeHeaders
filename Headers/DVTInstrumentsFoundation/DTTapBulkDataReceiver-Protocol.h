//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/NSObject-Protocol.h>

@class DTTapMessage;

@protocol DTTapBulkDataReceiver <NSObject>
- (void)sendHeartbeatTime:(unsigned long long)arg1;
- (void)sendFrameMessage:(DTTapMessage *)arg1;
- (void)handleBulkData:(const void *)arg1 size:(unsigned long long)arg2 destructor:(void (^)(void))arg3;
@end

