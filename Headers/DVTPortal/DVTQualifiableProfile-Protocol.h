//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDate, NSSet, NSString;

@protocol DVTQualifiableProfile
- (BOOL)isXcodeManaged;
- (BOOL)matchesBundleIdentifier:(NSString *)arg1;
@property(nonatomic, readonly) BOOL isActive;
@property(nonatomic, readonly) BOOL isExpired;
@property(nonatomic, readonly) NSDate *dateExpired;
@property(nonatomic, readonly) NSString *appIdentifierEntitlementWithoutPrefix;
@property(nonatomic, readonly) NSSet *platforms;
@property(nonatomic, readonly) NSString *teamName;
@property(nonatomic, readonly) NSString *teamID;
@property(nonatomic, readonly) NSString *name;

@optional
- (BOOL)isAppleInternal;
@end

