//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTAnalytics/DVTAnalyticsSnapshotFileSystemSerialization-Protocol.h>

@class NSString;

@protocol DVTAnalyticsLogProtocol <DVTAnalyticsSnapshotFileSystemSerialization>
+ (NSString *)fileNameExtension;
- (void)symbolicateWithCallback:(void (^)(id <DVTAnalyticsLogProtocol>, NSError *))arg1;
@property(nonatomic, readonly) BOOL isFullySymbolicated;
@property(nonatomic, readonly) BOOL isLocallySymbolicatedCachePath;
@property(nonatomic, readonly) NSString *longUserDescription;
@property(nonatomic, readonly) NSString *blameThreadDescription;
@property(nonatomic, readonly) NSString *codeType;
@property(nonatomic, readonly) NSString *hardwareModelDescription;
@property(nonatomic, readonly) NSString *identifier;
@property(nonatomic, readonly) NSString *osBuild;
@property(nonatomic, readonly) NSString *osVersion;
@property(nonatomic, readonly) NSString *version;
@property(nonatomic, readonly) NSString *build;
@property(nonatomic, readonly) NSString *appName;
@end

