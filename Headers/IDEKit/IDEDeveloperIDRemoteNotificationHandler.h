//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDERemoteNotificationHandling-Protocol.h>

@class NSString;

@interface IDEDeveloperIDRemoteNotificationHandler : NSObject <IDERemoteNotificationHandling>
{
}

- (BOOL)handleNotificationPayload:(id)arg1 error:(id *)arg2;
- (BOOL)canHandleNotificationPayload:(id)arg1;
- (id)_devIDPlusDictionaryFromPayload:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

