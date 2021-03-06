//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTDeviceFoundation/DVTDeviceTokenAction-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface DVTDNATokenConnectAction : NSObject <DVTDeviceTokenAction>
{
    NSString *_identifier;
    NSObject<OS_dispatch_queue> *_operationQueue;
}

- (void).cxx_destruct;
- (void)performForDeviceToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSString *identifier;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

