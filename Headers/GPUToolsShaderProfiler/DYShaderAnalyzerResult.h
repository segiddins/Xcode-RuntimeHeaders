//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUToolsShaderProfiler/NSCopying-Protocol.h>
#import <GPUToolsShaderProfiler/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary;

@interface DYShaderAnalyzerResult : NSObject <NSSecureCoding, NSCopying>
{
    double _instructionCount;
    double _instructionCountMin;
    double _instructionCountMax;
    double _totalCost;
    NSDictionary *_totalPerLineCost;
    NSDictionary *_drawCallCost;
    NSDictionary *_drawCallPerLineCost;
    NSDictionary *_perFileCost;
    NSDictionary *_sourceInfo;
    NSArray *_binaryDisassemblyInfo;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSArray *binaryDisassemblyInfo; // @synthesize binaryDisassemblyInfo=_binaryDisassemblyInfo;
@property(retain, nonatomic) NSDictionary *sourceInfo; // @synthesize sourceInfo=_sourceInfo;
@property(retain, nonatomic) NSDictionary *perFileCost; // @synthesize perFileCost=_perFileCost;
@property(retain, nonatomic) NSDictionary *drawCallPerLineCost; // @synthesize drawCallPerLineCost=_drawCallPerLineCost;
@property(retain, nonatomic) NSDictionary *drawCallCost; // @synthesize drawCallCost=_drawCallCost;
@property(retain, nonatomic) NSDictionary *totalPerLineCost; // @synthesize totalPerLineCost=_totalPerLineCost;
@property(nonatomic) double totalCost; // @synthesize totalCost=_totalCost;
@property(nonatomic) double instructionCountMax; // @synthesize instructionCountMax=_instructionCountMax;
@property(nonatomic) double instructionCountMin; // @synthesize instructionCountMin=_instructionCountMin;
@property(nonatomic) double instructionCount; // @synthesize instructionCount=_instructionCount;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

