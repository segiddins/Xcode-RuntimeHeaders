//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTAnalytics/DVTCrashLog.h>

#import <IDEFoundation/DVTAnalyticsLogProtocol_IDEAdditions-Protocol.h>

@class DVTCrashLogThread, NSString;

@interface DVTCrashLog (IDEAdditions) <DVTAnalyticsLogProtocol_IDEAdditions>
- (void)demangleUsingToolchains:(id)arg1 toolchainRegistry:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)debuggerPointForWorkspace:(id)arg1 error:(id *)arg2;
- (id)debuggerLogWithAnalyticsPoint:(id)arg1 usingContext:(id)arg2;
- (id)productCategory;
- (void)demangleUsingToolchains:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)symbolicateWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly) NSString *appName;
@property(readonly) NSString *blameThreadDescription;
@property(readonly) NSString *build;
@property(readonly) NSString *codeType;
@property(readonly) DVTCrashLogThread *crashingThread;
@property(readonly) NSString *hardwareModelDescription;
@property(readonly) NSString *identifier;
@property(readonly) BOOL isFullySymbolicated;
@property(readonly) BOOL isLocallySymbolicatedCachePath;
@property(readonly) NSString *longUserDescription;
@property(readonly) NSString *osBuild;
@property(readonly) NSString *osVersion;
@property(readonly) NSString *version;
@end

