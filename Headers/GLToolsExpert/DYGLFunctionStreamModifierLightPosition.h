//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUToolsServices/DYFunctionStreamModifier.h>

__attribute__((visibility("hidden")))
@interface DYGLFunctionStreamModifierLightPosition : DYFunctionStreamModifier
{
    unsigned int _light;
    float _position[4];
}

- (BOOL)processFunctionInArchiveModifier:(id)arg1;
- (id)initWithLight:(unsigned int)arg1 position:(float *)arg2;

@end

