//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEiOSSupportCore/DVTDeviceApplicationProvider-Protocol.h>

@class NSError, NSString;

@protocol DVTDeviceApplicationInstaller <DVTDeviceApplicationProvider>
- (BOOL)uploadApplicationDataWithPath:(NSString *)arg1 forInstalledApplicationWithBundleIdentifier:(NSString *)arg2 error:(id *)arg3;
- (BOOL)downloadApplicationDataToPath:(NSString *)arg1 forInstalledApplicationWithBundleIdentifier:(NSString *)arg2 error:(id *)arg3;
- (NSError *)uninstallApplicationWithBundleIdentifierSync:(NSString *)arg1;
@end

