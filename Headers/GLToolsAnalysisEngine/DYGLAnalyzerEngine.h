//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUToolsServices/DYAnalyzerEngine.h>

@interface DYGLAnalyzerEngine : DYAnalyzerEngine
{
    StateMirrorManager_fa0796b2 mng;
}

+ (void)initNSUnarchiverClassTranslationMappings;
+ (id)getLocalizedString:(id)arg1 table:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_newHeuristicPoolWithGraphicsEngineID:(unsigned long long)arg1;
- (id)newFrameStatisticsFinding;
- (unsigned int)_stateMirrorProcessFunctionAndAnnotate:(const struct Function *)arg1 functionIndex:(int)arg2;
- (unsigned int)_stateMirrorProcessFunction:(const struct Function *)arg1 functionIndex:(int)arg2;
- (void)_stateMirrorInitialize;
- (unsigned int)_supportedGraphicsAPI;
- (id)nameForVariable:(const char *)arg1 graphicsEngineID:(unsigned long long)arg2;
- (id)getObjectLabel:(unsigned long long)arg1 objectType:(int)arg2 objectID:(int)arg3;
- (BOOL)isUniformFullyPreUpdatedInCapture:(unsigned long long)arg1 programID:(unsigned int)arg2 uniformLoc:(int)arg3;
- (BOOL)isObjectDataUpdatedInCapture:(unsigned long long)arg1 objectType:(int)arg2 objectID:(unsigned int)arg3;
- (BOOL)doesProgramHaveLinkedShader:(unsigned long long)arg1 programID:(unsigned int)arg2 shaderType:(int)arg3;
- (BOOL)isObjectCreatedInCapture:(unsigned long long)arg1 objectType:(int)arg2 objectID:(unsigned int)arg3;
- (BOOL)isObjectUsedInCapture:(unsigned long long)arg1 objectType:(int)arg2 objectID:(unsigned int)arg3;
- (BOOL)isObjectFullyPreUpdatedInCapture:(unsigned long long)arg1 objectType:(int)arg2 objectID:(unsigned int)arg3;
- (id)drawCallsUsingProgram:(unsigned int)arg1 graphicsEngineID:(unsigned long long)arg2;
- (id)getProgramArrayUsingShader:(unsigned long long)arg1 shaderID:(unsigned int)arg2;
- (id)getStaticObjectIDArray:(unsigned long long)arg1 objectType:(unsigned int)arg2;
- (void)enableStateDeltaGeneratorHeuristics;
- (void)configureForArchive:(id)arg1;
- (_Bool)isMultiSampledRenderingEnabledForContext:(unsigned long long)arg1;
- (ContextStateMirror_6e6ec125 *)getStateMirrorContext:(unsigned long long)arg1;
- (StateMirrorManager_fa0796b2 *)getStateMirrorManager;
- (struct PerStateMirrorAnnotation *)getPerStateMirrorAnnotation;
- (id)getSharegroupObjectCoverage:(unsigned long long)arg1;
- (int)getStateMirrorContextOpenGLFunctionalityLevel:(unsigned long long)arg1;
- (BOOL)deviceIsSGX535ForContext:(unsigned long long)arg1;
- (unsigned int)maxDrawBuffersForContext:(unsigned long long)arg1;
- (unsigned int)maxVertexAttribsForContext:(unsigned long long)arg1;
- (unsigned int)maxTransformFeedbackSeparateAttribsForContext:(unsigned long long)arg1;
- (unsigned int)maxUniformBufferBindingsForContext:(unsigned long long)arg1;
- (int)maxColorAttachmentsForContext:(unsigned long long)arg1;
- (unsigned int)getShaderIDFromProgram:(unsigned long long)arg1 shaderType:(int)arg2 programID:(unsigned int)arg3;
- (int)getShaderType:(unsigned long long)arg1 shaderID:(unsigned int)arg2;
- (id)getStaticProgramIdArray:(unsigned long long)arg1;
- (id)getStaticShaderIdArray:(unsigned long long)arg1;
- (id)getStaticBufferIdArray:(unsigned long long)arg1;
- (id)getStaticTextureIdArray:(unsigned long long)arg1;
- (void)_setContextIfPlatformFunc:(const struct Function *)arg1;
- (void)processFunction:(const struct Function *)arg1 blockMode:(int)arg2 streamMode:(BOOL)arg3 analyzeInserted:(BOOL)arg4 findingsHandler:(CDUnknownBlockType)arg5;
- (void)_populateHeuristicPool:(id)arg1;
- (void)enableAllHeuristics;
- (id)init;

@end

