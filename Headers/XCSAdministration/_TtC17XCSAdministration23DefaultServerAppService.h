//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCSAdministration/_TtP17XCSAdministration16ServerAppService_-Protocol.h>

@class MISSING_TYPE, NSURL, _TtC17XCSAdministration15XCSBuildVersion;

@interface _TtC17XCSAdministration23DefaultServerAppService : NSObject <_TtP17XCSAdministration16ServerAppService_>
{
    MISSING_TYPE *fileService;
    MISSING_TYPE *applicationUrl;
    MISSING_TYPE *minimumServerVersion;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) BOOL isInstalledVersionCompatible;
- (id)versionForServerUrl:(id)arg1 error:(id *)arg2;
@property(nonatomic, readonly) _TtC17XCSAdministration15XCSBuildVersion *currentServerVersion;
@property(nonatomic, readonly) _TtC17XCSAdministration15XCSBuildVersion *minimumServerVersion; // @synthesize minimumServerVersion;
@property(nonatomic, readonly) NSURL *applicationUrl;
- (id)initWithFileService:(id)arg1;

@end

