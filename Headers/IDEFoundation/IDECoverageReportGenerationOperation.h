//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/DVTOperation.h>

#import <IDEFoundation/DVTProgressReporting-Protocol.h>

@class DVTFilePath, IDEActivityLogSection, NSArray, NSOperationQueue, NSString;

@interface IDECoverageReportGenerationOperation : DVTOperation <DVTProgressReporting>
{
    NSString *_logIdentifier;
    NSArray *_buildableInfos;
    DVTFilePath *_coverageReportDestinationPath;
    DVTFilePath *_coverageArchiveDestinationPath;
    DVTFilePath *_profileFilePath;
    IDEActivityLogSection *_errorLog;
    long long _progress;
    NSOperationQueue *_workQueue;
    NSOperationQueue *_ioQueue;
}

+ (id)coverageErrorsLogSectionDomainType;
+ (id)logAspect;
- (void).cxx_destruct;
@property(retain, nonatomic) NSOperationQueue *ioQueue; // @synthesize ioQueue=_ioQueue;
@property(retain, nonatomic) NSOperationQueue *workQueue; // @synthesize workQueue=_workQueue;
@property long long progress; // @synthesize progress=_progress;
@property(retain) IDEActivityLogSection *errorLog; // @synthesize errorLog=_errorLog;
@property(retain) DVTFilePath *profileFilePath; // @synthesize profileFilePath=_profileFilePath;
@property(retain) DVTFilePath *coverageArchiveDestinationPath; // @synthesize coverageArchiveDestinationPath=_coverageArchiveDestinationPath;
@property(retain) DVTFilePath *coverageReportDestinationPath; // @synthesize coverageReportDestinationPath=_coverageReportDestinationPath;
@property(retain, nonatomic) NSArray *buildableInfos; // @synthesize buildableInfos=_buildableInfos;
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
- (void)cancel;
- (void)main;
- (id)initWithBuildableInfos:(id)arg1 coverageReportDestinationPath:(id)arg2 coverageArchiveDestinationPath:(id)arg3 errorLog:(id)arg4 profileFilePath:(id)arg5;
- (void)appendErrorsToLog:(id)arg1;
- (BOOL)writeCoverageReportToDisk:(id)arg1 error:(id *)arg2;
- (id)buildersForBuildableInfos:(id)arg1 errors:(id)arg2;
- (id)aggregateBuilderForBuilders:(id)arg1 error:(id *)arg2;
- (id)generateTargetsForBuildableInfos:(id)arg1 usingAggregateBuilder:(id)arg2 updatingArchive:(id)arg3;
- (id)generateCoverageFilesForBuildableInfos:(id)arg1 usingAggregateBuilder:(id)arg2 updatingArchive:(id)arg3;
- (id)aggregatedSourceFilesForBuildableInfos:(id)arg1;
- (id)aggregatedToolchainsForBuildableInfos:(id)arg1;
- (id)populateBuildableInfos:(id)arg1 usingBuilders:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

