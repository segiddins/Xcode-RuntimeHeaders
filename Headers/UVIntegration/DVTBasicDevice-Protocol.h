//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UVIntegration/DVTCodesignableDevice-Protocol.h>

@class DTXConnection, DVTPlatform, NSError, NSString;

@protocol DVTBasicDevice <DVTCodesignableDevice>
@property(nonatomic, readonly) _Bool deviceIsBusy;
@property(nonatomic, readonly) NSError *unavailabilityError;
- (BOOL)isAvailableWithError:(id *)arg1;
- (BOOL)isAvailable;
@property(nonatomic, readonly) BOOL isProxiedDevice;
@property(nonatomic, readonly) NSString *nativeArchitecture;
@property(nonatomic, readonly) DVTPlatform *platform;
@property(nonatomic, readonly) NSString *operatingSystemVersionWithBuildNumber;
@property(nonatomic, readonly) NSString *operatingSystemBuild;
@property(nonatomic, readonly) NSString *iOSSupportVersion;
@property(nonatomic, readonly) NSString *operatingSystemVersion;
@property(nonatomic, readonly) NSString *processorDescription;
@property(nonatomic, readonly) NSString *modelUTI;
@property(nonatomic, readonly) NSString *modelCode;
@property(nonatomic, readonly) NSString *modelCodename;
@property(nonatomic, readonly) NSString *modelName;

@optional
- (void)cancelPrimaryInstrumentsServer;
- (DTXConnection *)primaryInstrumentsServer;

// Remaining properties
@property(nonatomic, readonly) BOOL available;
@end

