//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC11GPUDebugger23GPUTextureImageResponse : NSObject
{
    MISSING_TYPE *descriptors;
    MISSING_TYPE *images;
}

- (void).cxx_destruct;
- (id)init;
- (void)enumerateImages:(CDUnknownBlockType)arg1;
- (struct CGImage *)imageForToken:(long long)arg1;
@property(nonatomic, readonly) long long imageCount;

@end

