//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTAnalyticsClient/DVTServicesJSONSerialization-Protocol.h>

@class NSArray, NSString;

@interface DVTAnalyticsCrashPointLogList : NSObject <DVTServicesJSONSerialization>
{
    BOOL _hasMoreLogs;
    NSString *_lastCrashPointTime;
    NSString *_lastCrashReporterKey;
    NSArray *_logData;
    NSString *_moreLogs;
}

+ (id)logListWithHasMoreLogs:(BOOL)arg1 lastCrashPointTime:(id)arg2 lastCrashReporterKey:(id)arg3 logData:(id)arg4;
@property(readonly) NSString *moreLogs; // @synthesize moreLogs=_moreLogs;
@property(readonly) NSArray *logData; // @synthesize logData=_logData;
@property(readonly) NSString *lastCrashReporterKey; // @synthesize lastCrashReporterKey=_lastCrashReporterKey;
@property(readonly) NSString *lastCrashPointTime; // @synthesize lastCrashPointTime=_lastCrashPointTime;
- (void).cxx_destruct;
- (id)JSONRepresentation;
@property(readonly) BOOL hasMoreLogs; // @synthesize hasMoreLogs=_hasMoreLogs;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

