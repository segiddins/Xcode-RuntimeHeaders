//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class DVTFilePath, IDEActivityLogSection, IDELogStoreManageableLogItem, IDETypeIdentifier, NSArray, NSString, _TtC13DVTFoundation14DVTFilePromise;
@protocol IDELogStoreManageable, IDELogStoreObservable;

@protocol IDELogStoreManageable <NSObject>
+ (id <IDELogStoreManageable>)makeInstanceWithContentsOfFile:(NSString *)arg1 error:(id *)arg2;
@property(readonly, copy) _TtC13DVTFoundation14DVTFilePromise *coverageArchiveFilePromise;
@property(readonly, copy) _TtC13DVTFoundation14DVTFilePromise *coverageReportFilePromise;
@property(copy) DVTFilePath *filePath;
@property(readonly, copy) NSString *defaultFileName;
@property(readonly) IDEActivityLogSection *primaryLogSectionIfInMemory;
@property(readonly) BOOL hasAuxiliaryLog;
@property(readonly) BOOL hasPrimaryLog;
@property(readonly) BOOL hasTimelineData;
@property(readonly) BOOL hasCoverageData;
@property(readonly) BOOL hasTests;
@property(readonly) id <IDELogStoreObservable> auxiliaryObservable;
@property(readonly) id <IDELogStoreObservable> primaryObservable;
@property(readonly) BOOL isRecording;
@property(readonly) double timeStoppedRecording;
@property(readonly) double timeStartedRecording;
@property(readonly) IDETypeIdentifier *domainType;
@property(readonly, copy) NSString *title;
@property(readonly, copy) NSString *signature;
@property(readonly, copy) NSString *uniqueIdentifier;
- (IDEActivityLogSection *)logSectionForItem:(IDELogStoreManageableLogItem *)arg1 error:(id *)arg2;
- (NSArray *)auxiliaryLogItems;
- (NSArray *)primaryLogItems;
- (IDEActivityLogSection *)auxiliaryLogSectionWithError:(id *)arg1;
- (IDEActivityLogSection *)primaryLogSectionWithError:(id *)arg1;
- (void)addCompletionBlock:(void (^)(void))arg1;
- (BOOL)writeToFile:(NSString *)arg1 error:(id *)arg2;
@end

