//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC13DVTFoundation22DVTProvisioningContext : NSObject
{
    MISSING_TYPE *serviceExecutionContext;
    MISSING_TYPE *isRunningAsXcodeApp;
    MISSING_TYPE *enableInternalExceptions;
    MISSING_TYPE *usePortalDeveloperAPI;
    MISSING_TYPE *useSharedAppID;
    MISSING_TYPE *enableAppIdentifierPrefixedEntitlementsProcessor;
}

+ (id)defaultContext;
- (void).cxx_destruct;
- (id)init;
- (id)initWithServiceExecutionContext:(long long)arg1 isRunningAsXcodeApp:(BOOL)arg2 enableInternalExceptions:(BOOL)arg3 usePortalDeveloperAPI:(BOOL)arg4 useSharedAppID:(BOOL)arg5 enableAppIdentifierPrefixedEntitlementsProcessor:(BOOL)arg6;
@property(nonatomic, readonly) BOOL isXcodeServer;
@property(nonatomic, readonly) BOOL isManaged;
@property(nonatomic, readonly) BOOL enableAppIdentifierPrefixedEntitlementsProcessor; // @synthesize enableAppIdentifierPrefixedEntitlementsProcessor;
@property(nonatomic, readonly) BOOL useSharedAppID; // @synthesize useSharedAppID;
@property(nonatomic, readonly) BOOL usePortalDeveloperAPI; // @synthesize usePortalDeveloperAPI;
@property(nonatomic, readonly) BOOL enableInternalExceptions; // @synthesize enableInternalExceptions;
@property(nonatomic, readonly) BOOL isRunningAsXcodeApp; // @synthesize isRunningAsXcodeApp;
@property(nonatomic, readonly) long long serviceExecutionContext; // @synthesize serviceExecutionContext;

@end
