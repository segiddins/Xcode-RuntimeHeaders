//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface XRCapabilityContext : NSObject
{
    struct _opaque_pthread_rwlock_t {
        long long __sig;
        char __opaque[192];
    } _lock;
    NSMutableDictionary *_capabilities;
    NSMutableDictionary *_unimplementedResponses;
}

+ (void)leaveContextSet:(id)arg1;
+ (void)enterContextSet:(id)arg1;
+ (id)currentContextSet;
+ (void)announceUsedCapability:(id)arg1 version:(unsigned long long)arg2;
- (void).cxx_destruct;
- (void)removeFromCurrentContextSet;
- (void)addToCurrentContextSet;
- (void)enumerateRequiredCapabilities:(CDUnknownBlockType)arg1;
- (void)announceUsedCapability:(id)arg1 version:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;

@end

