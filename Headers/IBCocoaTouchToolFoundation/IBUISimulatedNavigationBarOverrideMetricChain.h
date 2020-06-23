//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IBCocoaTouchToolFoundation/IBUISimulatedMetricChain.h>

@class IBUIMetricRepresentation;

@interface IBUISimulatedNavigationBarOverrideMetricChain : IBUISimulatedMetricChain
{
    BOOL _forcePrompt;
    IBUIMetricRepresentation *_navigationBar;
}

@property(readonly, nonatomic) BOOL forcePrompt; // @synthesize forcePrompt=_forcePrompt;
@property(readonly, nonatomic) IBUIMetricRepresentation *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void).cxx_destruct;
- (id)singleLinkPrettyDescription;
- (id)copyWithPrecedingMetric:(id)arg1;
- (BOOL)isEqualToMetricChain:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithNavigationBar:(id)arg1 forcePrompt:(BOOL)arg2 precedingMetric:(id)arg3;

@end

