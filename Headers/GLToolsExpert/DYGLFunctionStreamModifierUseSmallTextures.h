//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUToolsServices/DYFunctionStreamModifier.h>

@class NSMutableDictionary, NSMutableSet, NSSet;

@interface DYGLFunctionStreamModifierUseSmallTextures : DYFunctionStreamModifier
{
    NSMutableDictionary *_staticCandidateTexturesPerContext;
    NSMutableSet *_shrinkSet;
}

+ (void)_formatAndTypeForInternalFormat:(unsigned int)arg1 formatOut:(int *)arg2 typeOut:(int *)arg3;
+ (void)_replaceCompressedInternalFormatWithUncompressed:(const struct Function *)arg1;
@property(readonly, nonatomic) NSSet *shrinkSet; // @synthesize shrinkSet=_shrinkSet;
- (void).cxx_destruct;
- (void)_insertSmallTextureUpload:(unsigned long long)arg1 fenum:(unsigned int)arg2 target:(unsigned int)arg3 zOffset:(int)arg4 depth:(int)arg5 format:(unsigned int)arg6 type:(unsigned int)arg7 archiveModifier:(id)arg8;
- (void)_replaceCompressedTextureWithContext:(unsigned long long)arg1 fenum:(unsigned int)arg2 target:(unsigned int)arg3 zOffset:(int)arg4 depth:(int)arg5 internalFormat:(unsigned int)arg6 archiveModifier:(id)arg7;
- (unsigned int)_internalFormatOfBoundTextureLevel0:(unsigned long long)arg1 target:(unsigned int)arg2 archiveModifier:(id)arg3;
- (BOOL)shouldShrinkTextureOnContext:(unsigned long long)arg1 target:(unsigned int)arg2 archiveModifier:(id)arg3;
- (BOOL)processFunctionInArchiveModifier:(id)arg1;
- (id)_boundTexturesInUseForShaderStages:(unsigned int)arg1 archiveModifier:(id)arg2 context:(unsigned long long)arg3;
- (void)analyzeFunctionInArchiveModifier:(id)arg1;
- (BOOL)shouldAnalyze;
- (id)initWithTextures:(id)arg1;

@end

