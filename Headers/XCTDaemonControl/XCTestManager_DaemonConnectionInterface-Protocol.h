//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDate, NSDictionary, NSNumber, NSString, NSUUID, XCTCapabilities, XCTSpindumpRequestSpecification;

@protocol XCTestManager_DaemonConnectionInterface
- (id)_IDE_requestSpindumpWithSpecification:(XCTSpindumpRequestSpecification *)arg1;
- (id)_IDE_requestSpindump;
- (id)_IDE_requestLogArchiveWithStartDate:(NSDate *)arg1;
- (id)_IDE_collectNewCrashReportsInDirectories:(NSArray *)arg1 matchingProcessNames:(NSArray *)arg2;
- (id)_IDE_stopRecording;
- (id)_IDE_startRecordingProcessPID:(NSNumber *)arg1 applicationSnapshotAttributes:(NSArray *)arg2 applicationSnapshotParameters:(NSDictionary *)arg3 elementSnapshotAttributes:(NSArray *)arg4 elementSnapshotParameters:(NSDictionary *)arg5 simpleTargetGestureNames:(NSArray *)arg6;
- (id)_IDE_authorizeTestSessionWithProcessID:(NSNumber *)arg1;
- (id)_IDE_initiateControlSessionWithCapabilities:(XCTCapabilities *)arg1;
- (id)_IDE_initiateControlSessionWithProtocolVersion:(NSNumber *)arg1;
- (id)_IDE_initiateControlSessionForTestProcessID:(NSNumber *)arg1 protocolVersion:(NSNumber *)arg2;
- (id)_IDE_initiateControlSessionForTestProcessID:(NSNumber *)arg1;
- (id)_IDE_initiateSessionWithIdentifier:(NSUUID *)arg1 forClient:(NSString *)arg2 atPath:(NSString *)arg3 protocolVersion:(NSNumber *)arg4;
- (id)_IDE_initiateSessionWithIdentifier:(NSUUID *)arg1 capabilities:(XCTCapabilities *)arg2;
@end

