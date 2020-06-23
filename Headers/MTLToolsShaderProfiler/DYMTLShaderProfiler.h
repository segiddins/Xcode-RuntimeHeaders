//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUToolsShaderProfiler/DYShaderProfiler.h>

@class NSDictionary, NSString;
@protocol DYPShaderProfiler;

@interface DYMTLShaderProfiler : DYShaderProfiler
{
    id <DYPShaderProfiler> _platformShaderProfiler;
    BOOL _useEncoderDataForCounters;
    NSString *_metalPluginName;
    NSDictionary *_derivedCounterInfoResult;
    NSDictionary *_payload;
    NSDictionary *_shaderInfoResult;
}

+ (BOOL)isDisassemblerAvailable;
+ (id)newShaderProfilerWithDelegate:(id)arg1;
- (void).cxx_destruct;
- (void)_saveAddressList:(struct DYMTLShaderProfilerProgramAddress *)arg1 size:(unsigned int)arg2 filename:(const char *)arg3;
- (void)_generateSamplesForResult:(id)arg1 withProgramAddressLUT:(vector_321b30a3 *)arg2 withBatchIndexMin:(unsigned int)arg3 andBatchIndexMax:(unsigned int)arg4 andMinIndex:(unsigned int)arg5 withProgramAddressList:(struct DYMTLShaderProfilerProgramAddress *)arg6 withUSCSampleList:(struct DYMTLShaderProfilerUSCSample *)arg7 withUSCSampleNum:(unsigned int)arg8 withBatchIDToEncoderIndex:(vector_f672cb0f *)arg9 andEncoderIndexToBatchIdMap:(unordered_map_67b1bd34 *)arg10;
- (void)_preProcessUSCSampleData:(id)arg1 result:(id)arg2 targetIndex:(int)arg3;
- (id)_gatherStaticInformation;
- (id)_constructPayload;
- (id)initWithDelegate:(id)arg1;
- (id)profileShader:(id)arg1;
- (id)_queryDerivedCounterDataWithDelegate:(id)arg1 withShaderInfoResult:(id)arg2 forPayload:(id)arg3 withShaderProfilerResult:(id)arg4;
- (void)_showDrawCallDataforResult:(id)arg1;
- (id)profileFrame;
- (id)computeFromFrameInfoResult:(id)arg1 forFuture:(id)arg2;
- (void)_dumpTraceProfileDataForResult:(id)arg1;
- (id)computeFromShaderInfoResult:(id)arg1 forPayload:(id)arg2 forFuture:(id)arg3;
- (void)collectBatchFilteredDataForShaderProfilerResult:(id)arg1;
- (id)_updateDrawCallTimingCounters:(unsigned int)arg1 forShaderProfilerResult:(id)arg2 withDrawCallData:(id)arg3 withBottleNeckAnalysisDrawCallsData:(id)arg4 withCounterIndices:(const tuple_944faa43 *)arg5;
- (id)_preparePrioritizedPerEncoderDrawListFromShaderProfilerResult:(id)arg1 andGetMaxDrawsPerEncoder:(unsigned long long *)arg2 andGetEncoderBatchIndexToDrawIndexMap:(unordered_map_84a1d227 *)arg3 andGetDrawCallIndexToEncoderBatchIndexMap:(unordered_map_82c9fb87 *)arg4;
- (void)_setupFragmentEncoderCountersPerDrawCall:(id)arg1;
- (id)_setupLimiterInfoPerDrawCall:(id)arg1 forPayload:(id)arg2;
- (id)_processEncoderTimeData:(id)arg1 withKickTimeData:(id)arg2 forPayload:(id)arg3 withGPUTime:(unsigned long long)arg4;
- (void)enumerateFragmentShadersForResult:(id)arg1 andShaderInfoDictionary:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)initializeShaderAnalyzer;

@end

