//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _TtC11GPUDebugger14GPUImageLoader : NSObject
{
}

+ (id)renderWithTexture:(id)arg1 renderingAttributes:(id)arg2 inputRegion:(struct CGRect)arg3 outputSize:(struct CGSize)arg4 error:(id *)arg5;
+ (id)loadAndProcessWithImage:(id)arg1 renderingAttributes:(id)arg2 error:(id *)arg3;
+ (id)loadAndProcessWithResource:(id)arg1 level:(long long)arg2 layer:(long long)arg3 component:(unsigned long long)arg4 renderingAttributes:(id)arg5 error:(id *)arg6;
+ (unsigned int)pixelFormatWithResource:(id)arg1 component:(unsigned long long)arg2;
- (id)init;

@end
