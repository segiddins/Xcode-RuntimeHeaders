//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebugger/GPURenderJob.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GPUMTLTextureDisplayableRenderJob : GPURenderJob
{
    unsigned long long _elementIndex;
    NSString *_displayElementName;
}

- (void).cxx_destruct;
- (id)canonicalTextureName;
- (id)displayElementName;
- (BOOL)isStencilDisplayElement;
- (BOOL)isDepthDisplayElement;
- (id)initWithResource:(id)arg1 modelFactory:(id)arg2 displayableItem:(id)arg3 elementIndex:(unsigned long long)arg4 level:(unsigned long long)arg5 slice:(unsigned long long)arg6;

@end

