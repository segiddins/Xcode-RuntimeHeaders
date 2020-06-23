//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUISimulatedSizeMetrics.h>

@class IBUISimulatedMetricsModifier, NSDictionary, NSValue;

@interface IBUIFixedSimulatedSizeMetrics : IBUISimulatedSizeMetrics
{
    NSDictionary *_normalizedOrientationToSizeMap;
    IBUISimulatedMetricsModifier *_simulatedMetricsModifier;
    NSValue *_documentViewInset;
}

+ (id)fixedSizeMetricWithSizeForAllOrientations:(struct CGSize)arg1 documentViewInset:(CDStruct_c519178c)arg2 metricsModifier:(id)arg3;
+ (id)fixedSizeMetricWithSize:(struct CGSize)arg1 interfaceOrientation:(long long)arg2 documentViewInset:(CDStruct_c519178c)arg3 metricsModifier:(id)arg4;
+ (id)normalizedOrientationToSizeMapWithSizeForAllOrientations:(struct CGSize)arg1;
+ (id)normalizedOrientationToSizeMapForSize:(struct CGSize)arg1 interfaceOrientation:(long long)arg2;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
+ (id)instantiateWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqualToSimulatedSizeMetrics:(id)arg1;
- (id)effectiveSimulatedCanvasFrameContentViewSizeForOrientation:(long long)arg1;
- (struct CGSize)sizeForInterfaceOrientation:(long long)arg1;
@property(readonly, nonatomic) struct CGSize landscapeSize;
@property(readonly, nonatomic) struct CGSize portraitSize;
- (id)fixedSizeMetricsForScreenMetrics:(id)arg1 orientationMetrics:(id)arg2 freeformSize:(struct CGSize)arg3;
- (id)displayName;
@property(readonly, copy, nonatomic) NSDictionary *normalizedOrientationToSizeMap;
@property(readonly, nonatomic) NSValue *documentViewInset;
- (id)metricsModifier;
- (id)initWithNormalizedOrientationToSizeMap:(id)arg1 documentViewInset:(CDStruct_c519178c)arg2 metricsModifier:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (BOOL)validateNormalizedOrientationToSizeMap;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;

@end

