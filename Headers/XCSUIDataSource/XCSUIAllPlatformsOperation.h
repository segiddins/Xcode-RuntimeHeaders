//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCSUIDataSource/XCSUIDataSourceOperation.h>

@class XCSUIService, XCSVersionInfo;

@interface XCSUIAllPlatformsOperation : XCSUIDataSourceOperation
{
    XCSUIService *_service;
    XCSVersionInfo *_versionInfo;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
- (void)start;
- (id)operationIdentifier;
- (id)initWithService:(id)arg1 versionInfo:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

