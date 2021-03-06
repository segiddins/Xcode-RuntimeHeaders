//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/IDEActivityLogRecord.h>

@class DVTFileDataType, DVTFilePath, DVTObservingToken, IDEActivityLogObservableRecord, IDETypeIdentifier, NSDictionary, NSString;
@protocol IDELogStoreManageable, IDEOnDiskActivityLogRecordManaging;

@interface IDEOnDiskActivityLogRecord : IDEActivityLogRecord
{
    BOOL _hasPrimaryLog;
    BOOL _hasAuxiliaryLog;
    BOOL _hasTests;
    BOOL _hasCoverageData;
    BOOL _hasTimelineData;
    BOOL _isImported;
    id <IDELogStoreManageable> _logStoreManageable;
    double _timeStoppedRecording;
    NSString *_uniqueIdentifier;
    NSString *_auxiliaryLogUniqueIdentifier;
    double _timeStartedRecording;
    DVTFileDataType *_documentType;
    IDETypeIdentifier *_domainType;
    NSString *_title;
    NSString *_signature;
    DVTFilePath *_buildMetricsReportFilePath;
    IDEActivityLogObservableRecord *_primaryObservable;
    IDEActivityLogObservableRecord *_auxiliaryObservable;
    id <IDEOnDiskActivityLogRecordManaging> _logRecordManager;
    NSString *_logFileName;
    NSString *_logClassName;
    DVTObservingToken *_recorderLogObservingToken;
}

+ (id)keyPathsForValuesAffectingIsRecording;
+ (id)keyPathsForValuesAffectingAuxiliaryObservable;
+ (id)keyPathsForValuesAffectingPrimaryObservable;
+ (id)entityIdentifierFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain) DVTObservingToken *recorderLogObservingToken; // @synthesize recorderLogObservingToken=_recorderLogObservingToken;
@property(readonly, copy) NSString *logClassName; // @synthesize logClassName=_logClassName;
@property(readonly, copy) NSString *logFileName; // @synthesize logFileName=_logFileName;
@property(readonly) __weak id <IDEOnDiskActivityLogRecordManaging> logRecordManager; // @synthesize logRecordManager=_logRecordManager;
- (void)setIsImported:(BOOL)arg1;
- (BOOL)isImported;
- (BOOL)hasTimelineData;
- (BOOL)hasCoverageData;
- (BOOL)hasTests;
- (BOOL)hasAuxiliaryLog;
- (BOOL)hasPrimaryLog;
- (id)buildMetricsReportFilePath;
- (id)signature;
- (id)title;
- (id)domainType;
- (id)documentType;
- (double)timeStartedRecording;
- (id)auxiliaryLogUniqueIdentifier;
- (id)uniqueIdentifier;
- (double)timeStoppedRecording;
@property(readonly) id <IDELogStoreManageable> logStoreManageable; // @synthesize logStoreManageable=_logStoreManageable;
- (id)description;
- (BOOL)isRecording;
- (void)transferLogStoreManageableToCache;
- (id)fullLogIfInMemory;
- (id)fullLogStoreManageableWithError:(id *)arg1;
- (id)auxiliaryLogWithError:(id *)arg1;
- (id)fullLogWithError:(id *)arg1;
- (id)auxiliaryObservable;
- (id)primaryObservable;
- (id)_faultedLogStoreManageable:(id *)arg1;
- (id)_cachedLogStoreManageable;
- (void)tearDown;
- (id)onDiskPath;
- (id)logSectionForItem:(id)arg1 error:(id *)arg2;
- (id)auxiliaryLogItems;
- (id)primaryLogItems;
- (id)coverageArchiveFilePromise;
- (id)coverageReportFilePromise;
@property(readonly, copy) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1 logRecordManager:(id)arg2 error:(id *)arg3;
- (id)initWithLogStoreManageable:(id)arg1 parameters:(id)arg2 logRecordManager:(id)arg3;
- (id)initWithLogStoreManageable:(id)arg1 entityIdentifier:(id)arg2 logRecordManager:(id)arg3;

@end

