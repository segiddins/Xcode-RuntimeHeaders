//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUToolsShaderProfiler/NSCoding-Protocol.h>
#import <GPUToolsShaderProfiler/NSCopying-Protocol.h>

@class NSMutableArray, NSMutableDictionary;

@interface DYShaderProfilerResult : NSObject <NSCoding, NSCopying>
{
    struct DYShaderProfilerTiming _vertexTiming;
    struct DYShaderProfilerTiming _fragmentTiming;
    struct DYShaderProfilerTiming _computeTiming;
    struct unordered_map<unsigned long long, unsigned int, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, unsigned int>>> _drawCallInfoIndexMap;
    struct unordered_map<unsigned long long, unsigned int, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, unsigned int>>> _programInfoIndexMap;
    struct unordered_map<unsigned long long, unsigned int, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, unsigned int>>> _programPipelineInfoIndexMap;
    NSMutableDictionary *_vertexShaderBinaryInfo;
    NSMutableDictionary *_fragmentShaderBinaryInfo;
    NSMutableDictionary *_computeKernelBinaryInfo;
    struct unordered_map<unsigned long long, unsigned int, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, unsigned int>>> _perContextDrawCallCounterMap;
    unsigned int _vertexCount;
    unsigned int _fragmentCount;
    unsigned int _instanceCount;
    unsigned int _deviceUtilization;
    unsigned int _tilerUtilization;
    unsigned int _rendererUtilization;
    NSMutableArray *_drawCallInfoList;
    NSMutableArray *_programInfoList;
    NSMutableArray *_programPipelineInfoList;
    unsigned long long _frameTime;
    double _gpuTime;
}

@property(nonatomic) double gpuTime; // @synthesize gpuTime=_gpuTime;
@property(nonatomic) unsigned int rendererUtilization; // @synthesize rendererUtilization=_rendererUtilization;
@property(nonatomic) unsigned int tilerUtilization; // @synthesize tilerUtilization=_tilerUtilization;
@property(nonatomic) unsigned int deviceUtilization; // @synthesize deviceUtilization=_deviceUtilization;
@property(nonatomic) unsigned long long frameTime; // @synthesize frameTime=_frameTime;
@property(nonatomic) unsigned int instanceCount; // @synthesize instanceCount=_instanceCount;
@property(nonatomic) struct DYShaderProfilerTiming computeTiming; // @synthesize computeTiming=_computeTiming;
@property(nonatomic) struct DYShaderProfilerTiming fragmentTiming; // @synthesize fragmentTiming=_fragmentTiming;
@property(nonatomic) unsigned int fragmentCount; // @synthesize fragmentCount=_fragmentCount;
@property(nonatomic) struct DYShaderProfilerTiming vertexTiming; // @synthesize vertexTiming=_vertexTiming;
@property(nonatomic) unsigned int vertexCount; // @synthesize vertexCount=_vertexCount;
@property(retain, nonatomic) NSMutableArray *programPipelineInfoList; // @synthesize programPipelineInfoList=_programPipelineInfoList;
@property(retain, nonatomic) NSMutableArray *programInfoList; // @synthesize programInfoList=_programInfoList;
@property(retain, nonatomic) NSMutableArray *drawCallInfoList; // @synthesize drawCallInfoList=_drawCallInfoList;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)perLineInfoForProgramInfo:(id)arg1 atFunctionIndex:(unsigned int)arg2 fragShader:(BOOL)arg3 totalCost:(BOOL)arg4;
- (id)shaderSourceForProgramInfo:(id)arg1 atFunctionIndex:(unsigned int)arg2;
- (id)_drawCallInfoWithProgramInfo:(id)arg1 atFunctionIndex:(unsigned int)arg2;
- (void)calculateRealTimeInfoWithGPUTime:(double)arg1;
- (void)calculateRealDrawCallTimeInfo;
- (id)programPipelineInfoWithId:(unsigned long long)arg1;
- (id)programInfoWithId:(unsigned long long)arg1;
- (id)drawCallInfoWithFunctionIndex:(unsigned int)arg1;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

