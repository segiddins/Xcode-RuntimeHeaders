//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTPortal/_TtC9DVTPortal20DeveloperAPIResource.h>

@class MISSING_TYPE, NSString;

@interface _TtC9DVTPortal20DeveloperAPIBundleID : _TtC9DVTPortal20DeveloperAPIResource
{
    MISSING_TYPE *$__lazy_storage_$_appID;
    MISSING_TYPE *rawBundleIDAttributes;
    MISSING_TYPE *platform;
}

+ (id)bundleIDMatchingAppID:(id)arg1 session:(id)arg2 team:(id)arg3 program:(id)arg4 error:(id *)arg5;
+ (id)createWithSession:(id)arg1 team:(id)arg2 program:(id)arg3 bundleID:(id)arg4 features:(id)arg5 requiresExplicitAppID:(BOOL)arg6 xcodeManaged:(BOOL)arg7 error:(id *)arg8;
+ (id)bundleIDsWithSession:(id)arg1 team:(id)arg2 program:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
- (BOOL)removeFeatures:(id)arg1 session:(id)arg2 error:(id *)arg3;
- (BOOL)removeWithSession:(id)arg1 error:(id *)arg2;
- (BOOL)enableFeatures:(id)arg1 session:(id)arg2 error:(id *)arg3;
- (id)featuresWithSession:(id)arg1 error:(id *)arg2;
- (BOOL)matchesBundleID:(id)arg1;
@property(nonatomic, readonly) BOOL isWildcard;
@property(nonatomic, readonly) NSString *identifier;
@property(nonatomic, readonly) NSString *platform;
@property(nonatomic, readonly) NSString *name;

@end

