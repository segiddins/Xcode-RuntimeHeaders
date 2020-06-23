//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GPUDebuggerMTLSupport/MTLResource-Protocol.h>

@class MTLSharedTextureHandle;
@protocol MTLBuffer, MTLDevice, MTLResource, MTLTexture;

@protocol MTLTexture <MTLResource>
- (id <MTLTexture>)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange)arg3 slices:(struct _NSRange)arg4 swizzle:(CDStruct_a06f635e)arg5;
@property(nonatomic, readonly) CDStruct_a06f635e swizzle;
- (id <MTLTexture>)newRemoteTextureViewForDevice:(id <MTLDevice>)arg1;
@property(nonatomic, readonly) id <MTLTexture> remoteStorageTexture;
- (MTLSharedTextureHandle *)newSharedTextureHandle;
- (id <MTLTexture>)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange)arg3 slices:(struct _NSRange)arg4;
- (id <MTLTexture>)newTextureViewWithPixelFormat:(unsigned long long)arg1;
- (void)replaceRegion:(CDStruct_4c83c94d)arg1 mipmapLevel:(long long)arg2 withBytes:(void *)arg3 bytesPerRow:(long long)arg4;
- (void)getBytes:(void *)arg1 bytesPerRow:(long long)arg2 fromRegion:(CDStruct_4c83c94d)arg3 mipmapLevel:(long long)arg4;
- (void)replaceRegion:(CDStruct_4c83c94d)arg1 mipmapLevel:(long long)arg2 slice:(long long)arg3 withBytes:(void *)arg4 bytesPerRow:(long long)arg5 bytesPerImage:(long long)arg6;
- (void)getBytes:(void *)arg1 bytesPerRow:(long long)arg2 bytesPerImage:(long long)arg3 fromRegion:(CDStruct_4c83c94d)arg4 mipmapLevel:(long long)arg5 slice:(long long)arg6;
@property(nonatomic, readonly) BOOL allowGPUOptimizedContents;
- (BOOL)isFramebufferOnly;
- (BOOL)isShareable;
@property(nonatomic, readonly) unsigned long long usage;
@property(nonatomic, readonly) long long arrayLength;
@property(nonatomic, readonly) long long sampleCount;
@property(nonatomic, readonly) long long mipmapLevelCount;
@property(nonatomic, readonly) long long depth;
@property(nonatomic, readonly) long long height;
@property(nonatomic, readonly) long long width;
@property(nonatomic, readonly) unsigned long long pixelFormat;
@property(nonatomic, readonly) unsigned long long textureType;
@property(nonatomic, readonly) long long iosurfacePlane;
@property(nonatomic, readonly) struct __IOSurface *iosurface;
@property(nonatomic, readonly) long long bufferBytesPerRow;
@property(nonatomic, readonly) long long bufferOffset;
@property(nonatomic, readonly) id <MTLBuffer> buffer;
@property(nonatomic, readonly) long long parentRelativeSlice;
@property(nonatomic, readonly) long long parentRelativeLevel;
@property(nonatomic, readonly) id <MTLTexture> parentTexture;
@property(nonatomic, readonly) id <MTLResource> rootResource;

// Remaining properties
@property(nonatomic, readonly) BOOL framebufferOnly;
@property(nonatomic, readonly) BOOL shareable;
@end

