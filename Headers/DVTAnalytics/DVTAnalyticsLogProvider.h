//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTAnalytics/DVTServicesFileSystemSerialization-Protocol.h>

@class DVTFilePath, NSArray, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface DVTAnalyticsLogProvider : NSObject <DVTServicesFileSystemSerialization>
{
    NSMutableSet *_analyticsLogIdentifiers;
    NSMutableSet *_analyticsLogIdentifiersSymbolicating;
    DVTFilePath *_cacheDirectory;
    NSMutableDictionary *_analyticsLogsInMemory;
    NSMutableSet *_analyticsLogsToDelete;
}

+ (id)objectFromFilePath:(id)arg1 error:(id *)arg2;
+ (id)unableToFindAnalyticsLogSubTitleMessage;
+ (id)unableToFindAnalyticsLogTitleMessage;
+ (id)unableToReadAnalyticsLogMessage;
+ (Class)analyticsPointSymbolicatorClass;
+ (Class)analyticsLogClass;
+ (id)analyticsLogProviderWithCacheDirectory:(id)arg1 analyticsLogIdentifiers:(id)arg2;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *analyticsLogsToDelete; // @synthesize analyticsLogsToDelete=_analyticsLogsToDelete;
@property(retain, nonatomic) NSMutableDictionary *analyticsLogsInMemory; // @synthesize analyticsLogsInMemory=_analyticsLogsInMemory;
@property(readonly) NSSet *analyticsLogIdentifiersSymbolicating; // @synthesize analyticsLogIdentifiersSymbolicating=_analyticsLogIdentifiersSymbolicating;
@property(readonly, nonatomic) DVTFilePath *cacheDirectory; // @synthesize cacheDirectory=_cacheDirectory;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)writeToFilePath:(id)arg1 error:(id *)arg2;
- (id)analyticsLogRecordAtIndex:(unsigned long long)arg1;
- (id)analyticsLogRecordForAnalyticsLogIdentifier:(id)arg1;
@property(readonly) DVTFilePath *locallySymbolicatedCacheDirectory;
- (void)addAnalyticsLogs:(id)arg1;
- (void)symbolicateAnalyticsLog:(id)arg1 analyticsPoint:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)isSuperiorAnalyticsLog:(id)arg1;
- (BOOL)isSymbolicatingAnalyticsLogForIdentifier:(id)arg1;
- (void)_flushInMemoryCache;
@property(readonly) NSArray *analyticsLogIdentifiers;
- (id)analyticsLogSavingQueue;
- (id)init;
- (id)initWithCacheDirectory:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) NSMutableSet *mutableAnalyticsLogIdentifiersSymbolicating; // @dynamic mutableAnalyticsLogIdentifiersSymbolicating;
@property(readonly) Class superclass;

@end

