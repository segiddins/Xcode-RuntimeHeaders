//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEActivityReport, IDEBatchFindAbstractQuery, NSDate, NSSet;

@interface IDEFindNavigatorQueryActivityEntry : NSObject
{
    BOOL _throttled;
    IDEBatchFindAbstractQuery *_query;
    IDEActivityReport *_report;
    NSDate *_startTime;
    long long _progress;
    NSSet *_stalledFilePaths;
}

- (void).cxx_destruct;
@property(retain) NSSet *stalledFilePaths; // @synthesize stalledFilePaths=_stalledFilePaths;
@property long long progress; // @synthesize progress=_progress;
@property BOOL throttled; // @synthesize throttled=_throttled;
@property(readonly) NSDate *startTime; // @synthesize startTime=_startTime;
@property(readonly) IDEActivityReport *report; // @synthesize report=_report;
@property(readonly) IDEBatchFindAbstractQuery *query; // @synthesize query=_query;
- (void)updateReport;
- (id)initWithReport:(id)arg1 forQuery:(id)arg2;

@end
