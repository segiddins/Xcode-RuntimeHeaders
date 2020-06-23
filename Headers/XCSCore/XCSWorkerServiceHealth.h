//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@interface XCSWorkerServiceHealth : XCSObject
{
    unsigned long long _persistentTurboSocketConnections;
    unsigned long long _persistentSocketIOConnections;
    unsigned long long _physicalMemoryUsed;
    unsigned long long _v8HeapAllocatedBytes;
    unsigned long long _v8HeapUsedBytes;
}

@property(nonatomic) unsigned long long v8HeapUsedBytes; // @synthesize v8HeapUsedBytes=_v8HeapUsedBytes;
@property(nonatomic) unsigned long long v8HeapAllocatedBytes; // @synthesize v8HeapAllocatedBytes=_v8HeapAllocatedBytes;
@property(nonatomic) unsigned long long physicalMemoryUsed; // @synthesize physicalMemoryUsed=_physicalMemoryUsed;
@property(nonatomic) unsigned long long persistentSocketIOConnections; // @synthesize persistentSocketIOConnections=_persistentSocketIOConnections;
@property(nonatomic) unsigned long long persistentTurboSocketConnections; // @synthesize persistentTurboSocketConnections=_persistentTurboSocketConnections;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;

// Remaining properties
@property(nonatomic) unsigned long long openDBConnections; // @dynamic openDBConnections;
@property(nonatomic) unsigned long long openHTTPConnections; // @dynamic openHTTPConnections;
@property(nonatomic) unsigned long long requestsPerSecond; // @dynamic requestsPerSecond;
@property(nonatomic) unsigned long long totalRequests; // @dynamic totalRequests;
@property(nonatomic) unsigned long long uptime; // @dynamic uptime;

@end

