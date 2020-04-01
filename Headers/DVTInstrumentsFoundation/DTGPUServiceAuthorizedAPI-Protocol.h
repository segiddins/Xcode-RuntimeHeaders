//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTXAllowedRPC-Protocol.h>

@class NSArray, NSNumber;

@protocol DTGPUServiceAuthorizedAPI <DTXAllowedRPC>
- (NSArray *)flushRemainingData;
- (NSNumber *)stopCollectingCounters;
- (void)startCollectingCounters;
- (void)configureCounters:(unsigned long long)arg1 counterProfile:(unsigned int)arg2 interval:(unsigned long long)arg3 windowLimit:(unsigned long long)arg4 tracingPID:(int)arg5;
- (NSArray *)requestDeviceGPUInfo;
@end

