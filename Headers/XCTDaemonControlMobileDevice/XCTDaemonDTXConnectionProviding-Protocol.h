//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCTDaemonControlMobileDevice/XCTConfigurableDebugLogger-Protocol.h>

@protocol XCTRemoteHostDiagnosticReportsSynchronizing;

@protocol XCTDaemonDTXConnectionProviding <XCTConfigurableDebugLogger>
@property(readonly) id <XCTRemoteHostDiagnosticReportsSynchronizing> remoteHostDiagnosticReportsSynchronizer;
- (void)invalidate;
- (void)makeConnectionWithCompletion:(void (^)(DTXConnection *, NSError *))arg1;
@end

