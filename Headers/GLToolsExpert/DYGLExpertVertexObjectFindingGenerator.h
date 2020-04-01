//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GLToolsExpert/DYGLExpertFindingGenerator.h>

@class DYGLExpertAnalyzerFindingWrapper;

__attribute__((visibility("hidden")))
@interface DYGLExpertVertexObjectFindingGenerator : DYGLExpertFindingGenerator
{
    DYGLExpertAnalyzerFindingWrapper *afWrapperVerticesNotInVBO;
    DYGLExpertAnalyzerFindingWrapper *afWrapperIndicesNotInVBO;
    DYGLExpertAnalyzerFindingWrapper *afWrapperNotInVAO;
}

@property(retain, nonatomic) DYGLExpertAnalyzerFindingWrapper *afWrapperNotInVAO; // @synthesize afWrapperNotInVAO;
@property(retain, nonatomic) DYGLExpertAnalyzerFindingWrapper *afWrapperIndicesNotInVBO; // @synthesize afWrapperIndicesNotInVBO;
@property(retain, nonatomic) DYGLExpertAnalyzerFindingWrapper *afWrapperVerticesNotInVBO; // @synthesize afWrapperVerticesNotInVBO;
- (void).cxx_destruct;
- (void)_generateFinding:(int)arg1 withAfWrapper:(id)arg2 withNotableEvidence:(unsigned int)arg3;
- (unsigned int)execute;
- (void)preprocess;

@end

