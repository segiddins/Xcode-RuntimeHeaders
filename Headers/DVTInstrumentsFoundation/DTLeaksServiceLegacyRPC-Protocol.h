//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTXAllowedRPC-Protocol.h>

@class NSNumber;

@protocol DTLeaksServiceLegacyRPC <DTXAllowedRPC>
- (void)cancelAllRequests;
- (void)requestLeaksForPid:(NSNumber *)arg1 context:(NSNumber *)arg2 provideBacktraces:(NSNumber *)arg3;
@end

