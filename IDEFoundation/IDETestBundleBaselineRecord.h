//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDETestBundleBaselineRecord : NSObject
{
    NSMutableDictionary *_infoDict;
    NSMutableDictionary *_baselinesByRunDestinationUUIDDict;
}

+ (BOOL)_validatePropertyList:(id)arg1 errorString:(id *)arg2;
+ (id)_baselineRecordForBlueprint:(id)arg1 withRunDestinationRecord:(id)arg2 createIfNecessary:(BOOL)arg3 versionedFileManager:(id)arg4 filePath:(id *)arg5 error:(id *)arg6;
+ (id)baselineRecordForBlueprint:(id)arg1 withRunDestinationRecord:(id)arg2 createIfNecessary:(BOOL)arg3 versionedFileManager:(id)arg4 filePath:(id *)arg5 error:(id *)arg6;
+ (id)_baselineRecordFilePathInBundleBaselineWithFilePath:(id)arg1 withRunDestinationRecord:(id)arg2 createIfNecessary:(BOOL)arg3 workspace:(id)arg4 versionedFileManager:(id)arg5 error:(id *)arg6;
+ (void)initialize;
- (void).cxx_destruct;
- (void)unionWithBundleBaselineRecord:(id)arg1;
- (void)setBaselineRecord:(id)arg1 forRunDestination:(id)arg2;
- (id)baselineRecordForRunDestination:(id)arg1;
- (id)runDestinations;
@property unsigned long long version;
- (BOOL)writeToFilePath:(id)arg1 workspace:(id)arg2 versionedFileManager:(id)arg3 error:(id *)arg4;
- (id)initWithFilePath:(id)arg1 error:(id *)arg2;
- (id)init;

@end

