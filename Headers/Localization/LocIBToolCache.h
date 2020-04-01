//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSOperationQueue, NSString;

@interface LocIBToolCache : NSObject
{
    NSArray *ibFilePaths;
    NSString *cacheDirectoryPath;
    NSString *ibtoolPath;
    NSString *projectName;
    NSString *glotDirectoryPath;
    NSMutableDictionary *ibtoolOptions;
    NSDictionary *otherOptions;
    NSOperationQueue *ibtoolOperationQueue;
    NSDate *lastIbtoolTaskCountChangedDate;
    unsigned long long ibtoolCacheType;
    unsigned long long remainingIbtoolTaskCount;
    unsigned long long processedIbtoolTaskCount;
    unsigned long long ellapsedTime;
    unsigned long long pollingCount;
    int maxConcurrentRunningIbtool;
    unsigned long long previousLimit;
    BOOL coreDumpSizelimitHasChanged;
    BOOL glotLegacyCache;
    BOOL ibtoolsAreDone;
    BOOL suppressIbtoolError;
    BOOL onMemoryOperation;
    double pollingInterval;
}

@property double pollingInterval; // @synthesize pollingInterval;
@property BOOL onMemoryOperation; // @synthesize onMemoryOperation;
@property BOOL suppressIbtoolError; // @synthesize suppressIbtoolError;
@property(retain) NSDate *lastIbtoolTaskCountChangedDate; // @synthesize lastIbtoolTaskCountChangedDate;
@property unsigned long long pollingCount; // @synthesize pollingCount;
@property unsigned long long ellapsedTime; // @synthesize ellapsedTime;
@property unsigned long long processedIbtoolTaskCount; // @synthesize processedIbtoolTaskCount;
@property unsigned long long remainingIbtoolTaskCount; // @synthesize remainingIbtoolTaskCount;
@property(retain) NSOperationQueue *ibtoolOperationQueue; // @synthesize ibtoolOperationQueue;
@property BOOL ibtoolsAreDone; // @synthesize ibtoolsAreDone;
@property BOOL glotLegacyCache; // @synthesize glotLegacyCache;
@property BOOL coreDumpSizelimitHasChanged; // @synthesize coreDumpSizelimitHasChanged;
@property unsigned long long previousLimit; // @synthesize previousLimit;
@property int maxConcurrentRunningIbtool; // @synthesize maxConcurrentRunningIbtool;
@property unsigned long long ibtoolCacheType; // @synthesize ibtoolCacheType;
@property(retain) NSDictionary *otherOptions; // @synthesize otherOptions;
@property(retain) NSMutableDictionary *ibtoolOptions; // @synthesize ibtoolOptions;
@property(retain) NSString *glotDirectoryPath; // @synthesize glotDirectoryPath;
@property(retain) NSString *projectName; // @synthesize projectName;
@property(retain) NSString *ibtoolPath; // @synthesize ibtoolPath;
@property(retain) NSString *cacheDirectoryPath; // @synthesize cacheDirectoryPath;
@property(retain) NSArray *ibFilePaths; // @synthesize ibFilePaths;
- (void).cxx_destruct;
- (id)ibFilePathsNotToHaveValidCache:(id)arg1 ibFilePathsWithValidCache:(id *)arg2;
- (void)restoreCoreDumpLimit;
- (void)disableCoreDump;
- (void)monitorIBToolTasks;
- (const char *)completeMessage;
- (void)createCache;
- (void)runIBTools:(id *)arg1;
- (void)dealloc;
- (id)initWithIBFiles:(id)arg1 cacheDirectory:(id)arg2 IBToolPath:(id)arg3 IBToolLoadModuleOptions:(id)arg4 otherOptions:(id)arg5 suppressIBToolErrorMessage:(BOOL)arg6;
- (id)initWithIBFiles:(id)arg1 cacheDirectory:(id)arg2 IBToolPath:(id)arg3 IBToolOptions:(id)arg4 otherOptions:(id)arg5 suppressIBToolErrorMessage:(BOOL)arg6;
- (id)initWithIBFiles:(id)arg1 cacheDirectory:(id)arg2 cacheType:(unsigned long long)arg3 glotLegacyCache:(BOOL)arg4 glotDirectory:(id)arg5 projectName:(id)arg6 IBToolPath:(id)arg7 IBToolLoadModuleOptions:(id)arg8 otherOptions:(id)arg9 suppressIBToolErrorMessage:(BOOL)arg10;
- (id)initWithIBFiles:(id)arg1 cacheDirectory:(id)arg2 cacheType:(unsigned long long)arg3 glotLegacyCache:(BOOL)arg4 glotDirectory:(id)arg5 projectName:(id)arg6 IBToolPath:(id)arg7 IBToolOptions:(id)arg8 otherOptions:(id)arg9 suppressIBToolErrorMessage:(BOOL)arg10;

@end

