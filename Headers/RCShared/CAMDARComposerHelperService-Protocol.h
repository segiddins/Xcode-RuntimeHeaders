//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSXPCListenerEndpoint;

@protocol CAMDARComposerHelperService
- (void)waitForApplicationEndpointWithTimeOut:(double)arg1 reply:(void (^)(NSXPCListenerEndpoint *, NSError *))arg2;
- (void)registerApplicationEndpoint:(NSXPCListenerEndpoint *)arg1;
@end
