//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCSUIDataSource/XCSUIDataSourceOperation.h>

@class XCSIntegration;

@interface XCSUIReadIssuesOperation : XCSUIDataSourceOperation
{
    XCSIntegration *_integration;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
- (void)start;
- (id)operationIdentifier;
- (id)initWithIntegration:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

