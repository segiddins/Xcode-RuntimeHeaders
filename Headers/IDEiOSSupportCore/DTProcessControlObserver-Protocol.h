//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEiOSSupportCore/DTXAllowedRPC-Protocol.h>

@class NSNumber, NSString;

@protocol DTProcessControlObserver <DTXAllowedRPC>
- (void)outputReceived:(NSString *)arg1 fromProcess:(int)arg2 atTime:(unsigned long long)arg3;
- (void)pidDiedCallback:(NSNumber *)arg1;

@optional
- (void)processWithPID:(NSNumber *)arg1 terminatedWithExitCode:(NSNumber *)arg2 orCrashingSignal:(NSNumber *)arg3;
@end

