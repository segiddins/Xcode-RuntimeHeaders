//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTAnalytics/_TtC12DVTAnalytics17ProcessorUsageLog.h>

@class NSString;

@interface _TtC12DVTAnalytics17ProcessorUsageLog (DVTAnalytics)
+ (id)objectFromFilePath:(id)arg1 error:(id *)arg2;
+ (id)fileNameExtension;
- (id)snapshotWithError:(id *)arg1;
@property(nonatomic, readonly) BOOL isLocallySymbolicatedCachePath;
@property(nonatomic, readonly) NSString *longUserDescription;
@property(nonatomic, readonly) NSString *blameThreadDescription;
@property(nonatomic, readonly) NSString *hardwareModelDescription;
@property(nonatomic, readonly) NSString *appName;
- (void)symbolicateWithCallback:(CDUnknownBlockType)arg1;
@end

