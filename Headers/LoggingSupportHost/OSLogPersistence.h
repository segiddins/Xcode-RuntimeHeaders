//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCompoundPredicate, NSDate, NSDictionary, NSString, NSURL, _OSLogCollectionReference, _OSLogIndex, _OSLogVersioning;
@protocol OSLogPersistenceDelegate;

@interface OSLogPersistence : NSObject
{
    _OSLogCollectionReference *_oslcr;
    _OSLogVersioning *_version;
    _OSLogIndex *_index;
    _Bool _verbose;
    NSURL *_logFile;
    NSURL *_logArchive;
    id <OSLogPersistenceDelegate> _delegate;
    NSCompoundPredicate *_predicate;
    unsigned long long _batchSize;
    unsigned long long _options;
    NSString *_currentFile;
    NSDate *_startDate;
    NSDate *_sparseDataStart;
    NSDate *_endDate;
    unsigned long long _decodeFailures;
    unsigned long long _messagesFiltered;
    unsigned long long _logMessageCount;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool verbose; // @synthesize verbose=_verbose;
@property(readonly, nonatomic) unsigned long long logMessageCount; // @synthesize logMessageCount=_logMessageCount;
@property(readonly, nonatomic) unsigned long long messagesFiltered; // @synthesize messagesFiltered=_messagesFiltered;
@property(readonly, nonatomic) unsigned long long decodeFailures; // @synthesize decodeFailures=_decodeFailures;
@property(readonly, copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, copy, nonatomic) NSDate *sparseDataStart; // @synthesize sparseDataStart=_sparseDataStart;
@property(readonly, copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, copy, nonatomic) NSString *currentFile; // @synthesize currentFile=_currentFile;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property(copy, nonatomic) NSCompoundPredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) __weak id <OSLogPersistenceDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSURL *logArchive; // @synthesize logArchive=_logArchive;
@property(copy, nonatomic) NSURL *logFile; // @synthesize logFile=_logFile;
@property(readonly, retain, nonatomic) NSDictionary *statistics;
@property(readonly, nonatomic) struct _os_timesync_db_s *timesync;
- (void)fetchFromStartDate:(id)arg1 toEndDate:(id)arg2;
- (void)enumerateFromLastBootWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateFromStartDate:(id)arg1 toEndDate:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (BOOL)streamChunks:(CDUnknownBlockType)arg1 andEntries:(CDUnknownBlockType)arg2 flags:(unsigned int)arg3;
- (void)resetWorkingState;
@property(readonly, nonatomic) long long archiveState;
@property(readonly, nonatomic) long long archiveVersion;
- (_Bool)allowSensitive;
- (void)dealloc;
- (id)init;
- (void)_openFiles;
- (void)_openPath:(id)arg1;

@end

