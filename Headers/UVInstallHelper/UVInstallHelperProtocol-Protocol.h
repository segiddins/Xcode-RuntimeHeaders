//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, NSURL;

@protocol UVInstallHelperProtocol
- (void)registerPlugInsForBundleAtURL:(NSURL *)arg1 completion:(void (^)(NSError *))arg2;
- (void)appContainerURLForAppSigningIdentifier:(NSString *)arg1 platform:(unsigned int)arg2 containerClass:(unsigned long long)arg3 withReply:(void (^)(NSURL *, NSError *))arg4;
@end

