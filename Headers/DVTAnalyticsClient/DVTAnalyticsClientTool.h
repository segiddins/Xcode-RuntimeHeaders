//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTAnalyticsAppIdentifier, DVTAnalyticsCrashPointIdentifier, DVTDeveloperAccount, DVTServicesAccountBasedSession, NSArray, NSFileHandle, NSString;

@interface DVTAnalyticsClientTool : NSObject
{
    DVTAnalyticsAppIdentifier *_appIdentifier;
    DVTAnalyticsCrashPointIdentifier *_crashPointIdentifier;
    DVTDeveloperAccount *_developerAccount;
    NSString *_name;
    NSArray *_arguments;
    NSFileHandle *_standardInput;
    NSFileHandle *_standardOutput;
    NSFileHandle *_standardError;
    NSString *_developerAccountUser;
    NSString *_appAdamId;
    NSString *_appBundleId;
    NSString *_appVersion;
    NSString *_appBuild;
    NSString *_isBeta;
    NSString *_platformSDKIdentifier;
    NSString *_crashPointId;
    NSArray *_deviceFamilies;
    NSArray *_osVersions;
    NSString *_lastCrashReporterKey;
    NSString *_lastCrashReportTime;
    long long _command;
    DVTServicesAccountBasedSession *_session;
}

+ (id)analyticsClientTool;
@property(retain) DVTServicesAccountBasedSession *session; // @synthesize session=_session;
@property long long command; // @synthesize command=_command;
@property(retain) NSString *lastCrashReportTime; // @synthesize lastCrashReportTime=_lastCrashReportTime;
@property(retain) NSString *lastCrashReporterKey; // @synthesize lastCrashReporterKey=_lastCrashReporterKey;
@property(retain) NSArray *osVersions; // @synthesize osVersions=_osVersions;
@property(retain) NSArray *deviceFamilies; // @synthesize deviceFamilies=_deviceFamilies;
@property(retain) NSString *crashPointId; // @synthesize crashPointId=_crashPointId;
@property(retain) NSString *platformSDKIdentifier; // @synthesize platformSDKIdentifier=_platformSDKIdentifier;
@property(retain) NSString *isBeta; // @synthesize isBeta=_isBeta;
@property(retain) NSString *appBuild; // @synthesize appBuild=_appBuild;
@property(retain) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property(retain) NSString *appAdamId; // @synthesize appAdamId=_appAdamId;
@property(retain) NSString *developerAccountUser; // @synthesize developerAccountUser=_developerAccountUser;
@property(retain) NSFileHandle *standardError; // @synthesize standardError=_standardError;
@property(retain) NSFileHandle *standardOutput; // @synthesize standardOutput=_standardOutput;
@property(retain) NSFileHandle *standardInput; // @synthesize standardInput=_standardInput;
@property(retain) NSArray *arguments; // @synthesize arguments=_arguments;
@property(retain) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)_sessionWithError:(id *)arg1;
@property(readonly) DVTDeveloperAccount *developerAccount; // @synthesize developerAccount=_developerAccount;
@property(readonly) DVTAnalyticsCrashPointIdentifier *crashPointIdentifier; // @synthesize crashPointIdentifier=_crashPointIdentifier;
@property(readonly) DVTAnalyticsAppIdentifier *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
- (BOOL)_ensureRequiredArgumentsWithError:(id *)arg1;
- (BOOL)_parseArgumentsWithError:(id *)arg1;
- (BOOL)_downloadMoreLogsWithError:(id *)arg1;
- (BOOL)_downloadLogsWithError:(id *)arg1;
- (BOOL)_listLogsWithError:(id *)arg1;
- (BOOL)_executeWithError:(id *)arg1 executionBlock:(CDUnknownBlockType)arg2;
- (id)_stringFromCommand:(long long)arg1;
- (long long)_commandFromString:(id)arg1 error:(id *)arg2;
- (BOOL)runWithError:(id *)arg1;

@end

