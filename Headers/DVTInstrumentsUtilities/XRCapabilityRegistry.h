//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsUtilities/NSCopying-Protocol.h>
#import <DVTInstrumentsUtilities/NSMutableCopying-Protocol.h>

@class NSMutableDictionary;

@interface XRCapabilityRegistry : NSObject <NSMutableCopying, NSCopying>
{
    NSMutableDictionary *_capabilityRanges;
    NSMutableDictionary *_unimplementedRecoveries;
    NSMutableDictionary *_abandonedRecoveries;
}

+ (id)applicationCapabilities;
+ (void)initialize;
- (void).cxx_destruct;
- (struct _NSRange)supportedVersionsForCapability:(id)arg1;
- (unsigned long long)supportForCapability:(id)arg1 versions:(struct _NSRange)arg2;
- (id)abandonedRecoveryForCapability:(id)arg1;
- (id)unimplementedRecoveryForCapability:(id)arg1;
- (void)setUnimplementedRecoverySuggestion:(id)arg1 forCapability:(id)arg2;
- (void)setAbandonedRecoverySuggestion:(id)arg1 forCapability:(id)arg2;
- (void)registerCapability:(id)arg1 versions:(struct _NSRange)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithRanges:(id)arg1 unimplementedRecoveries:(id)arg2 abandonedRecoveries:(id)arg3;

@end
