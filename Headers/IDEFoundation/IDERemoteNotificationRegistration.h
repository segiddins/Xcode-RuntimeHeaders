//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSError;

@interface IDERemoteNotificationRegistration : NSObject
{
    NSData *_token;
    NSError *_error;
}

+ (id)registrationForDisabledState;
- (void).cxx_destruct;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSData *token; // @synthesize token=_token;
- (id)remoteNotificationToken:(id *)arg1;
- (id)initWithToken:(id)arg1 tokenRegistrationError:(id)arg2;

@end
