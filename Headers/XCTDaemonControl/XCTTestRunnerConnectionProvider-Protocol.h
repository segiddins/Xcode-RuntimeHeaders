//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCTDaemonControl/XCTConfigurableDebugLogger-Protocol.h>

@protocol XCTTestRunnerConnectionProvider <XCTConfigurableDebugLogger>
- (void)invalidate;
- (void)makeTestRunnerConnectionWithCompletion:(void (^)(DTXConnection *, NSError *))arg1 cancellation:(void (^)(NSError *))arg2;
@end
