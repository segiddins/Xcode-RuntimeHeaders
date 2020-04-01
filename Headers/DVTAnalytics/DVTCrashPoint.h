//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTAnalytics/DVTAnalyticsPointAbstractClass.h>

#import <DVTAnalytics/DVTAnalyticsSnapshotFileSystemSerialization-Protocol.h>

@class DVTAnalyticsCrashPointIdentifier, DVTAnalyticsLogProvider, DVTAnalyticsPointDistributionInfo, DVTAnalyticsPointUserData, DVTCrashPointRecord, DVTFilePath, NSString;

@interface DVTCrashPoint : DVTAnalyticsPointAbstractClass <DVTAnalyticsSnapshotFileSystemSerialization>
{
    BOOL _isTopPoint;
    DVTAnalyticsPointUserData *_userData;
    DVTAnalyticsLogProvider *_analyticsLogProvider;
    unsigned long long _uniqueDeviceCount;
    unsigned long long _crashLogsCount;
    DVTAnalyticsPointDistributionInfo *_distributionInfo;
    NSString *_lastCrashReporterKey;
    NSString *_lastCrashPointPagingKey;
    NSString *_sourceFileName;
    unsigned long long _sourceFileLine;
    DVTFilePath *_cachePath;
    DVTAnalyticsCrashPointIdentifier *_crashPointIdentifier;
    NSString *_locallySymbolicatedCrashPointName;
    NSString *_locallySymbolicatedSourceFileName;
    unsigned long long _locallySymbolicatedSourceFileLine;
    DVTCrashPointRecord *_crashPointRecord;
}

+ (id)objectFromFilePath:(id)arg1 error:(id *)arg2;
@property(nonatomic) __weak DVTCrashPointRecord *crashPointRecord; // @synthesize crashPointRecord=_crashPointRecord;
@property unsigned long long locallySymbolicatedSourceFileLine; // @synthesize locallySymbolicatedSourceFileLine=_locallySymbolicatedSourceFileLine;
@property(retain) NSString *locallySymbolicatedSourceFileName; // @synthesize locallySymbolicatedSourceFileName=_locallySymbolicatedSourceFileName;
@property(retain) NSString *locallySymbolicatedCrashPointName; // @synthesize locallySymbolicatedCrashPointName=_locallySymbolicatedCrashPointName;
@property(retain) DVTAnalyticsCrashPointIdentifier *crashPointIdentifier; // @synthesize crashPointIdentifier=_crashPointIdentifier;
@property(retain) DVTFilePath *cachePath; // @synthesize cachePath=_cachePath;
@property unsigned long long sourceFileLine; // @synthesize sourceFileLine=_sourceFileLine;
@property(retain) NSString *sourceFileName; // @synthesize sourceFileName=_sourceFileName;
@property BOOL isTopPoint; // @synthesize isTopPoint=_isTopPoint;
@property(retain) NSString *lastCrashPointPagingKey; // @synthesize lastCrashPointPagingKey=_lastCrashPointPagingKey;
@property(retain) NSString *lastCrashReporterKey; // @synthesize lastCrashReporterKey=_lastCrashReporterKey;
@property(retain) DVTAnalyticsPointDistributionInfo *distributionInfo; // @synthesize distributionInfo=_distributionInfo;
@property unsigned long long crashLogsCount; // @synthesize crashLogsCount=_crashLogsCount;
@property unsigned long long uniqueDeviceCount; // @synthesize uniqueDeviceCount=_uniqueDeviceCount;
- (void)setAnalyticsLogProvider:(id)arg1;
- (id)analyticsLogProvider;
@property(retain) DVTAnalyticsPointUserData *userData; // @synthesize userData=_userData;
- (void).cxx_destruct;
- (id)snapshotWithError:(id *)arg1;
- (id)_infoJSON;
- (BOOL)analyticsPointBlameLineMatchesFrame:(id)arg1;
- (long long)matchResultForAnalyticsPointBlameLineWithStackFrame:(id)arg1;
- (long long)analyticsPointBlameLineMatchesImage:(id)arg1 symbol:(id)arg2 offset:(unsigned long long)arg3 sourceFileName:(id)arg4 sourceLine:(unsigned long long)arg5;
- (BOOL)_analyticsPointBlameLineMatchesImage:(id)arg1 offset:(unsigned long long)arg2;
- (BOOL)_analyticsPointBlameLineMatchesImage:(id)arg1 symbol:(id)arg2 offset:(unsigned long long)arg3;
- (id)analyticsPointIdentifier;
- (id)inspectableIconImageName;
- (BOOL)isSystemTerminationEvent;
- (id)inspectableAnalyticsLogReportLongUserDescription;
- (id)inspectableAnalyticsLogReportTypeUserDescription;
- (id)inspectableAnalyticsLogDetailsSectionTitle;
- (id)inspectableTypeUserDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1 userData:(id)arg2 sourceFileName:(id)arg3 sourceFileLine:(unsigned long long)arg4 cachePath:(id)arg5;
- (id)initWithCachePath:(id)arg1;
- (id)init;

@end

