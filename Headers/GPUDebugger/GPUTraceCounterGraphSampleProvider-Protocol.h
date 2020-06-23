//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class DYJSScriptingContext, GPUTraceCounterGraphDataItem, NSArray, NSDictionary, NSString;

@protocol GPUTraceCounterGraphSampleProvider
@property(readonly, nonatomic) NSDictionary *vendorAnalysisConfigurationVariables;
@property(readonly, nonatomic) NSDictionary *vendorAnalysisFunctions;
@property(readonly, nonatomic) NSString *vendorAnalysisScript;
- (void)exportScriptingContext:(DYJSScriptingContext *)arg1 dataItem:(GPUTraceCounterGraphDataItem *)arg2;
- (NSArray *)computeMaskIndices;
- (NSArray *)collectToolsCounters:(GPUTraceCounterGraphDataItem *)arg1;
- (NSArray *)samplesForAnalysis;
- (NSArray *)samplesBase;
- (NSArray *)samples;
@end

