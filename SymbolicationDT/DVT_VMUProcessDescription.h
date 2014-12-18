//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSString;

@interface DVT_VMUProcessDescription : NSObject
{
    unsigned int _task;
    int _pid;
    struct _CSTypeRef _symbolicator;
    NSString *_processName;
    BOOL _processNameNeedsCorrection;
    NSString *_executablePath;
    BOOL _executablePathNeedsCorrection;
    unsigned long long _executableLoadAddress;
    int _cpuType;
    BOOL _is64Bit;
    struct LSItemInfoRecord *_itemInfoRecord;
    NSDictionary *_lsApplicationInformation;
    NSMutableArray *_binaryImages;
    NSArray *_sortedBinaryImages;
    NSDictionary *_binaryImageHints;
    NSArray *_unreadableBinaryImagePaths;
    BOOL _binaryImagePostProcessingComplete;
    NSDictionary *_buildVersionDictionary;
    NSDictionary *_osVersionDictionary;
    NSString *_parentProcessName;
    NSString *_parentExecutablePath;
    int _ppid;
    NSDate *_date;
}

+ (id)parseBinaryImagesDescription:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)analysisToolDescription;
- (id)dateAndVersionDescription;
- (id)processDescriptionHeader;
- (id)_systemVersionDescription;
- (id)_osVersionDictionary;
- (id)_buildInfoDescription;
- (id)_buildVersionDictionary;
- (id)binaryImagesDescription;
- (id)binaryImagesDescriptionForBacktraces:(id)arg1;
- (id)_rangesOfBinaryImages:(id)arg1 forBacktraces:(id)arg2;
- (id)_binaryImagesDescriptionForRanges:(id)arg1;
- (id)_cpuTypeDescription;
- (id)binaryImageDictionaryForAddress:(unsigned long long)arg1;
- (id)binaryImages;
- (id)_bundleLock;
- (BOOL)isAppleApplication;
- (id)bundleIdentifier;
- (id)executablePath;
- (id)processVersion;
- (id)_sanitizeVersion:(id)arg1;
- (id)processVersionDictionary;
- (id)parentProcessName;
- (id)displayName;
- (id)processIdentifier;
- (id)processName;
- (int)cpuType;
- (int)pid;
- (unsigned int)task;
- (id)date;
- (void)_extractBinaryImageInfoFromSymbolOwner:(struct _CSTypeRef)arg1;
- (void)_extractCrashReporterBinaryImageHintsFromSymbolOwner:(struct _CSTypeRef)arg1 withMemory:(struct mapped_memory_t *)arg2;
- (id)_extractInfoPlistFromSymbolOwner:(struct _CSTypeRef)arg1 withMemory:(struct mapped_memory_t *)arg2;
- (id)_readDataFromMemory:(struct mapped_memory_t *)arg1 atAddress:(unsigned long long)arg2 size:(unsigned long long)arg3;
- (id)_readStringFromMemory:(struct mapped_memory_t *)arg1 atAddress:(unsigned long long)arg2;
- (double)_extractDyldInfoFromSymbolOwner:(struct _CSTypeRef)arg1 withMemory:(struct mapped_memory_t *)arg2;
- (id)initWithPid:(int)arg1 orTask:(unsigned int)arg2;
- (void)clearCrashReporterInfo;
- (void)setCrashReporterInfo;

@end

