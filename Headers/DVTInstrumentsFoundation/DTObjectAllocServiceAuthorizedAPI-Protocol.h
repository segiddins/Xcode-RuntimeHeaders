//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTXAllowedRPC-Protocol.h>

@class NSDictionary, NSNumber;

@protocol DTObjectAllocServiceAuthorizedAPI <DTXAllowedRPC>
- (void)stopCollection;
- (NSNumber *)attachToPid:(NSNumber *)arg1 eventsMask:(NSNumber *)arg2;
- (NSDictionary *)preparedEnvironmentForLaunch:(NSDictionary *)arg1 eventsMask:(NSNumber *)arg2;
@end

