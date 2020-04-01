//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUToolsShaderProfiler/DYShaderProfilerResult.h>

@class NSArray, NSDictionary, NSNumber;

@interface DYMTLShaderProfilerResult : DYShaderProfilerResult
{
    unsigned int _encoderCount;
    NSArray *_encoderTilerParamBufBytesUsedArray;
    NSNumber *_parameterBufferMaxSize;
    NSNumber *_parameterBufferMaxSizeEverMemless;
    NSNumber *_parameterBufferMaxSizeNeverMemless;
    NSDictionary *_parameterBufferPercentFullDict;
    NSDictionary *_softwareCounterInfo;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSDictionary *softwareCounterInfo; // @synthesize softwareCounterInfo=_softwareCounterInfo;
@property(retain, nonatomic) NSDictionary *parameterBufferPercentFullDict; // @synthesize parameterBufferPercentFullDict=_parameterBufferPercentFullDict;
@property(retain, nonatomic) NSNumber *parameterBufferMaxSizeNeverMemless; // @synthesize parameterBufferMaxSizeNeverMemless=_parameterBufferMaxSizeNeverMemless;
@property(retain, nonatomic) NSNumber *parameterBufferMaxSizeEverMemless; // @synthesize parameterBufferMaxSizeEverMemless=_parameterBufferMaxSizeEverMemless;
@property(retain, nonatomic) NSNumber *parameterBufferMaxSize; // @synthesize parameterBufferMaxSize=_parameterBufferMaxSize;
@property(retain, nonatomic) NSArray *encoderTilerParamBufBytesUsedArray; // @synthesize encoderTilerParamBufBytesUsedArray=_encoderTilerParamBufBytesUsedArray;
@property(nonatomic) unsigned int encoderCount; // @synthesize encoderCount=_encoderCount;
- (void).cxx_destruct;
- (id)exportDerivedCounterDataAtPath:(id)arg1 renameWhenConflict:(BOOL)arg2;
- (id)perLineInfoForFunctionFilePath:(id)arg1 withLibraryIdSet:(unordered_set_ef4c6246 *)arg2 atFunctionIndex:(unsigned int)arg3;
- (void)calculateRealTimeInfoWithGPUTime:(double)arg1;
- (void)_dividePerLineCost:(id)arg1 by:(double)arg2;
- (void)_addPerLineCost:(id)arg1 to:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

