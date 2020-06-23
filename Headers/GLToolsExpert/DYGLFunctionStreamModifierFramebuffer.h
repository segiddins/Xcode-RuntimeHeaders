//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUToolsServices/DYFunctionStreamModifier.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface DYGLFunctionStreamModifierFramebuffer : DYFunctionStreamModifier
{
    unsigned long long context;
    NSMutableArray *attachments;
    NSMutableDictionary *renderbufferFormats;
    NSMutableArray *stateStack;
    float newViewportScale[2];
    double contentsScale;
    unsigned int presentedRenderbuffer;
    unsigned int mainFramebuffer;
    unsigned int boundFramebuffer;
    unsigned int boundRenderbuffer;
    unsigned int boundTexture2D;
    unsigned int depthBuffer;
    unsigned int depthBufferLevel;
    unsigned int stencilBuffer;
    unsigned int surfaceSize[2];
    unsigned int sampleCount;
    int origViewport[4];
    int origScissor[4];
    int newViewport[4];
    unsigned int origFormat;
    unsigned int depthBufferType;
    BOOL viewportChanged;
    BOOL scissorChanged;
}

+ (void)_setCGFloatArgument:(struct Argument *)arg1 index:(int)arg2 value:(double)arg3;
- (void).cxx_destruct;
- (void)updateViewportOrScissor:(struct Function *)arg1;
- (void)createRenderbufferGroup:(id)arg1 renderbuffer:(unsigned int)arg2 format:(unsigned int)arg3;
- (BOOL)processFunctionInArchiveModifier:(id)arg1;
- (id)initWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 contentsScale:(double)arg3 sampleCount:(unsigned int)arg4;
- (id)init;

@end
