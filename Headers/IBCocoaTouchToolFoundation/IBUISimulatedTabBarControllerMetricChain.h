//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBCocoaTouchToolFoundation/IBUISimulatedMetricChain.h>

@class IBUIMetricRepresentation;

@interface IBUISimulatedTabBarControllerMetricChain : IBUISimulatedMetricChain
{
    IBUIMetricRepresentation *_tabBar;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IBUIMetricRepresentation *tabBar; // @synthesize tabBar=_tabBar;
- (id)singleLinkPrettyDescription;
- (id)copyWithPrecedingMetric:(id)arg1;
- (BOOL)isEqualToMetricChain:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithTabBar:(id)arg1 precedingMetric:(id)arg2;

@end
