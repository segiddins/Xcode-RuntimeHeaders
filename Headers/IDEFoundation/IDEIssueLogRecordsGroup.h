//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface IDEIssueLogRecordsGroup : NSObject
{
    NSMutableArray *_logRecords;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)removeLogsForIssues:(id)arg1;
- (void)addLogsForIssues:(id)arg1;
- (id)init;

// Remaining properties
@property(copy) NSArray *logRecords; // @dynamic logRecords;
@property(readonly, copy) NSMutableArray *mutableLogRecords; // @dynamic mutableLogRecords;

@end

