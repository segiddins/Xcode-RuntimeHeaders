//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBSimulatedMetricsContainer.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCoding-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCopying-Protocol.h>

@class IBUISimulatedMetricChain, NSString;

@interface IBUISimulatedMetricsContainer : IBSimulatedMetricsContainer <IBDocumentArchiving, NSCoding, NSCopying>
{
    IBUISimulatedMetricChain *_metricChain;
    id _simulatedStatusBarMetrics;
    id _simulatedTopBarMetrics;
    id _simulatedBottomBarMetrics;
    id _simulatedDestinationMetrics;
    id _simulatedOrientationMetrics;
    id _simulatedScreenMetrics;
    id _simulatedSceneMemberConfiguration;
    id _simulatedDeviceMemberConfiguration;
}

+ (id)orderedSimulatedMetricsKeyToArchiveKeyMap;
+ (id)defaultSimulatedMetricsForDocument:(id)arg1;
+ (id)containerOfInferredSentinels;
+ (id)containerByFlatteningPipelineOfContainers:(id)arg1;
+ (id)_simulatedMetricsKeyPaths;
@property(copy) id simulatedDeviceMemberConfiguration; // @synthesize simulatedDeviceMemberConfiguration=_simulatedDeviceMemberConfiguration;
@property(copy) id simulatedSceneMemberConfiguration; // @synthesize simulatedSceneMemberConfiguration=_simulatedSceneMemberConfiguration;
@property(copy) id simulatedScreenMetrics; // @synthesize simulatedScreenMetrics=_simulatedScreenMetrics;
@property(copy) id simulatedOrientationMetrics; // @synthesize simulatedOrientationMetrics=_simulatedOrientationMetrics;
@property(copy) id simulatedDestinationMetrics; // @synthesize simulatedDestinationMetrics=_simulatedDestinationMetrics;
@property(copy) id simulatedBottomBarMetrics; // @synthesize simulatedBottomBarMetrics=_simulatedBottomBarMetrics;
@property(copy) id simulatedTopBarMetrics; // @synthesize simulatedTopBarMetrics=_simulatedTopBarMetrics;
@property(copy) id simulatedStatusBarMetrics; // @synthesize simulatedStatusBarMetrics=_simulatedStatusBarMetrics;
@property(retain, nonatomic) IBUISimulatedMetricChain *metricChain; // @synthesize metricChain=_metricChain;
- (void).cxx_destruct;
- (id)marshallableRepresentationWithFreeformSize:(struct CGSize)arg1 platform:(id)arg2;
- (void)unarchiveSimulatedMetrics:(id)arg1;
- (void)archiveSimulatedMetrics:(id)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

