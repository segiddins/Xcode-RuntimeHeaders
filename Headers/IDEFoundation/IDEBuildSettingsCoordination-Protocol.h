//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/NSObject-Protocol.h>

@class IDEBuildParameters, NSString;

@protocol IDEBuildSettingsCoordination <NSObject, DVTInvalidation>
@property(nonatomic, readonly) IDEBuildParameters *iOSMacBuildParameters;
- (void)setValue:(NSString *)arg1 forBuildSettingsKey:(NSString *)arg2;
- (NSString *)expandedValueForString:(NSString *)arg1;
- (BOOL)boolValueForBuildSetting:(NSString *)arg1 buildParameters:(IDEBuildParameters *)arg2;
- (NSString *)evaluatedStringValueForBuildSetting:(NSString *)arg1;
@end

