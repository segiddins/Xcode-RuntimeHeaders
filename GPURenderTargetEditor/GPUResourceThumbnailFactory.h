//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSBundle, NSCache;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface GPUResourceThumbnailFactory : NSObject
{
    NSBundle *_assetBundle;
    NSObject<OS_dispatch_semaphore> *_renderersSema;
    struct {
        void *opaque1;
        long long opaque2;
    } _freeRenderers;
    struct ImageRenderer *_renderers[8];
    NSCache *_thumbnailImageCache;
}

+ (id)sharedThumbnailFactory;
- (void).cxx_destruct;
- (void)invalidateThumbnailForResource:(id)arg1;
- (id)thumbnailWithResourceItem:(id)arg1 withContentsScale:(double)arg2 nocache:(BOOL)arg3;
- (id)thumbnailWithResourceItem:(id)arg1 withContentsScale:(double)arg2;
- (id)defaultImageForResourceItem:(id)arg1;
- (id)_generateThumbnailForImage:(id)arg1 withContentsScale:(double)arg2 nocache:(BOOL)arg3;
- (id)_generateDefaultThumbnailForImage:(id)arg1;
- (id)_imageFromThumbnailCacheForResourceItem:(id)arg1;
- (void)_addImageToThumbnailCache:(id)arg1 forResourceItem:(id)arg2 withCost:(unsigned long long)arg3;
- (void)dealloc;
- (id)init;

@end

