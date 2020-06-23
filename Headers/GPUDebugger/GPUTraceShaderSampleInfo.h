//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GPUTraceShaderSampleFunctionInfo, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface GPUTraceShaderSampleInfo : NSObject
{
    NSMutableArray *_children;
    NSMutableDictionary *_inlineBlockAndDiassemblyInfo;
    float _costPercentage;
    BOOL _isInlined;
    int _callerLineIndex;
    GPUTraceShaderSampleFunctionInfo *_functionInfo;
    unsigned long long _identifier;
    GPUTraceShaderSampleInfo *_parent;
}

@property(nonatomic) BOOL isInlined; // @synthesize isInlined=_isInlined;
@property(readonly, nonatomic) __weak GPUTraceShaderSampleInfo *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) int callerLineIndex; // @synthesize callerLineIndex=_callerLineIndex;
@property(readonly, nonatomic) NSArray *children; // @synthesize children=_children;
@property(readonly, nonatomic) NSDictionary *inlineBlockAndDiassemblyInfo; // @synthesize inlineBlockAndDiassemblyInfo=_inlineBlockAndDiassemblyInfo;
@property(readonly, nonatomic) GPUTraceShaderSampleFunctionInfo *functionInfo; // @synthesize functionInfo=_functionInfo;
- (void).cxx_destruct;
- (id)description;
- (id)callSitesForFunction:(id)arg1;
- (id)flatten;
@property(readonly, nonatomic) NSArray *allDiassemblyInfo;
@property(readonly, nonatomic) float costPercentage;
- (void)_updateDiassemblyInfo:(id)arg1 inlineBlockInfo:(id)arg2;
- (void)sortChildrenByCost;
- (void)updateWithCallStack:(id)arg1 diassemblyInfo:(id)arg2;
- (id)initWithRootFunctionItem:(id)arg1 parent:(id)arg2 callerLineIndex:(int)arg3;

@end

