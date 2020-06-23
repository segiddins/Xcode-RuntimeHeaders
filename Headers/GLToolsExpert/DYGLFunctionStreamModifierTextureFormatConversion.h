//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GLToolsExpert/DYGLFunctionStreamModifierTrackTextures.h>

@interface DYGLFunctionStreamModifierTextureFormatConversion : DYGLFunctionStreamModifierTrackTextures
{
    unsigned int _scaleFactor;
    int _sizeMin;
}

- (BOOL)_isCompressedTextureFormat:(unsigned int)arg1;
- (void)_replaceTextureWithFunction:(const struct Function *)arg1 archiveModifier:(id)arg2;
- (BOOL)processFunctionInArchiveModifier:(id)arg1;
- (id)initWithTextures:(id)arg1 options:(id)arg2;
- (id)initWithTextures:(id)arg1;

@end

