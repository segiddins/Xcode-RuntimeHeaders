//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTXAllowedRPC-Protocol.h>

@class NSArray, NSDictionary;

@protocol DTLeaksServiceAuthorizedRPC <DTXAllowedRPC>
- (NSArray *)requestVMregionStackLog:(int)arg1 forAddress:(unsigned long long *)arg2 size:(unsigned long long)arg3;
- (NSArray *)requestMallocStackLog:(int)arg1 forAddress:(unsigned long long *)arg2 size:(unsigned long long)arg3 isLiteZone:(unsigned int)arg4;
- (NSDictionary *)requestGraph:(unsigned long long)arg1 options:(NSDictionary *)arg2;
@end

