//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsFoundation/NSSecureCoding-Protocol.h>

@interface DTCPUClusterInfo : NSObject <NSSecureCoding>
{
    unsigned long long _clusterID;
    unsigned long long _clusterFlags;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long clusterFlags; // @synthesize clusterFlags=_clusterFlags;
@property(readonly, nonatomic) unsigned long long clusterID; // @synthesize clusterID=_clusterID;
@property(readonly, nonatomic) BOOL isPerformanceCore;
@property(readonly, nonatomic) BOOL isEfficiencyCore;
- (id)initWithClusterID:(unsigned long long)arg1 flags:(unsigned long long)arg2;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
