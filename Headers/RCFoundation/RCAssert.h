//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet;
@protocol OS_os_log;

@interface RCAssert : NSObject
{
    NSObject<OS_os_log> *_log;
    NSCountedSet *_onceMessages;
}

+ (id)shared;
- (void).cxx_destruct;
- (id)stackTrace;
- (void)assertContinue:(id)arg1 file:(id)arg2 line:(long long)arg3 once:(BOOL)arg4;
- (id)init;

@end
