//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTTapConfig.h>

@class NSArray;

@interface DTNetStatTapConfig : DTTapConfig
{
    CDUnknownBlockType _sessionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType sessionHandler; // @synthesize sessionHandler=_sessionHandler;
- (void)addPid:(int)arg1;
- (void)setPids:(id)arg1;
- (id)pids;
@property(retain) NSArray *routeAttributes;
@property(retain) NSArray *udpAttributes;
@property(retain) NSArray *tcpAttributes;
@property(retain) NSArray *interfaceBlacklist;
@property(nonatomic) unsigned long long sampleInterval;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
