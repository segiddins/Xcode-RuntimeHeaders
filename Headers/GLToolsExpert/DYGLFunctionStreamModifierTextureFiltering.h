//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUToolsServices/DYFunctionStreamModifier.h>

@class NSDictionary;

@interface DYGLFunctionStreamModifierTextureFiltering : DYFunctionStreamModifier
{
    NSDictionary *_minFilters;
    NSDictionary *_magFilters;
    float _maxAnisotropy;
}

+ (void)updateFilterModeInFunc:(const struct Function *)arg1 usingDictionary:(id)arg2;
- (void).cxx_destruct;
- (BOOL)processFunctionInArchiveModifier:(id)arg1;
- (id)initWithMinFilters:(id)arg1 magFilters:(id)arg2 maxAnisotropy:(float)arg3;
- (id)init;

@end

